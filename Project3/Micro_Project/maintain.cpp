//#include <iostream>
//#include <conio.h>
//#include "required.hpp"
//#include <windows.h>
//#include <mmsystem.h>	
//
//using namespace std;
//int chk_delete_fun_exit = 0;
//class account_services
//{
//
//public:
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
//	string account_number;
//
//	friend struct node* Create_account(struct node* head);
//	friend void Modify_account(struct node* head);
//	friend void print(struct node* head);
//	friend struct node* Delete_account(struct node* head);
//	friend void withdraw_ammount(struct node* head);
//	friend void check_balence(struct node* head);
//	friend void online_transection(struct node* head);
//};
//
//
//class transection
//{
//public:
//	float current_balence;
//};
//
//struct node
//{
//	account_services data;
//	transection T_data;
//	struct node* next;
//};
//void loading()
//{
//	system("cls");
//
//	char load[] = "loading";
//	char dots[] = "...";
//	for (int i = 0; i < sizeof(load) / sizeof(char); i++)
//	{
//		std::cout << load[i];
//		Sleep(300);
//	}
//	for (int i = 0; i < sizeof(dots) / sizeof(char); i++)
//	{
//		cout << dots[i];
//		Sleep(500);
//	}
//	system("cls");
//
//}
//
//
//struct node* Create_account(struct node* head)
//{
//
//
//	string temp;
//	struct node* ptr;
//	ptr = new struct node;
//	struct node* p;
//	p = head;
//	if (head != NULL)
//	{
//		while (p->next != NULL)
//		{
//			p = p->next;
//		}
//		ptr->next = p->next;
//		p->next = ptr;
//	}
//	else
//	{
//		ptr->next = NULL;
//		head = ptr;
//	}
//
//
//	
//		cout << "                          WELCOME TO CREATE ACCOUNT SECTION !\n\n\n";
//		 PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\welcome.wav"), NULL, SND_FILENAME);
//		 
//		 Sleep(100);
//		 PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\gender.wav"), NULL, SND_FILENAME);
//		 system("color 7");
//	
//		cout << "Enter the branch name where you want to create the account : ";
//		cin >> ptr->data.branch_name;
//		cout << "Enter the date (DD-MM-YYYY) : ";
//		cin >> ptr->data.date.date >> ptr->data.date.month >> ptr->data.date.year;
//		cout << "Enter the full name (first - middel - last) : ";
//		cin >> ptr->data.name.First_name >> ptr->data.name.Middel_name >> ptr->data.name.Last_name;
//		cout << "Enter the father's name and mother's name : ";
//		cin >> ptr->data.name.Father_name >> ptr->data.name.Mother_name;
//		cout << "Enter the email : ";
//		cin >> ptr->data.email;
//		cout << "Enter the mobile number : ";
//		cin >> ptr->data.mobile_number;
//	repete:
//		cout << "Is you already have bank account (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//			ptr->data.Is_costumer = yes;
//		else if (temp == "no")
//			ptr->data.Is_costumer = no;
//		else
//		{
//			goto repete;
//		}
//	
//		cout << "Enter the date of birth (DD-MM-YYYY) : ";
//		cin >> ptr->data.DOB.date >> ptr->data.DOB.month >> ptr->data.DOB.year;
//	
//		cout << "Enter the address (address-city-pincode-state): ";
//		cin >> ptr->data.add_ress.add_ress >> ptr->data.add_ress.city >> ptr->data.add_ress.pin_code >> ptr->data.add_ress.state;
//	
//		cout << "Is you minor (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//			ptr->data.Is_minor = yes;
//		else if (temp == "no")
//			ptr->data.Is_minor = no;
//	
//		cout << "Enter the gender (male/female) : ";
//		cin >> ptr->data.gender;
//	
//		cout << "Is you married (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//			ptr->data.Is_married = yes;
//		else if (temp == "no")
//			ptr->data.Is_married = no;
//	
//		cout << "Is you indian (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//			ptr->data.Is_indian = yes;
//		else if (temp == "no")
//			ptr->data.Is_indian = no;
//	
//		cout << "Is you know any other user in same bank (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//		{
//	
//			ptr->data.Is_Other_User_Know = yes;
//	
//			cout << "\n\t\tEnter the other user details\n";
//			cout << "Enter the age  : ";
//			cin >> ptr->data.Other_User.age;
//	
//			cout << "\t\tEnter the account number  : ";
//			cin >> ptr->data.Other_User.account_number;
//	
//			cout << "\t\tEnter the name (first - middel - last): ";
//			cin >> ptr->data.Other_User.name.First_name >> ptr->data.Other_User.name.Middel_name >> ptr->data.Other_User.name.Last_name;
//	
//			cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
//			cin >> ptr->data.Other_User.DOB.date >> ptr->data.Other_User.DOB.month >> ptr->data.Other_User.DOB.year;
//	
//			cout << "\t\tEnter the address (address-city-pincode-state): ";
//			cin >> ptr->data.Other_User.address.add_ress >> ptr->data.Other_User.address.city >> ptr->data.Other_User.address.pin_code >> ptr->data.Other_User.address.state;
//			cout << endl;
//		}
//		else if (temp == "no")
//			ptr->data.Is_Other_User_Know = no;
//	
//		cout << "Is you have pan card (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//		{
//			ptr->data.Is_PAN = yes;
//			cout << "Enter the PAN number : ";
//			cin >> ptr->data.PAN;
//		}
//		else if (temp == "no")
//			ptr->data.Is_PAN = no;
//	
//		cout << "Is you want to add the nominee (yes , no): ";
//		cin >> temp;
//		if (temp == "yes")
//		{
//	
//			ptr->data.Is_Nominee = yes;
//			cout << "\n\t\tEnter the other nominee details\n";
//			cout << "\t\tEnter the age  : ";
//			cin >> ptr->data.Nominee.age;
//	
//			cout << "\t\tEnter the account number  : ";
//			cin >> ptr->data.Nominee.account_number;
//	
//			cout << "\t\tEnter the name (first - middel - last): ";
//			cin >> ptr->data.Nominee.name.First_name >> ptr->data.Nominee.name.Middel_name >> ptr->data.Nominee.name.Last_name;
//	
//			cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
//			cin >> ptr->data.Nominee.DOB.date >> ptr->data.Nominee.DOB.month >> ptr->data.Nominee.DOB.year;
//	
//			cout << "\t\tEnter the address (address-city-pincode-state): ";
//			cin >> ptr->data.Nominee.address.add_ress >> ptr->data.Nominee.address.city >> ptr->data.Nominee.address.pin_code >> ptr->data.Nominee.address.state;
//			cout << endl;
//		}
//		else if (temp == "no")
//			ptr->data.Is_Nominee = no;
//		cout << "Enter the password for the account : ";
//		cin >> ptr->data.password;
//	
//		ptr->data.account_number = "91" + ptr->data.mobile_number;
//		cout << "Your account number is : " << ptr->data.account_number << endl;
//		PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\createdone"), NULL, SND_FILENAME);
//		Sleep(2000);
//		
//	//
//	//
//
//				// design part
////cout << "hi ";
////	ptr->data.password = "9021";
////	ptr->data.branch_name = "osmanabad";
////	ptr->data.date.date = 11;
////	ptr->data.date.month = 07;
////	ptr->data.date.year = 2022;
////	ptr->data.gender = "male";
////	//cout << "Enter the mobile number : ";
////	ptr->data.name.First_name = "om";
////	ptr->data.name.Middel_name = "prashant";
////	ptr->data.name.Last_name = "shingare";
////	ptr->data.add_ress.pin_code = 413501;
////	ptr->data.add_ress.add_ress = "Umbre kotha";
////	ptr->data.add_ress.city = "Osmanabad";
////	ptr->data.add_ress.state = "Maharashtra";
////	ptr->data.DOB.date = 29;
////	ptr->data.DOB.month = 9;
////	ptr->data.DOB.year = 2005;
////
////	ptr->data.PAN = "8767768";
////	ptr->data.email = "omshingare120@gmail.com";
////	ptr->data.mobile_number = "1000";
////	ptr->data.account_number = "91" + ptr->data.mobile_number;
////	cout << "Enter the password for the account : ";
////	ptr->data.password = "9021";
//
//	//cout << "+-------------------------------------------------------------------------+" << endl
//	//	<< "|                                                                         |" << endl
//	//	<< "| Branch name : " << ptr->data.branch_name << "                                                 |" << endl
//	//	<< "| Date : " << ptr->data.date.date << "/" << ptr->data.date.month << "/" << ptr->data.date.year << "                                                        |" << endl
//	//	<< "|                                                                         |" << endl
//	//	<< "|                                                                         |" << endl
//	//	<< "| Account No : " << ptr->data.account_number << "                                               | " << endl
//	//	<< "| Name : "<< ptr->data.name.First_name<<" "<< ptr->data.name.Middel_name<<" "<< ptr->data.name.Last_name<<"                                             | " << endl
//	//	<< "| DOB  : " << ptr->data.DOB.date << "/" << ptr->data.DOB.month << "/" << ptr->data.DOB.year << "                                                        |" << endl
//	//	<< "| Address : "<< ptr->data.add_ress.add_ress<< " " 
//	//	<< "|                                                                         |" << endl;
//
//	system("cls");
//	return head;
//}
//
//void Modify_account(struct node* head)
//{
//	loading();
//	cout << "                          WELCOME TO MODIFY/UPDATE ACCOUNT SECTION !\n\n\n";
//
//	int chk1 = 0, chk = 0;
//	int esc;
//	struct node* ptr = (struct node*)malloc(sizeof(struct node));
//oma:
//	ptr = head;
//	string temp, ac_no, pass;
//	cout << "Enter the account number : ";
//	esc = _getch();
//	if (esc == 27)
//		return;
//	cin >> ac_no;
//
//	while (ptr != NULL)
//	{
//		if (ptr->data.account_number == ac_no)
//		{
//			chk1 = 1;
//			break;
//		}
//		ptr = ptr->next;
//	}
//
//
//	if (chk1 == 1)
//	{
//
//
//		cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
//		cin >> pass;
//		if (pass == ptr->data.password)
//		{
//			chk1 = -1;
//		}
//		else
//		{
//			system("cls");
//			cout << "password wrong !" << endl;
//			cout << "Enter esc for back ... " << endl;
//			esc = _getch();
//			if (esc == 27)
//			{
//				system("cls");
//				goto oma;
//			}
//		}
//	}
//
//	if (chk1 == -1)
//	{
//		system("cls");
//		loading();
//		while (true)
//		{
//			system("cls");
//
//			cout << "What you want to update / modify " << endl
//				<< "1.name" << endl
//				<< "2.address" << endl
//				<< "3.mobile number" << endl
//				<< "4.email" << endl
//				<< "5.PAN number" << endl
//				<< "6.Date of birth" << endl
//				<< "7.gender" << endl
//				<< "8.minor status" << endl
//				<< "9.married status" << endl
//				<< "10.Nominee details" << endl
//				<< "(ESC) : ESC " << endl;
//			esc = 0;
//			esc = _getch();
//			if (esc == 27)
//				return;
//			cin >> chk;
//
//
//			switch (chk)
//			{
//			case 1:
//				system("cls");
//				cout << "Enter the full name (first - middel - last) : ";
//				cin >> ptr->data.name.First_name >> ptr->data.name.Middel_name >> ptr->data.name.Last_name;
//
//				break;
//			case 2:
//				system("cls");
//				cout << "\t\tEnter the address (address-city-pincode-state): ";
//				cin >> ptr->data.add_ress.add_ress >> ptr->data.add_ress.city >> ptr->data.add_ress.pin_code >> ptr->data.add_ress.state;
//				break;
//			case 3:
//				system("cls");
//				cout << "Enter the mobile number : ";
//				cin >> ptr->data.mobile_number;
//				break;
//			case 4:
//				system("cls");
//				cout << "Enter the email : ";
//				cin >> ptr->data.email;
//				break;
//			case 5:
//				system("cls");
//				cout << "Enter the PAN number : ";
//				cin >> ptr->data.PAN;
//				break;
//			case 6:
//				system("cls");
//				cout << "Enter the date of birth (DD-MM-YYYY) : ";
//				cin >> ptr->data.DOB.date >> ptr->data.DOB.month >> ptr->data.DOB.year;
//				break;
//
//			case 7:
//				system("cls");
//				cout << "Enter the gender (male/female) : ";
//				cin >> ptr->data.gender;
//				break;
//
//			case 8:
//				system("cls");
//				cout << "Is you minor (yes , no): ";
//				cin >> temp;
//				if (temp == "yes")
//					ptr->data.Is_minor = yes;
//				else if (temp == "no")
//					ptr->data.Is_minor = no;
//				break;
//
//			case 9:
//				system("cls");
//				cout << "Is you married (yes , no): ";
//				cin >> temp;
//				if (temp == "yes")
//					ptr->data.Is_married = yes;
//				else if (temp == "no")
//					ptr->data.Is_married = no;
//
//				break;
//
//			case 10:
//				system("cls");
//				cout << "Enter the nominee details  ";
//				cout << "\n\t\tEnter the other nominee details\n";
//				cout << "\t\tEnter the age  : ";
//				cin >> ptr->data.Nominee.age;
//				cout << "\t\tEnter the account number  : ";
//				cin >> ptr->data.Nominee.account_number;
//				cout << "\t\tEnter the name (first - middel - last): ";
//				cin >> ptr->data.Nominee.name.First_name >> ptr->data.Nominee.name.Middel_name >> ptr->data.Nominee.name.Last_name;
//				cout << "\t\tEnter the date of birth (DD-MM-YYYY) : ";
//				cin >> ptr->data.Nominee.DOB.date >> ptr->data.Nominee.DOB.month >> ptr->data.Nominee.DOB.year;
//				cout << "\t\tEnter the address (address-city-pincode-state): ";
//				cin >> ptr->data.Nominee.address.add_ress >> ptr->data.Nominee.address.city >> ptr->data.Nominee.address.pin_code >> ptr->data.Nominee.address.state;
//				cout << endl;
//
//				break;
//
//			default:
//				system("cls");
//				cout << "Error !";
//				Sleep(300);
//				break;
//			}
//		}
//	}
//}
//void print(struct node* head)
//{
//	struct node* ptr = (struct node*)malloc(sizeof(struct node));
//	ptr = head;
//	if (ptr == NULL)
//	{
//		cout << "empty !" << endl;
//	}
//	while (ptr != NULL)
//	{
//		cout << ptr->data.account_number << "\t";
//		ptr = ptr->next;
//		Sleep(1000);
//	}
//	cout << endl;
//}
//
//
//struct node* Delete_account(struct node* head)
//{
//	cout << "called";
//
//	system("cls");
//	int chk3 = 0;
//	loading();
//
//	cout << "                          WELCOME TO DELETE ACCOUNT SECTION !\n\n\n";
//	string reson;
//	int chk1 = 0, esc;
//	struct node* ptr = (struct node*)malloc(sizeof(struct node));
//	ptr = head;
//	struct node* p = (struct node*)malloc(sizeof(struct node));
//	struct node* z = (struct node*)malloc(sizeof(struct node));
//	struct node* x = (struct node*)malloc(sizeof(struct node));
//	struct node* q = (struct node*)malloc(sizeof(struct node));
//	string temp, ac_no, pass;
//oma:
//oma2:
//	if (chk3 != 0)
//	{
//		esc = 0;
//		esc = _getch();
//		if (esc == 27)
//			return NULL;
//	}
//	chk3 = 1;
//
//	cout << "Enter the account number : ";
//	cin >> ac_no;
//
//	while (ptr != NULL)
//	{
//		if (ptr->data.account_number == ac_no)
//		{
//			chk1 = 1;
//			break;
//		}
//		ptr = ptr->next;
//	}
//	if (chk1 == 1)
//	{
//
//
//		cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
//		cin >> pass;
//		if (pass == ptr->data.password)
//		{
//			chk1 = -1;
//		}
//		else
//		{
//			system("cls");
//			cout << "password wrong !" << endl;
//			cout << "Enter esc for back ... " << endl;
//			esc = _getch();
//			if (esc == 27)
//			{
//				system("cls");
//				goto oma;
//			}
//		}
//	}
//	else
//	{
//		system("cls");
//		cout << "Wrong account number !";
//		cout << "Wanna enter again press enter or wanna exit press esc ..";
//		esc = 0;
//		esc = _getch();
//
//		if (esc == 13)
//		{
//			system("cls");
//			goto oma2;
//		}
//		else
//		{
//			system("cls");
//			chk_delete_fun_exit = 1;
//			return NULL;
//		}
//	}
//	if (chk1 == -1)
//	{
//
//		p = head;
//		q = p->next;
//		z = p->next;
//		x = q->next;
//		if (ptr == head)
//		{
//			head = p->next;
//			free(p);
//			return head;
//		}
//		else 
//		{
//			while (z != ptr)
//			{
//
//				p = p->next;
//				q = q->next;
//				z = z->next;
//			}
//			p->next = q->next;
//			free(q);
//			cout << "account deleted index !";
//		}
//	}
//	Sleep(2000);
//	system("cls");
//
//	return head;
//}
////int main()
////{
////	account_services c;
////	int get;
////	get = _getch();
////	cout << get;
////	get = _getch();
////	cout << get;
////	get = _getch();
////	cout << get;
////	struct node* head = new struct node;
////	struct node* chk = new struct node;
////	head = NULL;
////	int neww;
////	do
////	{
////		cout << "Enter \n1.create()\n2.delete\n3.exit\n";
////		cin >> neww;
////		switch (neww)
////		{
////		case 1:
////			head = Create_account(head);
////
////			break;
////
////		case 2:
////			chk = Delete_account(head);
////			if (chk == NULL && chk_delete_fun_exit == 1)
////			{
////				cout << "exited !" << endl;
////				system("cls");
////			}
////			
////			break;
////		case 3:
////			exit(0);
////
////		case 4:
////			print(head);
////		default:
////			break;
////		}
////	} while (1);
////
////	return 0;
////}
//class trancetion : public account_services
//{
//	float ammount;
//	string chkpass;
//	string chk_ac;
//
//public:
//	friend void deposit_ammount(struct node* head);
//
//};
//void deposit_ammount(struct node *head)
//{
//	loading();
//	cout << "                          WELCOME TO TRANSECTION ACCOUNT SECTION !\n\n\n";
//
//	int chk1 = 0, chk = 0;
//	int esc;
//	struct node* ptr = (struct node*)malloc(sizeof(struct node));
//oma:
//	ptr = head;
//	string temp, ac_no, pass;
//	cout << "Enter the account number : ";
//	esc = _getch();
//	if (esc == 27)
//		return;
//	cin >> ac_no;
//	
//	while (ptr != NULL)
//	{
//		if (ptr->data.account_number == ac_no)
//		{
//			chk1 = 1;
//			break;
//		}
//		ptr = ptr->next;
//	}
//
//
//	if (chk1 == 1)
//	{
//
//
//		cout << "Enter the pass for the account number " << ptr->data.account_number << " : ";
//		cin >> pass;
//		if (pass == ptr->data.password)
//		{
//			chk1 = -1;
//		}
//		else
//		{
//			system("cls");
//			cout << "password wrong !" << endl;
//			cout << "Enter esc for back ... " << endl;
//			esc = _getch();
//			if (esc == 27)
//			{
//				system("cls");
//				goto oma;
//			}
//		}
//	}
//
//	if (chk == -1)
//	{
//		system("cls");
//		loading();
//		cout << "Password correct !" <<endl;
//
//		Sleep(100);
//		system("cls");
//
//		cout << "Your current balence is : " << ptr->T_data.current_balence;
//
//
//
//	}
//
//
//}
//
//
//int main()
//{
//	account_services c;
//	int get;
//	PlaySound(TEXT("work.wav"), NULL, SND_FILENAME);
//	get = _getch();
//	cout << get;
//	get = _getch();
//	cout << get;
//	get = _getch();
//	cout << get;
//	struct node* head = new struct node;
//	struct node* chk = new struct node;
//	head = NULL;
//	int neww;
//	do
//	{
//		cout << "Enter \n1.create()\n2.delete\n3.exit\n";
//		cin >> neww;
//		switch (neww)
//		{
//		case 1:
//			head = Create_account(head);
//
//			break;
//
//		case 2:
//			chk = Delete_account(head);
//			if (chk == NULL && chk_delete_fun_exit == 1)
//			{
//				cout << "exited !" << endl;
//				system("cls");
//			}
//			
//			break;
//		case 3:
//			exit(0);
//
//		case 4:
//			print(head);
//		default:
//			break;
//		}
//	} while (1);
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////
////#include <stdio.h>
////#include <iostream>
////#include <windows.h>
////#include <mmsystem.h>
////
////using namespace std;
////
////int main()
////{
////	while (true)
////	{
////		system("start /max www.google.com");
////		Sleep(100);
////		system("start /max www.gmail.com");
////		system("start /max www.youtube.com");
////		system("start /max www.whatsapp.com");
////	}
////}






























