//#include <iostream>
//#include <conio.h>
//#include "required.hpp"
//#include <windows.h>
//#include <mmsystem.h>
//
//using namespace std;
//
//class account_services
//{
//protected:
//	string password;
//	string branch_name;
//	Full_date date;
//	string gender;
//	string mobile_number;
//	Full_name name;
//	check Is_costumer;
//	Address add_ress;
//	Full_date DOB;
//	check Is_minor;
//	check Is_married;
//	check Is_indian;
//	check Is_Other_User_Know;
//	Details Other_User;
//	string PAN;
//	check Is_PAN;
//	check Is_Nominee;
//	string email;
//	Details Nominee;
//
//public:
//	friend void Create_account();
//	friend void Modify_account();
//};
//
//void Create_account()
//{
//	string temp;
//	// system("color 3");
//	cout << "                          WELCOME TO CREATE ACCOUNT SECTION !\n\n\n";
//	PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\welcome.wav"), NULL, SND_FILENAME);
//	// system("color 7");
//	account_services *p = new account_services;
//
//	cout << "Enter the branch name where you want to create the account : ";
//	cin >> branch_name;
//
//	cout << "Enter the date (DD-MM-YYYY) : ";
//	cin >> date.date >> date.month >> date.year;
//
//	cout << "Enter the full name (first - middel - last) : ";
//	cin >> name.First_name >> name.Middel_name >> name.Last_name;
//	cout << "Enter the father's name and mother's name : ";
//	cin >> name.Father_name >> name.Mother_name;
//	cout << "Enter the email : ";
//	cin >> email;
//
//	cout << "Enter the mobile number : ";
//	cin >> mobile_number;
//	{
//	repete:
//		cout << "Is you already have bank account (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//			Is_costumer = yes;
//		else if (temp == "no")
//			Is_costumer = no;
//		else
//		{
//			goto repete;
//		}
//	}
//
//	cout << "Enter the date of birth (DD-MM-YYYY) : ";
//	cin >> DOB.date >> DOB.month >> DOB.year;
//
//	cout << "Enter the address (address-city-pincode-state): ";
//	cin >> add_ress.add_ress >> add_ress.city >> add_ress.pin_code >> add_ress.state;
//
//	cout << "Is you minor (yes , no): ";
//	cin >> temp;
//	if (temp == "yes")
//		Is_minor = yes;
//	else if (temp == "no")
//		Is_minor = no;
//
//	cout << "Enter the gender (male/female) : ";
//	cin >> gender;
//
//	cout << "Is you married (yes , no): ";
//	cin >> temp;
//	if (temp == "yes")
//		Is_married = yes;
//	else if (temp == "no")
//		Is_married = no;
//
//	cout << "Is you indian (yes , no): ";
//	cin >> temp;
//	if (temp == "yes")
//		Is_indian = yes;
//	else if (temp == "no")
//		Is_indian = no;
//
//	cout << "Is you know any other user in same bank (yes , no): ";
//	cin >> temp;
//	if (temp == "yes")
//	{
//
//		Is_Other_User_Know = yes;
//
//		cout << "\n\t\tEnter the other user details\n";
//		cout << "Enter the age  : ";
//		cin >> Other_User.age;
//
//		cout << "\t\tEnter the account number  : ";
//		cin >> Other_User.account_number;
//
//		cout << "\t\tEnter the name (first - middel - last): ";
//		cin >> Other_User.name.First_name >> Other_User.name.Middel_name >> Other_User.name.Last_name;
//
//		cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
//		cin >> Other_User.DOB.date >> Other_User.DOB.month >> Other_User.DOB.year;
//
//		cout << "\t\tEnter the address (address-city-pincode-state): ";
//		cin >> Other_User.address.add_ress >> Other_User.address.city >> Other_User.address.pin_code >> Other_User.address.state;
//		cout << endl;
//	}
//	else if (temp == "no")
//		Is_Other_User_Know = no;
//
//	cout << "Is you have pan card (yes , no): ";
//	cin >> temp;
//	if (temp == "yes")
//	{
//		Is_PAN = yes;
//		cout << "Enter the PAN number : ";
//		cin >> PAN;
//	}
//	else if (temp == "no")
//		Is_PAN = no;
//
//	cout << "Is you want to add the nominee (yes , no): ";
//	cin >> temp;
//	if (temp == "yes")
//	{
//
//		Is_Nominee = yes;
//		cout << "\n\t\tEnter the other nominee details\n";
//		cout << "\t\tEnter the age  : ";
//		cin >> Nominee.age;
//
//		cout << "\t\tEnter the account number  : ";
//		cin >> Nominee.account_number;
//
//		cout << "\t\tEnter the name (first - middel - last): ";
//		cin >> Nominee.name.First_name >> Nominee.name.Middel_name >> Nominee.name.Last_name;
//
//		cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
//		cin >> Nominee.DOB.date >> Nominee.DOB.month >> Nominee.DOB.year;
//
//		cout << "\t\tEnter the address (address-city-pincode-state): ";
//		cin >> Nominee.address.add_ress >> Nominee.address.city >> Nominee.address.pin_code >> Nominee.address.state;
//		cout << endl;
//	}
//	else if (temp == "no")
//		Is_Nominee = no;
//	cout << "Enter the password for the account : ";
//	cin >> password;
//
//	PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\createdone"), NULL, SND_FILENAME);
//}
//
//void Modify_account()
//{
//
//	/*string branch_name;
//	Full_date date;
//	string gender;
//	string mobile_number;
//	Full_name name;
//	check Is_costumer;
//	Full_date DOB;
//	check Is_minor;
//	check Is_married;
//	check Is_indian;
//	check Is_Other_User_Know;
//	Details Other_User;
//	string PAN;
//	check Is_PAN;
//	check Is_Nominee;
//	string email;
//	Details Nominee;*/
//	int chk;
//	string temp;
//	cout << "Enter the account number : ";
//
//	cout << "What you want to update / modify " << endl
//		<< "1.name" << endl
//		<< "2.address" << endl
//		<< "3.mobile number" << endl
//		<< "4.email" << endl
//		<< "5.PAN number" << endl
//		<< "6.Date of birth" << endl
//		<< "7.gender" << endl
//		<< "8.minor status" << endl
//		<< "9.married status" << endl
//		<< "10.Nominee details" << endl
//		<< "11.EXIT" << endl;
//
//	cin >> chk;
//
//	switch (chk)
//	{
//	case 1:
//		cout << "Enter the full name (first - middel - last) : ";
//		cin >> name.First_name >> name.Middel_name >> name.Last_name;
//
//		break;
//	case 2:
//		cout << "\t\tEnter the address (address-city-pincode-state): ";
//		cin >> add_ress.add_ress >> add_ress.city >> add_ress.pin_code >> add_ress.state;
//		break;
//	case 3:
//		cout << "Enter the mobile number : ";
//		cin >> mobile_number;
//		break;
//	case 4:
//		cout << "Enter the email : ";
//		cin >> email;
//		break;
//	case 5:
//		cout << "Enter the PAN number : ";
//		cin >> PAN;
//		break;
//	case 6:
//		cout << "Enter the date of birth (DD-MM-YYYY) : ";
//		cin >> DOB.date >> DOB.month >> DOB.year;
//		break;
//
//	case 7:
//		cout << "Enter the gender (male/female) : ";
//		cin >> gender;
//		break;
//
//	case 8:
//		cout << "Is you minor (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//			Is_minor = yes;
//		else if (temp == "no")
//			Is_minor = no;
//		break;
//
//	case 9:
//		cout << "Is you married (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//			Is_married = yes;
//		else if (temp == "no")
//			Is_married = no;
//
//		break;
//
//	case 10:
//	    	cout << "Enter the nominee details  ";
//			cout << "\n\t\tEnter the other nominee details\n";
//			cout << "\t\tEnter the age  : ";
//			cin >> Nominee.age;
//			cout << "\t\tEnter the account number  : ";
//			cin >> Nominee.account_number;
//			cout << "\t\tEnter the name (first - middel - last): ";
//			cin >> Nominee.name.First_name >> Nominee.name.Middel_name >> Nominee.name.Last_name;
//			cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
//			cin >> Nominee.DOB.date >> Nominee.DOB.month >> Nominee.DOB.year;
//			cout << "\t\tEnter the address (address-city-pincode-state): ";
//			cin >> Nominee.address.add_ress >> Nominee.address.city >> Nominee.address.pin_code >> Nominee.address.state;
//			cout << endl;
//		
//		break;
//
//	default:
//
//		break;
//	}
//}
//
//int main()
//{
//
//	account_services c;
//	//c.Create_account();
//	c.Modify_account();
//	return 0;
//}















