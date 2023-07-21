#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <iomanip>
#include "required.hpp"
#include <windows.h>
#include <mmsystem.h>
#include <fstream>
#include <math.h>
#include <opencv2\\opencv.hpp>

using namespace std;
using namespace cv;
using namespace ml;
using namespace cv;

fstream file;
CascadeClassifier face_cascade;
int max_number;
string name, filename, Admin_pass = "Om_Shingare";
int filenumber = 0, Audio_Support = 1, chk_delete_fun_exit = 0;

void loading()
{
    system("cls");
    char load[] = "loading";
    char dots[] = "...";
    for (int i = 0; i < sizeof(load) / sizeof(char); i++)
    {
        std::cout << load[i];
        Sleep(300);
    }
    for (int i = 0; i < sizeof(dots) / sizeof(char); i++)
    {
        cout << dots[i];
        Sleep(500);
    }
    system("cls");
}

class Branch
{
protected:
    string Branch_name;
    int Branch_Num_Of_EMP;
    string Branch_service_rank;
    int Branch_id;

};

////////// staff

class Employee
{
protected:
    int Emp_Id;
    string Emp_Name;
    string Emp_distingtion;
    float Emp_salary;


};

class security
{
protected:
    int max_number;
    string Warning = "You are under the CCTV camera... ";
    int Audio_Support;
    char Alert[100];

public:
    friend void Set_security();
    void Get_security()
    {
        cout << " The Max number of the persons is :  " << max_number << endl;
        cout << " Audio =  " << Audio_Support << endl;
    }
    friend void Person_checking();
};

void Set_security()
{
    cout << "                ************ Enter the security details ************             " << endl;
    if (Audio_Support == 1)
        PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\security (!).wav"), NULL, SND_FILENAME);
    cout << "Enter the Max number of the persons" << endl;
    cin >> max_number;
    cout << "Enter the choice\n1. Audio support enable\n2. Audio support disable" << endl;
    cin >> Audio_Support;
}
void Person_checking()
{
    cout << "BANK CCTV starting....." << endl;
    if (Audio_Support == 1)
        PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\person_chaking().wav"), NULL, SND_FILENAME);
    Mat testSample = imread("D:\\testsample\\0.jpg", 0);
    int img_width = testSample.cols;
    int img_height = testSample.rows;
    string window = "Capture - face detection";
    if (!face_cascade.load("file\\haarcascade_frontalface_default.xml"))
    {
        cout << " Error loading file" << endl;
        return;
    }
    VideoCapture cap(0);

    if (!cap.isOpened())
    {
        cout << "exit" << endl;
        return;
    }
    long count = 0;
    string Pname = "";
    while (true)
    {
        vector<Rect> faces;
        Mat frame;
        Mat graySacleFrame;
        Mat original;
        cap >> frame;
        count = count + 1;
        if (!frame.empty())
        {
            original = frame.clone();
            cvtColor(original, graySacleFrame, COLOR_BGR2GRAY);
            face_cascade.detectMultiScale(graySacleFrame, faces, 1.2, 1, 0, cv::Size(90, 90));
            string frameset = to_string(count);
            string faceset = to_string(faces.size());
            int width = 0, height = 0;
            for (int i = 0; i < faces.size(); i++)
            {
                Rect face_i = faces[i];
                Mat face_chk;
                Mat face = graySacleFrame(face_i);
                Mat face_resized;
                face_chk = face_resized;
                resize(face, face_resized, Size(img_width, img_height), 1.0, 1.0, INTER_CUBIC);
                double confidence = 0;
                Pname = "person";

                if (faces.size() <= max_number)
                    rectangle(original, face_i, CV_RGB(0, 255, 0), 1);
                else
                    rectangle(original, face_i, CV_RGB(255, 0, 0), 3);
                string text = Pname;
                int pos_x = max(face_i.tl().x - 10, 0);
                int pos_y = max(face_i.tl().y - 10, 0);
                if (faces.size() <= max_number)
                    putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);
                else
                    putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(255, 0, 0), 1.0);
            }
            if (faces.size() <= max_number)
                putText(original, "No. of Persons detected: " + to_string(faces.size()), Point(30, 30), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 0, 0), 1.0);
            else
            {
                putText(original, "alert ! you reached maximum number ...", Point(30, 30), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(255, 0, 0), 1.0);
                if (Audio_Support == 1)
                {
                    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\beep-warning-6387.wav"), NULL, SND_FILENAME);
                }
            }
            imshow("CCTV (BANK BY OM SHINGARE)", original);
        }
        if (waitKey(30) >= 0)
            break;
    }
}

class Bank : public security, public Employee, public Branch
{
protected:
    int Bank_ID;
    string location;

};

class person
{
protected:
    string gender;
    string mobile_number;
    Full_name name;
    Address add_ress;
    Full_date DOB;
    check Is_minor;
    check Is_married;
    check Is_indian;
    string PAN;
    check Is_PAN;
    string email;

public:
    void set_person()
    {
        string temp;
        cout << "Enter the full name (first - middel - last) : ";
        cin >> name.First_name >> name.Middel_name >> name.Last_name;
        cout << "Enter the father's name and mother's name : ";
        cin >> name.Father_name >> name.Mother_name;
        cout << "Enter the email : ";
        cin >> email;
        cout << "Enter the mobile number : ";
        cin >> mobile_number;

        cout << "Enter the date of birth (DD-MM-YYYY) : ";
        cin >> DOB.date >> DOB.month >> DOB.year;

        cout << "Enter the address (address-city-pincode-state): ";
        cin >> add_ress.add_ress >> add_ress.city >> add_ress.pin_code >> add_ress.state;

        cout << "Is you minor (yes , no): ";
        cin >> temp;
        if (temp == "yes")
            Is_minor = yes;
        else if (temp == "no")
            Is_minor = no;

        cout << "Enter the gender (male/female) : ";
        cin >> gender;

        cout << "Is you married (yes , no): ";
        cin >> temp;
        if (temp == "yes")
            Is_married = yes;
        else if (temp == "no")
            Is_married = no;

        cout << "Is you indian (yes , no): ";
        cin >> temp;
        if (temp == "yes")
            Is_indian = yes;
        else if (temp == "no")
            Is_indian = no;

        cout << "Is you have pan card (yes , no): ";
        cin >> temp;
        if (temp == "yes")
        {
            Is_PAN = yes;
            cout << "Enter the PAN number : ";
            cin >> PAN;
        }
        else if (temp == "no")
            Is_PAN = no;
    }