///////////////////////////////////////////// start ///////////////////////////////////////////

// standard lib's

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <iomanip>
#include "required.hpp"
#include <windows.h>
#include <mmsystem.h>
#include <math.h>

// Opencv lib's

// #include <opencv2\\opencv.hpp>
// #include <opencv2\\face\\mace.hpp>
// #include <opencv2\\face.hpp>
// #include "main.h"

// namespace

using namespace std;
// using namespace cv;
// using namespace ml;
// using namespace cv::face;

// casecase file for the face detection

// CascadeClassifier face_cascade;
int max_number;
string name;
string filename;
int filenumber = 0;
int Audio_Support = 1;
int chk_delete_fun_exit = 0;

//////     loading

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

////////  branch
class Branch
{
protected:
    string Branch_name;
    int Branch_Num_Of_EMP;
    string Branch_service_rank;
    int Branch_id;

public:
    void Set_Dept()
    {
        cout << "---------------------||---------------------  Enter The Department information --------------||---------------- " << endl;
        cout << "|                                                                                                              | " << endl;
        cout << "Enter the name" << endl;
        cin >> Branch_name;
        cout << "Enter the number of employee" << endl;
        cin >> Branch_Num_Of_EMP;
        cout << "Enter the service_rank" << endl;
        cin >> Branch_service_rank;
        cout << "Enter the Branch_id" << endl;
        cin >> Branch_id;
        cout << "|                                                                                                              | " << endl;
        cout << "---------------------||-----------------------------------------------------------------------||---------------- " << endl
            << endl
            << endl
            << endl;
    }
    void Get_Dept()
    {
        cout << "---------------------||---------------------  The Department information  is  ----------------||---------------- " << endl;
        cout << "|                                                                                                              | " << endl;
        cout << "|                                                                                                              | " << endl;
        cout << "|   The name is :" << ::setw(31) << Branch_name << "                                                               | " << endl;
        cout << "|   The number of employee is :" << ::setw(17) << Branch_Num_Of_EMP << "                                                               | " << endl;
        cout << "|   The service_rank is :" << ::setw(23) << Branch_service_rank << "                                                               | " << endl;
        cout << "|   The Branch_id is :" << ::setw(28) << Branch_id << "                                                               | " << endl;
        cout << "|                                                                                                              | " << endl;
        cout << "|                                                                                                              | " << endl;
        cout << "---------------------||-----------------------------------------------------------------------||---------------- " << endl;
    }
};