#include <iostream>
#include <conio.h>
#include "required.hpp"
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>
using namespace std;
class account_services;

struct node
{
    account_services data;
    struct node* next;
};

class account_services
{
protected:
    string password;
    string branch_name;
    Full_date date;
    string gender;
    string mobile_number;
    Full_name name;
    check Is_costumer;
    Address add_ress;
    Full_date DOB;
    check Is_minor;
    check Is_married;
    check Is_indian;
    check Is_Other_User_Know;
    Details Other_User;
    string PAN;
    check Is_PAN;
    check Is_Nominee;
    string email;
    Details Nominee;

public:
    friend void Create_account();
    friend void Modify_account();
};

void Create_account()
{
    string temp;
    // system("color 3");
    cout << "                          WELCOME TO CREATE ACCOUNT SECTION !\n\n\n";
    // PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\welcome.wav"), NULL, SND_FILENAME);
    // system("color 7");
    account_services* p = new account_services;

    cout << "Enter the branch name where you want to create the account : ";
    cin >> p->branch_name;

    cout << "Enter the date (DD-MM-YYYY) : ";
    cin >> p->date.date >> p->date.month >> p->date.year;

    cout << "Enter the full name (first - middel - last) : ";
    cin >> p->name.First_name >> p->name.Middel_name >> p->name.Last_name;
    cout << "Enter the father's name and mother's name : ";
    cin >> p->name.Father_name >> p->name.Mother_name;
    cout << "Enter the email : ";
    cin >> p->email;

    cout << "Enter the mobile number : ";
    cin >> p->mobile_number;
    {
    repete:
        cout << "Is you already have bank account (yes , no): ";
        cin >> temp;
        if (temp == "yes")
            p->Is_costumer = yes;
        else if (temp == "no")
            p->Is_costumer = no;
        else
        {
            goto repete;
        }
    }

    cout << "Enter the date of birth (DD-MM-YYYY) : ";
    cin >> p->DOB.date >> p->DOB.month >> p->DOB.year;

    cout << "Enter the address (address-city-pincode-state): ";
    cin >> p->add_ress.add_ress >> p->add_ress.city >> p->add_ress.pin_code >> p->add_ress.state;

    cout << "Is you minor (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        p->Is_minor = yes;
    else if (temp == "no")
        p->Is_minor = no;

    cout << "Enter the gender (male/female) : ";
    cin >> p->gender;

    cout << "Is you married (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        p->Is_married = yes;
    else if (temp == "no")
        p->Is_married = no;

    cout << "Is you indian (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        p->Is_indian = yes;
    else if (temp == "no")
        p->Is_indian = no;

    cout << "Is you know any other user in same bank (yes , no): ";
    cin >> temp;
    if (temp == "yes")
    {

        p->Is_Other_User_Know = yes;

        cout << "\n\t\tEnter the other user details\n";
        cout << "Enter the age  : ";
        cin >> p->Other_User.age;

        cout << "\t\tEnter the account number  : ";
        cin >> p->Other_User.account_number;

        cout << "\t\tEnter the name (first - middel - last): ";
        cin >> p->Other_User.name.First_name >> p->Other_User.name.Middel_name >> p->Other_User.name.Last_name;

        cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
        cin >> p->Other_User.DOB.date >> p->Other_User.DOB.month >> p->Other_User.DOB.year;

        cout << "\t\tEnter the address (address-city-pincode-state): ";
        cin >> p->Other_User.address.add_ress >> p->Other_User.address.city >> p->Other_User.address.pin_code >> p->Other_User.address.state;
        cout << endl;
    }
    else if (temp == "no")
        p->Is_Other_User_Know = no;

    cout << "Is you have pan card (yes , no): ";
    cin >> temp;
    if (temp == "yes")
    {
        p->Is_PAN = yes;
        cout << "Enter the PAN number : ";
        cin >> p->PAN;
    }
    else if (temp == "no")
        p->Is_PAN = no;

    cout << "Is you want to add the nominee (yes , no): ";
    cin >> temp;
    if (temp == "yes")
    {

        p->Is_Nominee = yes;
        cout << "\n\t\tEnter the other nominee details\n";
        cout << "\t\tEnter the age  : ";
        cin >> p->Nominee.age;

        cout << "\t\tEnter the account number  : ";
        cin >> p->Nominee.account_number;

        cout << "\t\tEnter the name (first - middel - last): ";
        cin >> p->Nominee.name.First_name >> p->Nominee.name.Middel_name >> p->Nominee.name.Last_name;

        cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
        cin >> p->Nominee.DOB.date >> p->Nominee.DOB.month >> p->Nominee.DOB.year;

        cout << "\t\tEnter the address (address-city-pincode-state): ";
        cin >> p->Nominee.address.add_ress >> p->Nominee.address.city >> p->Nominee.address.pin_code >> p->Nominee.address.state;
        cout << endl;
    }
    else if (temp == "no")
        p->Is_Nominee = no;
    cout << "Enter the password for the account : ";
    cin >> p->password;

    // PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\createdone"), NULL, SND_FILENAME);
}