    void get_person()
    {
        cout << "The full name is: ";
        cout << name.First_name << " " << name.Middel_name << " " << name.Last_name << endl;
        cout << "The father's name and mother's name  is : ";
        cout << name.Father_name << " " << name.Mother_name << endl;
        cout << "The email  is : ";
        cout << email << endl;
        cout << "The mobile number  is : ";
        cout << mobile_number << endl;

        cout << "The date of birth (DD-MM-YYYY)  is : ";
        cout << DOB.date << "/" << DOB.month << "/" << DOB.year << endl;

        cout << "The address  is : ";
        cout << add_ress.add_ress << " " << add_ress.city << " " << add_ress.pin_code << " " << add_ress.state << endl;

        cout << "The minority status is : ";
        if (Is_minor == yes)
            cout << " Yes " << endl;
        else
            cout << " No " << endl;

        cout << "The gender  is  : ";
        cout << gender << endl;

        cout << "The married status is :  ";
        if (Is_married == yes)
            cout << " Yes " << endl;
        else
            cout << " No " << endl;

        cout << "Is you indian (yes , no): ";
        if (Is_indian == yes)
            cout << " Yes " << endl;
        else
            cout << " No " << endl;

        cout << "Pan card status : ";
        if (Is_PAN == yes)
            cout << " Yes " << endl;
        else
            cout << " No " << endl;
    }
};

class account : public person, public Bank
{

protected:
    string account_number;
    string password;
    Full_date date;
    check Is_costumer;
    check Is_Other_User_Know;
    Details Other_User;
    check Is_Nominee;
    string email;
    Details Nominee;

public:
    void get_account()
    {
        string temp;
        cout << "Enter the branch name where you want to create the account : ";
        cin >> Branch_name;
        cout << "Enter the date (DD-MM-YYYY) : ";
        cin >> date.date >> date.month >> date.year;

        cout << "Enter the email : ";
        cin >> email;
    repete:
        cout << "Is you already have bank account (yes , no): ";
        cin >> temp;
        if (temp == "yes")
            Is_costumer = yes;
        else if (temp == "no")
            Is_costumer = no;
        else
        {
            goto repete;
        }

        cout << "Is you know any other user in same bank (yes , no): ";
        cin >> temp;
        if (temp == "yes")
        {

            Is_Other_User_Know = yes;

            cout << "\n\t\tEnter the other user details\n";
            cout << "Enter the age  : ";
            cin >> Other_User.age;

            cout << "\t\tEnter the account number  : ";
            cin >> Other_User.account_number;

            cout << "\t\tEnter the name (first - middel - last): ";
            cin >> Other_User.name.First_name >> Other_User.name.Middel_name >> Other_User.name.Last_name;

            cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
            cin >> Other_User.DOB.date >> Other_User.DOB.month >> Other_User.DOB.year;

            cout << "\t\tEnter the address (address-city-pincode-state): ";
            cin >> Other_User.address.add_ress >> Other_User.address.city >> Other_User.address.pin_code >> Other_User.address.state;
            cout << endl;
        }
        else if (temp == "no")
            Is_Other_User_Know = no;

        cout << "Is you want to add the nominee (yes , no): ";
        cin >> temp;
        if (temp == "yes")
        {

            Is_Nominee = yes;
            cout << "\n\t\tEnter the other nominee details\n";
            cout << "\t\tEnter the age  : ";
            cin >> Nominee.age;

            cout << "\t\tEnter the account number  : ";
            cin >> Nominee.account_number;

            cout << "\t\tEnter the name (first - middel - last): ";
            cin >> Nominee.name.First_name >> Nominee.name.Middel_name >> Nominee.name.Last_name;

            cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
            cin >> Nominee.DOB.date >> Nominee.DOB.month >> Nominee.DOB.year;

            cout << "\t\tEnter the address (address-city-pincode-state): ";
            cin >> Nominee.address.add_ress >> Nominee.address.city >> Nominee.address.pin_code >> Nominee.address.state;
            cout << endl;
        }
        else if (temp == "no")
            Is_Nominee = no;
        cout << "Enter the password for the account : ";
        cin >> password;

        account_number = "91" + mobile_number;
        cout << "Your account number is : " << account_number << endl;
    }
};

////////// apply
class apply : virtual public account
{

protected:
    check is_credit;
    string credit_card;
    int credit_pass;
    check is_debit;
    string debit_card;
    int debit_pass;
};

////// Transection

class transaction : virtual public account
{

protected:
    float Account_balence = 0.0F;
    char transaction_id[15];
};

class online_transaction : public transaction
{
protected:
    string upi_id;
    int upi_password;

public:
    void set_upi_pass()
    {
        cout << "enter the pass (4 digit) for upi: ";
        cin >> upi_password;
    }
};

class loan : virtual public account
{
protected:
    double monthlyPayment, Person_checking, interestRate, intrestSum, loan_balance;
    int month = 1;

public:
    void get_loan()
    {
        cout << "Enter the current balance of your loan: $";
        cin >> loan_balance;
        cout << "Enter the interest rate (compounded monthly) : ";
        cin >> interestRate;
        cout << "Enter the desired monthly payment : $";
        cin >> monthlyPayment;
    }

    void cal_loan()
    {
        while (interestRate >= 1)
            interestRate = interestRate / 100;

        loan_balance = loan_balance * (1 + interestRate / 12) - monthlyPayment;

        while (loan_balance > 0)
        {
            month++;

            if (loan_balance < monthlyPayment)
            {
                loan_balance = loan_balance - loan_balance;
            }
            else
            {
                loan_balance = loan_balance * (1 + interestRate / 12) - monthlyPayment;
            }
        }
    }

    void display_loan()
    {
        cout << "You have paid off the loan after " << month << " months's. " << endl;
    }
};

class fixed_deposite : virtual public account
{
protected:
    int fdno, month;
    float fd_ammount, fd_rate, m_amt;
    string fd_name;

public:
    void set_fixed_deposite()
    {
        cout << "Enter the Fixed deposite number : ";
        cin >> fdno;
        cout << "Enter the month : ";
        cin >> month;
        cout << "Enter the ammount : ";
        cin >> fd_ammount;
        cout << "Enter the rate : ";
        cin >> fd_rate;
        cout << "Enter the name : ";
        cin >> fd_name;
    }

    void calculate()
    {
        double yr;
        yr = month / 12.0;
        m_amt = float(fd_ammount * pow((1 + fd_rate / 100), yr));
    }

    void display()
    {
        cout << "The Fd number is :  " << fdno << endl;
        cout << "The Month is :  " << month << endl;
        cout << "The Amount is :  " << fd_ammount << endl;
        cout << "The Rate is :  " << fd_rate << endl;
        cout << "The Maturity Amount is :  " << m_amt << endl;
        cout << "The Name is  :  " << fd_name << endl;
    }
};

class customer : public fixed_deposite, public loan, public online_transaction, public apply
{
protected:
    static int count;

public:
    int customer_id;
    customer()
    {
        count++;
        customer_id = count;
    }
    void get_costomer_ID()
    {
        cout << "ID = " << customer_id << endl;
    }