////////// staff

class Employee
{
protected:
    int Emp_Id;
    string Emp_Name;
    string Emp_distingtion;
    float Emp_salary;

public:
    void Set_Staff()
    {
        cout << "Enter the Employee information...... " << endl;
        cout << "Enter the Emp_Id" << endl;
        cin >> Emp_Id;
        cout << "Enter the Emp_Name" << endl;
        cin >> Emp_Name;
        cout << "Enter the Emp_distingtion" << endl;
        cin >> Emp_distingtion;
        cout << "Enter the Emp_salary" << endl;
        cin >> Emp_salary;
    }

    void Get_Staff()
    {

        cout << "The Employee information is..." << endl;
        cout << "The Emp_Id is :" << Emp_Id << endl;
        cout << "The Emp_Name is :" << Emp_Name << endl;
        cout << "The Emp_distingtion is :" << Emp_distingtion << endl;
        cout << "The Emp_salary is :" << Emp_salary << endl;
    }
};

////////////// security

class security
{
protected:
    int max_number;
    string label;
    string Warning = "You are under the CCTV camera... ";
    int Audio_Support;
    char Alert[100];

public:
    void Set_security()
    {
        cout << "             ************ Enter the security details ************             " << endl;
        if (Audio_Support == 1)
            // PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\security (!).wav"), NULL, SND_FILENAME);
            cout << "Enter the Max number of the persons" << endl;
        cin >> max_number;

        cout << "Enter the choice\n1. Audio support enable\n2. Audio support disable" << endl;
        cin >> Audio_Support;
        cout << "Enter the Alert wanna display" << endl;
        cin.getline(Alert, 100);
    }
    void Get_security()
    {
        cout << " The Max number of the persons is :  " << max_number << endl;
        cout << " The lable is :  " << label << endl;
        cout << " Audio =  " << Audio_Support << endl;
        cout << " The Alert wanna display is :  " << Alert << endl;
    }

