#include<iostream>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#include "maintain.hpp"


using namespace std;
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

class transection 
{
    int ammount;
    string pass_word;
    string account_number;
public:

    friend void deposit_ammount();
    friend void withdraw_ammount();
    friend void check_balence();
    friend void online_transection();
};

void deposit_ammount()
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

}
int main()
{

    return 0;
}