    friend struct node* Create_account(struct node* head);
    friend void Modify_account(struct node* head);
    friend struct node* Delete_account(struct node* head);
    friend void print(struct node* head);
    friend void Atm_transfer(struct node* head);
    friend void get_account_bal(struct node* ptr);
    friend void apply(struct node* head);
    friend void deposite(struct node* head);
    friend void assign_details(struct node* ptr, struct node* p);
    friend void apply_card(struct node* head);
    friend void with_draw(struct node* head);
    friend void loan_(struct node* head);
    friend void fixed_deposite(struct node* head);
    friend void allDetails(struct node* head);
};
int customer::count = 100;

struct node
{
    customer data;
    struct node* next;
};
void assign_details(struct node* ptr, struct node* p)
{
    ptr->data.gender = p->data.gender;
    ptr->data.name.First_name = p->data.name.First_name;
    ptr->data.name.Middel_name = p->data.name.Middel_name;
    ptr->data.name.Last_name = p->data.name.Last_name;
    ptr->data.name.Mother_name = p->data.name.Mother_name;
    ptr->data.name.Father_name = p->data.name.Father_name;
    ptr->data.DOB.date = p->data.DOB.date;
    ptr->data.DOB.month = p->data.DOB.month;
    ptr->data.DOB.year = p->data.DOB.year;
    ptr->data.Is_minor = p->data.Is_minor;
}

void get_account_bal(struct node* head)
{
    loading();
    cout << "                          WELCOME TO MODIFY/UPDATE ACCOUNT SECTION !\n\n\n";
    int chk1 = 0, chk = 0, esc;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
oma:
omaa:
    ptr = head;
    string temp, ac_no, pass;
    cout << "Enter the account number : ";
    esc = _getch();
    if (esc == 27)
        return;
    cin >> ac_no;

    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }

    if (chk1 == 1)
    {

        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }
    if (chk1 == -1)
        cout << "Your balence for account number " << ptr->data.account_number << " is " << ptr->data.Account_balence << endl;
    else
    {
        cout << "password wrong !" << endl;
        cout << "Wanna enter again perss enter or want to exit press esc " << endl;
        esc = 0;
        esc = _getch();
        if (esc == 13)
            goto omaa;
        else
            return;
    }
}

struct node* Create_account(struct node* head)
{

    string temp, temp_ac;
    struct node* ptr;
    string ac;
    ptr = new struct node;
    struct node* p;
    int as_chk = 0;
    p = head;
    if (head != NULL)
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        ptr->next = p->next;
        p->next = ptr;
    }
    else
    {
        ptr->next = NULL;
        head = ptr;
    }
    system("cls");

    cout << "                                                          WELCOME TO CREATE ACCOUNT SECTION !\n\n\n";
    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\welcome.wav"), NULL, SND_FILENAME);
    file.open("C:/Users/omshi/source/repos/Project3/Project3/FILE_HANDLING/om_bank.csv", ios::app | ios::in | ios::out);
    Sleep(100);
    system("color 7");

    int chk1 = 0, chk = 0;
    int esc;
    p = (struct node*)malloc(sizeof(struct node));
    cout << "Enter the branch name where you want to create the account : ";
    cin >> ptr->data.Branch_name;
    cout << "Enter the date (DD-MM-YYYY) : ";
    cin >> ptr->data.date.date >> ptr->data.date.month >> ptr->data.date.year;