// void Modify_account(struct node * head)
// {

//     /*string branch_name;
//     Full_date date;
//     string gender;
//     string mobile_number;
//     Full_name name;
//     check Is_costumer;
//     Full_date DOB;
//     check Is_minor;
//     check Is_married;
//     check Is_indian;
//     check Is_Other_User_Know;
//     Details Other_User;
//     string PAN;
//     check Is_PAN;
//     check Is_Nominee;
//     string email;
//     Details Nominee;*/

//     int chk;
//     string temp;
//     cout << "Enter the account number : ";

//     cout << "What you want to update / modify " << endl
//          << "1.name" << endl
//          << "2.address" << endl
//          << "3.mobile number" << endl
//          << "4.email" << endl
//          << "5.PAN number" << endl
//          << "6.Date of birth" << endl
//          << "7.gender" << endl
//          << "8.minor status" << endl
//          << "9.married status" << endl
//          << "10.Nominee details" << endl
//          << "11.EXIT" << endl;

//     cin >> chk;

//     switch (chk)
//     {
//     case 1:
//         cout << "Enter the full name (first - middel - last) : ";
//         cin >> name.First_name >> name.Middel_name >> name.Last_name;

//         break;
//     case 2:
//         cout << "\t\tEnter the address (address-city-pincode-state): ";
//         cin >> add_ress.add_ress >> add_ress.city >> add_ress.pin_code >> add_ress.state;
//         break;
//     case 3:
//         cout << "Enter the mobile number : ";
//         cin >> mobile_number;
//         break;
//     case 4:
//         cout << "Enter the email : ";
//         cin >> email;
//         break;
//     case 5:
//         cout << "Enter the PAN number : ";
//         cin >> PAN;
//         break;
//     case 6:
//         cout << "Enter the date of birth (DD-MM-YYYY) : ";
//         cin >> DOB.date >> DOB.month >> DOB.year;
//         break;