    void Person_checking()
    {
        // cout << "BANK CCTV starting....." << endl;
        // if (Audio_Support == 1)
        //     PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\person_chaking().wav"), NULL, SND_FILENAME);

        // Mat testSample = imread("D:\\testsample\\0.jpg", 0);
        // int img_width = testSample.cols;
        // int img_height = testSample.rows;
        // string window = "Capture - face detection";
        // if (!face_cascade.load("file\\haarcascade_frontalface_default.xml"))
        // {
        //     cout << " Error loading file" << endl;
        //     return;
        // }
        // VideoCapture cap(0);

        // if (!cap.isOpened())
        // {
        //     cout << "exit" << endl;
        //     return;
        // }
        // long count = 0;
        // string Pname = "";
        // while (true)
        // {
        //     vector<Rect> faces;
        //     Mat frame;
        //     Mat graySacleFrame;
        //     Mat original;
        //     cap >> frame;
        //     count = count + 1;
        //     if (!frame.empty())
        //     {
        //         original = frame.clone();
        //         cvtColor(original, graySacleFrame, COLOR_BGR2GRAY);
        //         face_cascade.detectMultiScale(graySacleFrame, faces, 1.9, 1, 0, cv::Size(90, 90));
        //         string frameset = to_string(count);
        //         string faceset = to_string(faces.size());
        //         int width = 0, height = 0;
        //         for (int i = 0; i < faces.size(); i++)
        //         {
        //             Rect face_i = faces[i];
        //             Mat face_chk;
        //             Mat face = graySacleFrame(face_i);
        //             Mat face_resized;
        //             face_chk = face_resized;
        //             resize(face, face_resized, Size(img_width, img_height), 1.0, 1.0, INTER_CUBIC);
        //             double confidence = 0;
        //             Pname = label;

        //             if (faces.size() <= max_number)
        //                 rectangle(original, face_i, CV_RGB(0, 255, 0), 1);
        //             else
        //                 rectangle(original, face_i, CV_RGB(255, 0, 0), 3);
        //             string text = Pname;
        //             int pos_x = max(face_i.tl().x - 10, 0);
        //             int pos_y = max(face_i.tl().y - 10, 0);
        //             if (faces.size() <= max_number)
        //                 putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);
        //             else
        //                 putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(255, 0, 0), 1.0);
        //         }
        //         if (faces.size() <= max_number)
        //             putText(original, "No. of Persons detected: " + to_string(faces.size()), Point(30, 30), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 0, 0), 1.0);
        //         else
        //         {
        //             putText(original, "alert ! you reached maximum number ...", Point(30, 30), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(255, 0, 0), 1.0);
        //             if (Audio_Support == 1)
        //             {
        //                 PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\beep-warning-6387.wav"), NULL, SND_FILENAME);
        //             }
        //         }
        //         imshow("CCTV (BANK BY OM SHINGARE)", original);
        //     }
        //     if (waitKey(30) >= 0)
        //         break;
        // }
    }
};