repete:
    cout << "Is you already have bank account (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        ptr->data.Is_costumer = yes;
    else if (temp == "no")
        ptr->data.Is_costumer = no;
    else
    {
        goto repete;
    }
    if (ptr->data.Is_costumer == yes)
    {

    oma:
        p = head;
        string temp, ac_no, pass;
        cout << "Enter the account number : ";
        esc = _getch();
        if (esc == 27)
        {
            chk_delete_fun_exit = 1;
            return NULL;
        }
        cin >> temp_ac;

        while (p != NULL)
        {
            if (p->data.account_number == ac_no)
            {
                chk1 = 1;
                break;
            }
            p = p->next;
        }

        if (chk1 == 1)
        {

            cout << "Enter the pass for the account number " << p->data.account_number << " : ";
            cin >> pass;
            if (pass == p->data.password)
            {
                chk1 = -1;
            }
            else
            {
                system("cls");
                cout << "password wrong !" << endl;
                cout << "Enter esc for back ... " << endl;
                esc = _getch();
                if (esc == 27)
                {
                    system("cls");
                    goto oma;
                }
            }
        }
        if (chk1 == -1)
        {
            assign_details(ptr, p);
            as_chk = 1;
        }
    }
    if (as_chk != 1)
    {
        cout << "Enter the full name (first - middel - last) : ";
        cin >> ptr->data.name.First_name >> ptr->data.name.Middel_name >> ptr->data.name.Last_name;
        cout << "Enter the father's name and mother's name : ";
        cin >> ptr->data.name.Father_name >> ptr->data.name.Mother_name;

        cout << "Enter the date of birth (DD-MM-YYYY) : ";
        cin >> ptr->data.DOB.date >> ptr->data.DOB.month >> ptr->data.DOB.year;
        cout << "Is you minor (yes , no): ";
        cin >> temp;
        if (temp == "yes")
            ptr->data.Is_minor = yes;
        else if (temp == "no")
            ptr->data.Is_minor = no;

        cout << "Enter the gender (male/female) : ";
        cin >> ptr->data.gender;
    }

    cout << "Enter the email : ";
    cin >> ptr->data.email;
    cout << "Enter the mobile number : ";
    cin >> ptr->data.mobile_number;

    cout << "Enter the address (address-city-pincode-state): ";
    cin >> ptr->data.add_ress.add_ress >> ptr->data.add_ress.city >> ptr->data.add_ress.pin_code >> ptr->data.add_ress.state;

    cout << "Is you indian (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        ptr->data.Is_indian = yes;
    else if (temp == "no")
        ptr->data.Is_indian = no;
    cout << "Is you married (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        ptr->data.Is_married = yes;
    else if (temp == "no")
        ptr->data.Is_married = no;

    cout << "Is you know any other user in same bank (yes , no): ";
    cin >> temp;
    if (temp == "yes")
    {

        ptr->data.Is_Other_User_Know = yes;

        cout << "\n\t\tEnter the other user details\n";
        cout << "Enter the age  : ";
        cin >> ptr->data.Other_User.age;

        cout << "\t\tEnter the account number  : ";
        cin >> ptr->data.Other_User.account_number;

        cout << "\t\tEnter the name (first - middel - last): ";
        cin >> ptr->data.Other_User.name.First_name >> ptr->data.Other_User.name.Middel_name >> ptr->data.Other_User.name.Last_name;
        cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
        cin >> ptr->data.Other_User.DOB.date >> ptr->data.Other_User.DOB.month >> ptr->data.Other_User.DOB.year;

        cout << "\t\tEnter the address (address-city-pincode-state): ";
        cin >> ptr->data.Other_User.address.add_ress >> ptr->data.Other_User.address.city >> ptr->data.Other_User.address.pin_code >> ptr->data.Other_User.address.state;
        cout << endl;
    }
    else if (temp == "no")
        ptr->data.Is_Other_User_Know = no;

    cout << "Is you have pan card (yes , no): ";
    cin >> temp;
    if (temp == "yes")
    {
        ptr->data.Is_PAN = yes;
        cout << "Enter the PAN number : ";
        cin >> ptr->data.PAN;
    }
    else if (temp == "no")
        ptr->data.Is_PAN = no;

    cout << "Is you want to add the nominee (yes , no): ";
    cin >> temp;
    if (temp == "yes")
    {

        ptr->data.Is_Nominee = yes;
        cout << "\n\t\tEnter the other nominee details\n";
        cout << "\t\tEnter the age  : ";
        cin >> ptr->data.Nominee.age;

        cout << "\t\tEnter the account number  : ";
        cin >> ptr->data.Nominee.account_number;

        cout << "\t\tEnter the name (first - middel - last): ";
        cin >> ptr->data.Nominee.name.First_name >> ptr->data.Nominee.name.Middel_name >> ptr->data.Nominee.name.Last_name;

        cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
        cin >> ptr->data.Nominee.DOB.date >> ptr->data.Nominee.DOB.month >> ptr->data.Nominee.DOB.year;

        cout << "\t\tEnter the address (address-city-pincode-state): ";
        cin >> ptr->data.Nominee.address.add_ress >> ptr->data.Nominee.address.city >> ptr->data.Nominee.address.pin_code >> ptr->data.Nominee.address.state;
        cout << endl;
    }
    else if (temp == "no")
        ptr->data.Is_Nominee = no;
    cout << "Enter the password for the account : ";
    cin >> ptr->data.password;

    ptr->data.account_number = "91" + ptr->data.mobile_number;
    cout << "Your account number is : " << ptr->data.account_number << endl;
    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\createdone"), NULL, SND_FILENAME);
    Sleep(2000);
    //
    //

    // file << ptr->data.account_number << ',' << ptr->data.Branch_name << ',' << ptr->data.date.date << ',' << ptr->data.Is_costumer << ',' << ptr->data.name.First_name << ',' << ptr->data.name.Middel_name << ',' << ptr->data.name.Last_name << ',' << ptr->data.DOB.date << "/" << ptr->data.DOB.month << "/" << ptr->data.DOB.year << ',' << ptr->data.Is_minor << ',' << ptr->data.gender << ',' << ptr->data.mobile_number << ',' <<  ptr->data.add_ress.add_ress << " : " << ptr->data.add_ress.city << " : " << ptr->data.add_ress.pin_code << " : " << ptr->data.add_ress.state << ',' << ptr->data.Is_indian;
    ac = (ptr->data.account_number);
    file << ac
        << ',' << ptr->data.Branch_name
        << ',' << ptr->data.date.date << '/'
        << ptr->data.date.month << '/'
        << ptr->data.date.year << ','
        << ptr->data.Is_costumer
        << ',' << ptr->data.name.First_name
        << ',' << ptr->data.name.Middel_name
        << ',' << ptr->data.name.Last_name << ','
        << ptr->data.name.Father_name << ',' << ptr->data.name.Mother_name << ','
        << ptr->data.DOB.date << '/'
        << ptr->data.DOB.month << '/'
        << ptr->data.DOB.year
        << ',' << ptr->data.Is_minor
        << ',' << ptr->data.gender
        << ',' << ptr->data.email
        << ',' << ptr->data.mobile_number << ',' << ptr->data.add_ress.add_ress << "_"
        << ptr->data.add_ress.city << "_" << ptr->data.add_ress.pin_code << "_" << ptr->data.add_ress.state << ',' << ptr->data.Is_indian << endl;
    file.close();
    system("cls");
    return head;
}

/////////////////   modify

void Modify_account(struct node* head)
{
    loading();
    cout << "                          WELCOME TO MODIFY/UPDATE ACCOUNT SECTION !\n\n\n";
    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project3\\Project3\\update.wav"), NULL, SND_FILENAME);

    int chk1 = 0, chk = 0;
    int esc;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
oma:
    ptr = head;
    string temp, ac_no, pass;
    cout << "Enter the account number : ";
    esc = _getch();
    if (esc == 27)
        return;
    cin >> ac_no;

    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }

    if (chk1 == 1)
    {

        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }

    if (chk1 == -1)
    {
        system("cls");
        while (true)
        {
            system("cls");

            cout << "What you want to update / modify " << endl
                << "1.name" << endl
                << "2.address" << endl
                << "3.mobile number" << endl
                << "4.email" << endl
                << "5.PAN number" << endl
                << "6.Date of birth" << endl
                << "7.gender" << endl
                << "8.minor status" << endl
                << "9.married status" << endl
                << "10.Nominee details" << endl
                << "(ESC) : ESC " << endl;
            esc = 0;
            esc = _getch();
            if (esc == 27)
                return;
            cin >> chk;

            switch (chk)
            {
            case 1:
                system("cls");
                cout << "Enter the full name (first - middel - last) : ";
                cin >> ptr->data.name.First_name >> ptr->data.name.Middel_name >> ptr->data.name.Last_name;

                break;
            case 2:
                system("cls");
                cout << "\t\tEnter the address (address-city-pincode-state): ";
                cin >> ptr->data.add_ress.add_ress >> ptr->data.add_ress.city >> ptr->data.add_ress.pin_code >> ptr->data.add_ress.state;
                break;
            case 3:
                system("cls");
                cout << "Enter the mobile number : ";
                cin >> ptr->data.mobile_number;
                break;
            case 4:
                system("cls");
                cout << "Enter the email : ";
                cin >> ptr->data.email;
                break;
            case 5:
                system("cls");
                cout << "Enter the PAN number : ";
                cin >> ptr->data.PAN;
                break;
            case 6:
                system("cls");
                cout << "Enter the date of birth (DD-MM-YYYY) : ";
                cin >> ptr->data.DOB.date >> ptr->data.DOB.month >> ptr->data.DOB.year;
                break;

            case 7:
                system("cls");
                cout << "Enter the gender (male/female) : ";
                cin >> ptr->data.gender;
                break;

            case 8:
                system("cls");
                cout << "Is you minor (yes , no): ";
                cin >> temp;
                if (temp == "yes")
                    ptr->data.Is_minor = yes;
                else if (temp == "no")
                    ptr->data.Is_minor = no;
                break;

            case 9:
                system("cls");
                cout << "Is you married (yes , no): ";
                cin >> temp;
                if (temp == "yes")
                    ptr->data.Is_married = yes;
                else if (temp == "no")
                    ptr->data.Is_married = no;

                break;

            case 10:
                system("cls");
                cout << "Enter the nominee details  ";
                cout << "\n\t\tEnter the other nominee details\n";
                cout << "\t\tEnter the age  : ";
                cin >> ptr->data.Nominee.age;
                cout << "\t\tEnter the account number  : ";
                cin >> ptr->data.Nominee.account_number;
                cout << "\t\tEnter the name (first - middel - last): ";
                cin >> ptr->data.Nominee.name.First_name >> ptr->data.Nominee.name.Middel_name >> ptr->data.Nominee.name.Last_name;
                cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
                cin >> ptr->data.Nominee.DOB.date >> ptr->data.Nominee.DOB.month >> ptr->data.Nominee.DOB.year;
                cout << "\t\tEnter the address (address-city-pincode-state): ";
                cin >> ptr->data.Nominee.address.add_ress >> ptr->data.Nominee.address.city >> ptr->data.Nominee.address.pin_code >> ptr->data.Nominee.address.state;
                cout << endl;

                break;

            default:
                system("cls");
                cout << "Error !";
                Sleep(300);
                break;
            }
        }
    }
    system("cls");
    Sleep(100);
}

