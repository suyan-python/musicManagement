#include <cctype>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string.h>
#include "admin.cc"

using namespace std;

void userList()
{
    // music list
    string musicName, musicDate, musicID;
    ofstream l1("Music.txt", ios::app);
    l1 << musicName << "  " << musicDate << " " << musicID << endl;
}

void login()
{
    int count = 0;
    string userId, password, id, pass, email;
    cout << "\t\t\t Please Enter the user Name and Password..." << endl;
    cout << "\t\t\t USERNAME: ";
    cin.ignore() >> userId;
    cout << "\t\t\tPASSWORD: ";
    cin >> password;
    cout << "Email: ";
    cin >> email;

    ifstream input("Records.txt");

    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            count = 1;
        }
        else
        {
            cout << "User not Found...Please try again" << endl;
            exit(0);
        }
    }
    input.close();
    if (count == 1)
    {
        transform(userId.begin(), userId.end(), userId.begin(), ::toupper);
        cout << userId << endl;
        cout << "****Login Successful..." << endl;
        cout << "-----------------------HI, " << userId << ",------------------" << endl;
        cout << "\t\t--------------------Welcome To-------------------" << endl;
        cout << "\t\t-------------------Music Management System--------------------" << endl;
        // main();
        display_list();
    }
    else
    {
        cout << "LOGIN ERROR...Please Check your USERNAME!!!" << endl;
    }
}

void registration()
{
    string ruserId, rPassword, rId, rPass, checkID, pass;
    cout << "\t\t\tEnter User Name: " << endl;
    cin >> ruserId;
    cout << "Enter the PassWord: ";
    cin >> rPassword;

    ifstream f2("Records.txt");

    while (f2 >> checkID >> pass)
    {
        if (ruserId == checkID)
        {
            cout << "User Already Exist" << endl;
            f2.close();
            break;
        }
        else
        {

            ofstream f1("Records.txt", ios::app);
            f1 << ruserId << "  " << rPassword << endl;

            cout << "\t\t\tRegistration is Successful..." << endl;
            f1.close();
        }
    }
}

void case1()
{
    int count = 0;
    string sUserId, sId, sPass;
    cout << "\n\t\t Enter the UserName which you remembered: ";
    cin >> sUserId;

    ifstream f2("Records.txt");
    while (f2 >> sId >> sPass)
    {
        if (sId == sUserId)
        {
            count = 1;
        }
    }
    f2.close();
    if (count == 1)
    {
        cout << "\n\n Your account is found!! \n";
        cout << "\n Your password is: " << sPass;
    }
    else
    {
        cout << "Sorry! Your account is not found!! \n";
    }
}

void forgot()
{
    int option;
    cout << "\t\t\t Forgot the Password??? IDIOT!!!";
    cout << "Press 1 to search your Id by Username: " << endl;
    // cout << "\t\t\t Enter your choice: ";
    cin >> option;

    switch (option)
    {
    case 1:
        case1();
        break;

    default:
        cout << "\t\t\t Wrong choice! Please try again..." << endl;
        forgot();
    }
}

void login_design()
{
    cout << "\t\t______________________________________________________________________________" << endl
         << endl
         << endl;
    cout << "\t\t..............................Welcome to the Login Page......................." << endl
         << endl
         << endl;
    cout << "\t\t____________________________________   Menu ________________________________\n\n";
    cout << " \n\n";
    cout << "\t | Press 1 to Login  |" << endl;
    cout << "\t | Press 2 to Register  |" << endl;
    cout << "\t | Press 3 for Forgot Password  |" << endl;
    cout << "\t | Press 4 to Exit      |" << endl;
}

int option;
void user_design()
{
    cout << "Enter further options..." << endl;
    cout << "1. Search Music" << endl;
    cout << "2. Add to favorite list" << endl;
    cout << "3. Remove from favorite list" << endl;
    cin >> option;
}

void further_option()
{
    int count = 0;
    if (option == 1)
    {
        string music_name, search;
        cout << "You are about to search Music by Music Name: " << endl;
        cout << "Enter Music Name: ";
        cin >> music_name;

        ifstream input("Music.txt");

        while (input >> search)
        {
            if (music_name == search)
            {
                count = 1;
            }
            else
            {
                cout << "Music not Found..." << endl;
                cout << "Your Music will be available soon..." << endl;
                exit(0);
            }
        }
    }
}

void checkAdmin()
{
    int code;
    cout << "Passcode: ";
    cin >> code;

    if (code == 123)
    {
        main_list();
        sortAlpha();
        display_list();
    }
    else
    {
        cout << "Wrong CODE!!!" << endl;
    }
}

int main()
{
    int check;
    cout << "\n-----------Enter Your Choice----------" << endl;
    cout << "1.Admin\n2.User" << endl
         << ">>";
    cin >> check;
    if (check == 1)
    {
        checkAdmin();
    }
    else
    {
        int c;
        login_design();
        do
        {
            cout << "\t\tEnter Your choice: ";
            cin >> c;
            cout << endl;
            switch (c)
            {
            case 1:
                login();
                break;
            case 2:
                registration();
                break;
            case 3:
                forgot();
                break;
            case 4:
                cout << "\t\t\t ThankYou...\n\n";
                break;
            default:
                cout << "\t\tPlease select from the option given...\n\n";
                main();
            }
        } while (c != 4);
    }
}