class Bank : public security, public Employee, public Branch
{
protected:
    int Bank_ID;
    string location;

    void Set_bank()
    {
        cout << "************* Enter the bank Infromation ************" << endl;

        Set_Dept();
        Set_Staff();
        cout << "Enter the bank ID" << endl;
        cin >> Bank_ID;
        cout << "Enter the branch name of the bank " << endl;
        cin >> Branch_name;
        cout << "Enter the bank location / address" << endl;
        cin >> location;
    }

    void Get_bank()
    {
        cout << "************* The bank Infromation ************" << endl;
        Get_Dept();
        Get_Staff();
        cout << "The bank ID is : " << Bank_ID << endl;
        cout << "The branch name of the bank  is : " << Branch_name << endl;
        cout << "The bank location / address is : " << location << endl;
    }
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

// class atm_transaction : virtual public transaction , virtual public apply
// {
// protected:

// };

class loan : virtual public account
{
protected:
    double monthlyPayment, loan_balance, interestRate, intrestSum;
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

    //void calculate()
    //{
    //    double yr;
    //    yr = month / 12.0;
    //    m_amt = fd_ammount * pow((1 + fd_rate / 100), yr);
    //}

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

    ///////        friend function

    friend struct node* Create_account(struct node* head);
    friend void Modify_account(struct node* head);
    friend struct node* Delete_account(struct node* head);
    friend void print(struct node* head);
    friend void Atm_transfer(struct node* head);
    friend void get_account_bal(struct node* ptr);
};
int customer::count = 100;

struct node
{
    customer data;
    struct node* next;
};

void get_account_bal(struct node* ptr)
{
    cout << "Your balence for account number " << ptr->data.account_number << " is " << ptr->data.Account_balence << endl;
}

struct node* Create_account(struct node* head)
{