void print(struct node* head)
{
    system("cls");
    Sleep(100);
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    if (ptr == NULL)
    {
        cout << "empty !" << endl;
    }
    while (ptr != NULL)
    {
        cout << ptr->data.account_number << "\t";
        ptr = ptr->next;
        Sleep(1000);
    }
    cout << endl;
    Sleep(6000);
    system("cls");
}

struct node* Delete_account(struct node* head)
{
    cout << "called";

    system("cls");
    int chk3 = 0;
    loading();

    cout << "                          WELCOME TO DELETE ACCOUNT SECTION !\n\n\n";
    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project3\\Project3\\delete.wav"), NULL, SND_FILENAME);

    string reson;
    int chk1 = 0, esc;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    struct node* p = (struct node*)malloc(sizeof(struct node));
    struct node* z = (struct node*)malloc(sizeof(struct node));
    struct node* x = (struct node*)malloc(sizeof(struct node));
    struct node* q = (struct node*)malloc(sizeof(struct node));
    string temp, ac_no, pass;
oma:
oma2:
    if (chk3 != 0)
    {
        esc = 0;
        esc = _getch();
        if (esc == 27)
            return NULL;
    }
    chk3 = 1;

    cout << "Enter the account number : ";
    cin >> ac_no;

    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (chk1 == 1)
    {

        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }
    else
    {
        system("cls");
        cout << "Wrong account number !";
        cout << "Wanna enter again press enter or wanna exit press esc ..";
        esc = 0;
        esc = _getch();

        if (esc == 13)
        {
            system("cls");
            goto oma2;
        }
        else
        {
            system("cls");
            chk_delete_fun_exit = 1;
            return NULL;
        }
    }
    if (chk1 == -1)
    {

        p = head;
        q = p->next;
        z = p->next;
        x = q->next;
        if (ptr == head)
        {
            head = p->next;
            free(p);
            return head;
        }
        else
        {
            while (z != ptr)
            {

                p = p->next;
                q = q->next;
                z = z->next;
            }
            p->next = q->next;
            free(q);
            cout << "account deleted index !";
        }
    }
    Sleep(2000);
    system("cls");

    return head;
}

