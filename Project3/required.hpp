#include <iostream>
using namespace std;

struct Full_date
{
    int date;
    int month;
    int year;
};

struct Full_name
{
    string First_name;
    string Middel_name;
    string Last_name;
    string Father_name;
    string Mother_name;
};

enum check
{
    no,
    yes
};

struct Address
{
    int pin_code;
    string add_ress;
    string city;
    string state;
};

struct Details
{
    int age;
    string account_number;
    Full_name name;
    Full_date DOB;
    Address address;
};