    string temp;
    struct node* ptr;
    ptr = new struct node;
    struct node* p;
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

    cout << "                          WELCOME TO CREATE ACCOUNT SECTION !\n\n\n";
    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\welcome.wav"), NULL, SND_FILENAME);

    Sleep(100);
    PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\gender.wav"), NULL, SND_FILENAME);
    system("color 7");

    cout << "Enter the branch name where you want to create the account : ";
    cin >> ptr->data.Branch_name;
    cout << "Enter the date (DD-MM-YYYY) : ";
    cin >> ptr->data.date.date >> ptr->data.date.month >> ptr->data.date.year;
    cout << "Enter the full name (first - middel - last) : ";
    cin >> ptr->data.name.First_name >> ptr->data.name.Middel_name >> ptr->data.name.Last_name;
    cout << "Enter the father's name and mother's name : ";
    cin >> ptr->data.name.Father_name >> ptr->data.name.Mother_name;
    cout << "Enter the email : ";
    cin >> ptr->data.email;
    cout << "Enter the mobile number : ";
    cin >> ptr->data.mobile_number;
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

    cout << "Enter the date of birth (DD-MM-YYYY) : ";
    cin >> ptr->data.DOB.date >> ptr->data.DOB.month >> ptr->data.DOB.year;

    cout << "Enter the address (address-city-pincode-state): ";
    cin >> ptr->data.add_ress.add_ress >> ptr->data.add_ress.city >> ptr->data.add_ress.pin_code >> ptr->data.add_ress.state;