void Atm_transfer(struct node* head)
{

    system("cls");
    int chk3 = 0, esc = 0, temp_pass = 0, card_chk = 0, chk1 = 0, chk_second = 0;
    float s_ammount = 0.0F;
    string temp_number, temp_second;
    cout << "                          WELCOME TO MONEY TRANSFER SECTION !\n\n\n";

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    struct node* second = (struct node*)malloc(sizeof(struct node));
    second = head;
    struct node* z = (struct node*)malloc(sizeof(struct node));
    struct node* x = (struct node*)malloc(sizeof(struct node));
    struct node* q = (struct node*)malloc(sizeof(struct node));
    string temp, ac_no, pass;

oma2:
    if (chk3 != 0)
    {
        esc = 0;
        esc = _getch();
        if (esc == 27)
            return;
    }
    chk3 = 1;

    cout << "Enter the account number : ";
    cin >> ac_no;

    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (chk1 == 1)
    {
    oma:
        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back  ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }
    else
    {
        system("cls");
        cout << "Wrong account number !";
        cout << "Wanna enter again press enter or wanna exit press esc ..";
        esc = 0;
        esc = _getch();

        if (esc == 13)
        {
            system("cls");
            goto oma2;
        }
        else if (esc == 27)
        {
            system("cls");
            return;
        }
    }
    if (chk1 == -1)
    {
        if (ptr->data.is_credit == yes && ptr->data.is_debit == yes)
        {
            cout << "You have both ..";
            cout << "What you want to use ?\n1. credit \n2.debit\n";
            cin >> card_chk;
            if (card_chk == 1)
            {
            oma6:
                cout << "Enter the card number : ";
                cin >> temp_number;
                if (ptr->data.credit_card == temp_number)
                {
                oma5:
                    cout << "Enter the 4 digit password : ";
                    cin >> temp_pass;
                    if (ptr->data.credit_pass == temp_pass)
                    {
                        loading();
                    oma4:
                        get_account_bal(ptr);
                        cout << "Enter the account number for money transfer : ";
                        cin >> temp_second;
                        while (second != NULL)
                        {
                            if (ptr->data.account_number == temp_second)
                            {
                                chk_second = 1;
                                break;
                            }
                            second = second->next;
                        }
                        if (chk_second == 1)
                        {
                        oma3:
                            cout << "Enter the ammount : ";
                            cin >> s_ammount;
                            if (s_ammount <= ptr->data.Account_balence)
                            {
                                second->data.Account_balence += s_ammount;
                            }
                            else
                            {
                                system("cls");
                                get_account_bal(ptr);
                                cout << "Insufficient balence !" << endl;
                                cout << "Wanna enter again press enter or wanna exit press esc ..";
                                esc = 0;
                                esc = _getch();

                                if (esc == 13)
                                {
                                    system("cls");
                                    goto oma3;
                                }
                                else if (esc == 27)
                                {
                                    system("cls");
                                    return;
                                }
                            }
                        }
                        else
                        {
                            cout << "Account not found ! " << endl;
                            cout << "wanna enter again  press ENTER or want to exit press ESC ";
                            esc = 0;
                            esc = _getch();

                            if (esc == 13)
                            {
                                system("cls");
                                goto oma4;
                            }
                            else if (esc == 27)
                            {
                                system("cls");
                                return;
                            }
                        }
                    }
                    else
                    {
                        cout << "Password wrong ! ... ";
                        cout << "Wanna enter again press enter or wanna exit press esc ..";
                        esc = 0;
                        esc = _getch();

                        if (esc == 13)
                        {
                            system("cls");
                            goto oma5;
                        }
                        else if (esc == 27)
                        {
                            system("cls");
                            return;
                        }
                    }
                }
                else
                {
                    system("cls");
                    cout << "Account number is wrong !\nwant to enter again press ENTER or want to exit press ESC ...";
                    esc = 0;
                    esc = _getch();

                    if (esc == 13)
                    {
                        system("cls");
                        goto oma6;
                    }
                    else if (esc == 27)
                    {
                        system("cls");
                        return;
                    }
                }
            }
            if (card_chk == 2)
            {
            oma19:
                cout << "Enter the card number : ";
                cin >> temp_number;
                if (ptr->data.debit_card == temp_number)
                {
                oma18:
                    cout << "Enter the 4 digit password : ";
                    cin >> temp_pass;
                    if (ptr->data.debit_pass == temp_pass)
                    {
                        loading();
                    oma17:
                        get_account_bal(ptr);
                        cout << "Enter the account number for money transfer : ";
                        cin >> temp_second;
                        while (second != NULL)
                        {
                            if (ptr->data.account_number == temp_second)
                            {
                                chk_second = 1;
                                break;
                            }
                            second = second->next;
                        }
                        if (chk_second == 1)
                        {
                        oma16:
                            cout << "Enter the ammount : ";
                            cin >> s_ammount;
                            if (s_ammount <= ptr->data.Account_balence)
                            {
                                second->data.Account_balence += s_ammount;
                            }
                            else
                            {
                                system("cls");
                                get_account_bal(ptr);
                                cout << "Insufficient balence !" << endl;
                                cout << "Wanna enter again press enter or wanna exit press esc ..";
                                esc = 0;
                                esc = _getch();

                                if (esc == 13)
                                {
                                    system("cls");
                                    goto oma16;
                                }
                                else if (esc == 27)
                                {
                                    system("cls");
                                    return;
                                }
                            }
                        }
                        else
                        {
                            cout << "Account not found ! " << endl;
                            cout << "wanna enter again  press ENTER or want to exit press ESC ";
                            esc = 0;
                            esc = _getch();

                            if (esc == 13)
                            {
                                system("cls");
                                goto oma17;
                            }
                            else if (esc == 27)
                            {
                                system("cls");
                                return;
                            }
                        }
                    }
                    else
                    {
                        cout << "Password wrong ! ... ";
                        cout << "Wanna enter again press enter or wanna exit press esc ..";
                        esc = 0;
                        esc = _getch();

                        if (esc == 13)
                        {
                            system("cls");
                            goto oma18;
                        }
                        else if (esc == 27)
                        {
                            system("cls");
                            return;
                        }
                    }
                }
                else
                {
                    system("cls");
                    cout << "Account number is wrong !\nwant to enter again press ENTER or want to exit press ESC ...";
                    esc = 0;
                    esc = _getch();

                    if (esc == 13)
                    {
                        system("cls");
                        goto oma19;
                    }
                    else if (esc == 27)
                    {
                        system("cls");
                        return;
                    }
                }
            }
        }
        else if (ptr->data.is_credit == yes)
        {
            cout << "You have credit card : " << endl;
        oma11:
            cout << "Enter the card number : ";
            cin >> temp_number;
            if (ptr->data.credit_card == temp_number)
            {
            oma10:
                cout << "Enter the 4 digit password : ";
                cin >> temp_pass;
                if (ptr->data.credit_pass == temp_pass)
                {
                    loading();
                oma9:
                    get_account_bal(ptr);
                    cout << "Enter the account number for money transfer : ";
                    cin >> temp_second;
                    while (second != NULL)
                    {
                        if (second->data.account_number == temp_second)
                        {
                            chk_second = 1;
                            break;
                        }
                        second = second->next;
                    }
                    if (chk_second == 1)
                    {
                    oma8:
                        cout << "Enter the ammount : ";
                        cin >> s_ammount;
                        if (s_ammount <= ptr->data.Account_balence)
                        {
                            second->data.Account_balence += s_ammount;
                            ptr->data.Account_balence -= s_ammount;
                        }
                        else
                        {
                            system("cls");
                            get_account_bal(ptr);
                            cout << "Insufficient balence !" << endl;
                            cout << "Wanna enter again press enter or wanna exit press esc ..";
                            esc = 0;
                            esc = _getch();

                            if (esc == 13)
                            {
                                system("cls");
                                goto oma8;
                            }
                            else if (esc == 27)
                            {
                                system("cls");
                                return;
                            }
                        }
                    }
                    else
                    {
                        cout << "Account not found ! " << endl;
                        cout << "wanna enter again  press ENTER or want to exit press ESC ";
                        esc = 0;
                        esc = _getch();

                        if (esc == 13)
                        {
                            system("cls");
                            goto oma9;
                        }
                        else if (esc == 27)
                        {
                            system("cls");
                            return;
                        }
                    }
                }
                else
                {
                    cout << "Password wrong ! ... ";
                    cout << "Wanna enter again press enter or wanna exit press esc ..";
                    esc = 0;
                    esc = _getch();

                    if (esc == 13)
                    {
                        system("cls");
                        goto oma10;
                    }
                    else if (esc == 27)
                    {
                        system("cls");
                        return;
                    }
                }
            }
            else
            {
                system("cls");
                cout << "Account number is wrong !\nwant to enter again press ENTER or want to exit press ESC ...";
                esc = 0;
                esc = _getch();

                if (esc == 13)
                {
                    system("cls");
                    goto oma11;
                }
                else if (esc == 27)
                {
                    system("cls");
                    return;
                }
            }
        }
        else if (ptr->data.is_debit == yes)
        {
            cout << "You have debit card : " << endl;

        oma15:
            cout << "Enter the card number : ";
            cin >> temp_number;
            if (ptr->data.debit_card == temp_number)
            {
            oma14:
                cout << "Enter the 4 digit password : ";
                cin >> temp_pass;
                if (ptr->data.debit_pass == temp_pass)
                {
                    loading();
                oma13:
                    get_account_bal(ptr);
                    cout << "Enter the account number for money transfer : ";
                    cin >> temp_second;
                    while (second != NULL)
                    {
                        if (ptr->data.account_number == temp_second)
                        {
                            chk_second = 1;
                            break;
                        }
                        second = second->next;
                    }
                    if (chk_second == 1)
                    {
                    oma12:
                        cout << "Enter the ammount : ";
                        cin >> s_ammount;
                        if (s_ammount <= ptr->data.Account_balence)
                        {
                            second->data.Account_balence += s_ammount;
                        }
                        else
                        {
                            system("cls");
                            get_account_bal(ptr);
                            cout << "Insufficient balence !" << endl;
                            cout << "Wanna enter again press enter or wanna exit press esc ..";
                            esc = 0;
                            esc = _getch();

                            if (esc == 13)
                            {
                                system("cls");
                                goto oma12;
                            }
                            else if (esc == 27)
                            {
                                system("cls");
                                return;
                            }
                        }
                    }
                    else
                    {
                        cout << "Account not found ! " << endl;
                        cout << "wanna enter again  press ENTER or want to exit press ESC ";
                        esc = 0;
                        esc = _getch();

                        if (esc == 13)
                        {
                            system("cls");
                            goto oma13;
                        }
                        else if (esc == 27)
                        {
                            system("cls");
                            return;
                        }
                    }
                }
                else
                {
                    cout << "Password wrong ! ... ";
                    cout << "Wanna enter again press enter or wanna exit press esc ..";
                    esc = 0;
                    esc = _getch();

                    if (esc == 13)
                    {
                        system("cls");
                        goto oma14;
                    }
                    else if (esc == 27)
                    {
                        system("cls");
                        return;
                    }
                }
            }
            else
            {
                system("cls");
                cout << "Account number is wrong !\nwant to enter again press ENTER or want to exit press ESC ...";
                esc = 0;
                esc = _getch();

                if (esc == 13)
                {
                    system("cls");
                    goto oma15;
                }
                else if (esc == 27)
                {
                    system("cls");
                    return;
                }
            }
        }
        else
        {
            cout << "You dont have any card ! "
                << " You can visit out online transection site " << endl;
            system("start https://www.google.com/search?q=paytm&rlz=1C1ONGR_enIN1020IN1021&oq=paytm+&aqs=chrome.0.0i131i355i433i512j46i131i199i433i465i512l2j0i131i433i512l2j0i433i512j0i512j0i131i433j46i199i433i465i512.4397j0j15&sourceid=chrome&ie=UTF-8");
        }
    }
    Sleep(100);
    system("cls");
}