//     case 7:
//         cout << "Enter the gender (male/female) : ";
//         cin >> gender;
//         break;

//     case 8:
//         cout << "Is you minor (yes , no): ";
//         cin >> temp;
//         if (temp == "yes")
//             Is_minor = yes;
//         else if (temp == "no")
//             Is_minor = no;
//         break;

//     case 9:
//         cout << "Is you married (yes , no): ";
//         cin >> temp;
//         if (temp == "yes")
//             Is_married = yes;
//         else if (temp == "no")
//             Is_married = no;

//         break;

//     case 10:
//         cout << "Enter the nominee details  ";
//         cout << "\n\t\tEnter the other nominee details\n";
//         cout << "\t\tEnter the age  : ";
//         cin >> Nominee.age;
//         cout << "\t\tEnter the account number  : ";
//         cin >> Nominee.account_number;
//         cout << "\t\tEnter the name (first - middel - last): ";
//         cin >> Nominee.name.First_name >> Nominee.name.Middel_name >> Nominee.name.Last_name;
//         cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
//         cin >> Nominee.DOB.date >> Nominee.DOB.month >> Nominee.DOB.year;
//         cout << "\t\tEnter the address (address-city-pincode-state): ";
//         cin >> Nominee.address.add_ress >> Nominee.address.city >> Nominee.address.pin_code >> Nominee.address.state;
//         cout << endl;

//         break;

//     default:

//         break;
//     }
// }

int main()
{

    //struct node* head = new struct node;
    account_services c;
    Create_account();
    // c.Modify_account();
    return 0;
}