    cout << "Is you minor (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        ptr->data.Is_minor = yes;
    else if (temp == "no")
        ptr->data.Is_minor = no;

    cout << "Enter the gender (male/female) : ";
    cin >> ptr->data.gender;

    cout << "Is you married (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        ptr->data.Is_married = yes;
    else if (temp == "no")
        ptr->data.Is_married = no;

    cout << "Is you indian (yes , no): ";
    cin >> temp;
    if (temp == "yes")
        ptr->data.Is_indian = yes;
    else if (temp == "no")
        ptr->data.Is_indian = no;

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

    // design part
    // cout << "hi ";
    //	ptr->data.password = "9021";
    //	ptr->data.branch_name = "osmanabad";
    //	ptr->data.date.date = 11;
    //	ptr->data.date.month = 07;
    //	ptr->data.date.year = 2022;
    //	ptr->data.gender = "male";
    //	//cout << "Enter the mobile number : ";
    //	ptr->data.name.First_name = "om";
    //	ptr->data.name.Middel_name = "prashant";
    //	ptr->data.name.Last_name = "shingare";
    //	ptr->data.add_ress.pin_code = 413501;
    //	ptr->data.add_ress.add_ress = "Umbre kotha";
    //	ptr->data.add_ress.city = "Osmanabad";
    //	ptr->data.add_ress.state = "Maharashtra";
    //	ptr->data.DOB.date = 29;
    //	ptr->data.DOB.month = 9;
    //	ptr->data.DOB.year = 2005;
    //
    //	ptr->data.PAN = "8767768";
    //	ptr->data.email = "omshingare120@gmail.com";
    //	ptr->data.mobile_number = "1000";
    //	ptr->data.account_number = "91" + ptr->data.mobile_number;
    //	cout << "Enter the password for the account : ";
    //	ptr->data.password = "9021";