void apply(struct node* head)
{
    int chk3 = 0;
    string ac_no, pass;
    int esc = 0, chk1 = 0;

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;

oma2:
    if (chk3 != 0)
    {
        esc = 0;
        esc = _getch();
        if (esc == 27)
            return;
    }
    chk3 = 1;

    cout << "Enter the account number : ";
    cin >> ac_no;

    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (chk1 == 1)
    {
    oma:
        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back  ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }
    else
    {
        system("cls");
        cout << "Wrong account number !";
        cout << "Wanna enter again press enter or wanna exit press esc ..";
        esc = 0;
        esc = _getch();

        if (esc == 13)
        {
            system("cls");
            goto oma2;
        }
        else if (esc == 27)
        {
            system("cls");
            return;
        }
    }
    if (chk1 == -1)
    {
        ptr->data.is_credit = yes;
        ptr->data.credit_card = "8767";
        ptr->data.credit_pass = 8767;

        ptr->data.is_debit = yes;
        ptr->data.debit_card = "8767";
        ptr->data.debit_pass = 8767;
    }
}

void deposite(struct node* head)
{
    int chk3 = 0;
    string ac_no, pass;
    int esc = 0, chk1 = 0;

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;

oma2:
    if (chk3 != 0)
    {
        esc = 0;
        esc = _getch();
        if (esc == 27)
            return;
    }
    chk3 = 1;

    cout << "Enter the account number : ";
    cin >> ac_no;

    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (chk1 == 1)
    {
    oma:
        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back  ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }
    else
    {
        system("cls");
        cout << "Wrong account number !";
        cout << "Wanna enter again press enter or wanna exit press esc ..";
        esc = 0;
        esc = _getch();

        if (esc == 13)
        {
            system("cls");
            goto oma2;
        }
        else if (esc == 27)
        {
            system("cls");
            return;
        }
    }
    if (chk1 == -1)
    {
        cout << "Current bal : " << ptr->data.Account_balence << endl;

        cout << "Enter the ammount : ";
        cin >> chk1;
        ptr->data.Account_balence += chk1;
    }
    Sleep(100);
    system("cls");
}

void with_draw(struct node* head)
{
    int chk3 = 0;
    string ac_no, pass;
    int esc = 0, chk1 = 0;

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;

oma2:
    if (chk3 != 0)
    {
        esc = 0;
        esc = _getch();
        if (esc == 27)
            return;
    }
    chk3 = 1;

    cout << "Enter the account number : ";
    cin >> ac_no;

    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (chk1 == 1)
    {
    oma:
        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back  ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }
    else
    {
        system("cls");
        cout << "Wrong account number !";
        cout << "Wanna enter again press enter or wanna exit press esc ..";
        esc = 0;
        esc = _getch();

        if (esc == 13)
        {
            system("cls");
            goto oma2;
        }
        else if (esc == 27)
        {
            system("cls");
            return;
        }
    }
    if (chk1 == -1)
    {
        cout << "Current bal : " << ptr->data.Account_balence << endl;
        cout << "Enter the ammount to withdaw from account : ";
        cin >> chk1;
        ptr->data.Account_balence -= chk1;
    }
    Sleep(100);
    system("cls");
}
void apply_card(struct node* head)
{
    system("cls");
    cout << "                                  WELCOME TO APPLY SECTION" << endl
        << endl;
    string test;
    int chk3 = 0, chk = 0;
    string ac_no, pass;
    int esc = 0, chk1 = 0;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
oma2:
    if (chk3 != 0)
    {
        esc = 0;
        esc = _getch();
        if (esc == 27)
            return;
    }
    chk3 = 1;

    cout << "Enter the account number : ";
    cin >> ac_no;
    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (chk1 == 1)
    {
    oma:
        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back  ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }
    if (chk1 == -1)
    {
        cout << "Enter\n1.credit card\n2.debit card\n";
        cin >> chk;
        if (chk == 1 && ptr->data.is_credit == no)
        {
            ptr->data.is_credit = yes;
            static long long int num = 431958203238764;
            test = to_string(num);
            cout << "Your credit card number is " << test;
            ptr->data.credit_card = test;
            num++;
            cout << "Enter the password for credit card : ";
            cin >> ptr->data.credit_pass;
            Sleep(300);
        }

        else if (chk == 2 && ptr->data.is_debit == no)
        {
            ptr->data.is_debit = yes;
            static long long int num = 4147320635763954;
            test = to_string(num);
            cout << "Your debit card number is " << test;
            ptr->data.credit_card = test;
            num++;
            Sleep(300);
        }
    }
    Sleep(100);
    system("cls");
}
void loan_(struct node* head)
{
    system("cls");
    cout << "                            WELCOME TO THE LOAN CALCULATION SECTION \n\n";
    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project3\\Project3\\loan.wav"), NULL, SND_FILENAME);
    loan l;
    l.get_loan();
    l.cal_loan();
    l.display_loan();
    Sleep(900);
    system("cls");
}