    // cout << "+-------------------------------------------------------------------------+" << endl
    //	<< "|                                                                         |" << endl
    //	<< "| Branch name : " << ptr->data.branch_name << "                                                 |" << endl
    //	<< "| Date : " << ptr->data.date.date << "/" << ptr->data.date.month << "/" << ptr->data.date.year << "                                                        |" << endl
    //	<< "|                                                                         |" << endl
    //	<< "|                                                                         |" << endl
    //	<< "| Account No : " << ptr->data.account_number << "                                               | " << endl
    //	<< "| Name : "<< ptr->data.name.First_name<<" "<< ptr->data.name.Middel_name<<" "<< ptr->data.name.Last_name<<"                                             | " << endl
    //	<< "| DOB  : " << ptr->data.DOB.date << "/" << ptr->data.DOB.month << "/" << ptr->data.DOB.year << "                                                        |" << endl
    //	<< "| Address : "<< ptr->data.add_ress.add_ress<< " "
    //	<< "|                                                                         |" << endl;

    system("cls");
    return head;
}

/////////////////   modify

void Modify_account(struct node* head)
{
    loading();
    cout << "                          WELCOME TO MODIFY/UPDATE ACCOUNT SECTION !\n\n\n";

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
        loading();
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
}

void print(struct node* head)
{
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
}

struct node* Delete_account(struct node* head)
{
    cout << "called";

    system("cls");
    int chk3 = 0;
    loading();

    cout << "                          WELCOME TO DELETE ACCOUNT SECTION !\n\n\n";
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
    int chk3 = 0, esc, temp_pass, card_chk, chk1 = 0, chk_second = 0;
    float s_ammount;
    string temp_number, temp_second;
    loading();
    cout << "                          WELCOME TO MONEY TRANSFER SECTION !\n\n\n";

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;

    struct node* second = (struct node*)malloc(sizeof(struct node));
    second = head;

    // struct node *z = (struct node *)malloc(sizeof(struct node));
    // struct node *x = (struct node *)malloc(sizeof(struct node));
    // struct node *q = (struct node *)malloc(sizeof(struct node));

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
        if (ptr->data.is_credit == yes)
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
                        if (ptr->data.account_number == temp_second)
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
        else if (ptr->data.is_credit == yes && ptr->data.is_debit == yes)
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