void fixed_deposite(struct node* head)
{

    int chk3 = 0;
    string ac_no, pass;
    int esc = 0, chk1 = 0;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;

oma2:
    if (chk3 != 0)
    {
        esc = 0;
        esc = _getch();
        if (esc == 27)
            return;
    }
    chk3 = 1;

    cout << "Enter the account number : ";
    cin >> ac_no;

    while (ptr != NULL)
    {
        if (ptr->data.account_number == ac_no)
        {
            chk1 = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (chk1 == 1)
    {
    oma:
        cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
        cin >> pass;
        if (pass == ptr->data.password)
        {
            chk1 = -1;
        }
        else
        {
            system("cls");
            cout << "password wrong !" << endl;
            cout << "Enter esc for back  ... " << endl;
            esc = _getch();
            if (esc == 27)
            {
                system("cls");
                goto oma;
            }
        }
    }
    else
        cout << "Account number wrong !" << endl;
    if (chk1 == -1)
    {
        ptr->data.set_fixed_deposite();
        ptr->data.calculate();
        ptr->data.display();
        Sleep(100);
        system("cls");
    }
    Sleep(5000);
    system("cls");
}

void allDetails(struct node* head)
{
    system("cls");
    int i = 0;
    string pass, password[100], email[100], account[100], branch_name[100], date_date[100], is_co[100], minor[100], date_year[100], gender[100], father_name[100], mother_name[100], name_First_name[100], name_Middel_name[100], name_Last_name[100], add_ress_pin_code[100], add_ress_add_ress[100], mobile[100], add_ress_state[100], DOB_date[100], DOB_month[100], indian[100];
    struct node* ptr;
    ptr = head;
    file.open("C:/Users/omshi/source/repos/Project3/Project3/FILE_HANDLING/om_bank.csv", ios::app | ios::in | ios::out);
    cout << "Enter the admin password !\n";
    cin >> pass;
    if (pass == Admin_pass)
    {
        cout << "Displaying Data !..\n\n\n";
        getline(file, password[0], '\n');
        while (file.good())
        {
            getline(file, account[i], ',');
            getline(file, branch_name[i], ',');
            getline(file, date_date[i], ',');
            getline(file, is_co[i], ',');
            getline(file, name_First_name[i], ',');
            getline(file, name_Middel_name[i], ',');
            getline(file, name_Last_name[i], ',');
            getline(file, father_name[i], ',');
            getline(file, mother_name[i], ',');
            getline(file, DOB_date[i], ',');
            getline(file, minor[i], ',');
            getline(file, gender[i], ',');
            getline(file, email[i], ',');
            getline(file, mobile[i], ',');
            getline(file, add_ress_add_ress[i], ',');
            getline(file, indian[i], '\n');
            i++;
        }
        for (int k = 0; k < i - 1; k++)
        {
            cout << "The branch name is : " << branch_name[k] << endl;
            cout << "The date (DD-MM-YYYY) of creating account  is : " << date_date[k] << endl;

            if (is_co[k] == "1")
                cout << "You are already have an account in the same bank \n";

            cout << "The full name (first - middel - last)   is : " << name_First_name[k] << " " << name_Middel_name[k] << "  " << name_Last_name[k] << endl;
            cout << "The father's name and mother's name is : " << father_name[k] << " , " << mother_name[k] << endl;
            cout << "Your account number is : " << account[k] << endl;
            cout << "The date of birth is : " << DOB_date[k] << endl;
            cout << "Minor status : ";
            if (minor[k] == "1")
                cout << " yes" << endl;
            else
                cout << " no" << endl;
            cout << "The gender is : " << gender[k] << endl;
            cout << "The email is : " << email[k] << endl;
            cout << "The mobile number is : " << mobile[k] << endl;
            cout << "The address (address-city-pincode-state) is : " << add_ress_add_ress[k] << endl;
            cout << "Is indian : ";
            if (indian[k] == "1")
                cout << " Yes " << endl
                << endl
                << endl;
            else
                cout << " No " << endl
                << endl
                << endl;
        }
    }
    else
        cout << "WRONG PASS !\n";
    _getch();
    Sleep(100);
    system("cls");
    file.close();
}

int main()
{
    struct node* head = new struct node;
    struct node* head1 = new struct node;
    head = NULL;
    int ch, esc = 0;
    cout << "                              WELCOME TO THE BANK MANAGEMENT SYSTEM  \n\n";
    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project3\\Project3\\main.wav"), NULL, SND_FILENAME);
    do
    {
    back1:
    back2:
    back3:
        system("cls");
        cout << "                              WELCOME TO THE BANK MANAGEMENT SYSTEM  \n\n";

        cout << "\n\tEnter the choice \n\t1.Account services\n\t2.Account transaction\n\t3.Bank services\n\t4.Bank security\n\t5.EXIT\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("cls");
            cout << "\n\t ACCOUNT SERVICES\n";
            cout << "\n\tEnter the choice \n\t1.Create Account\n\t2.Update Account\n\t3.Delete Account\n\t4.Card Apply\n\t5.Back(esc)\n";
            cin >> ch;
            switch (ch)
            {
            case 1:

                head1 = Create_account(head);
                if (head1 == NULL && chk_delete_fun_exit == 1)
                {
                    chk_delete_fun_exit == 0;
                }
                else
                {
                    head = head1;
                }
                break;

            case 2:
                Modify_account(head);
                break;

            case 3:
                Delete_account(head);
                break;

            case 5:
                esc = 0;
                esc = _getch();
                if (esc == 27)
                {
                    goto back1;
                }
                break;

            case4:
                apply_card(head);
                break;
            default:
                break;
            }
            break;

        case 2:
            system("cls");
            cout << "\n\t ACCOUNT TRANSECTIONS\n";

            cout << "\n\tEnter the choice \n\t1.Deposite ammount\n\t2.Withdraw ammount\n\t3.Transfer money\n\t4.Get balence\n\t5..Back\n";
            cin >> ch;
            switch (ch)
            {
            case 1:
                deposite(head);
                break;

            case 2:
                with_draw(head);
                break;

            case 3:
                Atm_transfer(head);
                break;

            case 5:
                esc = 0;
                esc = _getch();
                if (esc == 27)
                {
                    goto back2;
                }
                break;
            case 4:
                get_account_bal(head);
                break;
            }
        case 3:
            system("cls");
            cout << "\n\tBANK SERVICES\n";
            cout << "\n\tEnter the choice \n\t1.Loan cal..\n\t2.Fixed deposit\n\t3.Display All account numbers\n\t4.display all user details \n\t5.Back\n";
            cin >> ch;
            switch (ch)
            {
            case 1:
                loan_(head);
                break;

            case 2:
                fixed_deposite(head);
                break;

            case 5:
                esc = 0;
                esc = _getch();
                if (esc == 27)
                {
                    goto back3;
                }
                break;
            case 3:
                print(head);
                break;
            case 4:
                allDetails(head);
                break;
            }
            break;

        case 4:
            system("cls");
            Set_security();
            Person_checking();
            break;

        case 5:
            exit(0);

        default:
            break;
        }
    } while (true);
    return 0;
}