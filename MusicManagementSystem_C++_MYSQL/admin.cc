#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>

using namespace std;
string musicName[10], artistName[10];
double musicDate[10], musicID[10];
int num;

void main_list()
{
    // music list
    // cout << "Enter 5 music names: " << endl;
    cout << "Enter Music Details to Add on list" << endl;
    cout << "How many Music you wanna Add on list" << endl;
    cin >> num;
    // cout << "Name: ";
    // cin >> musicName;
    // cout << "Artist Name: ";
    // cin >> artistName;
    // cout << "Release Date: ";
    // cin >> musicDate;
    // cout << "Music ID: ";
    // cin >> musicID;
    cout << "Enter " << num << " Music details to Add on list" << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Music Name: ";
        cin >> musicName[i];
        cout << "Artist Name: ";
        cin >> artistName[i];
        cout << "Release Year: ";
        cin >> musicDate[i];
        cout << "Music ID: ";
        cin >> musicID[i];
    }
    ofstream l1("Music.txt", ios::app);
    for (int i = 0; i < num; i++)
    {
        // l1 << "Music: "
        //    << musicName[i] << "\t\t"
        //    << "Artist: " << artistName[i] << "\t\t"
        //    << "Date: " << musicDate[i] << "\t\t"
        //    << "ID: " << musicID[i] << endl;
        l1 << musicName[i] << "\t\t" << artistName[i] << "\t\t" << musicDate[i] << "\t\t" << musicID[i] << endl;
        cout << "Music Added Successfully..." << endl;
    }
}

void sortAlpha()
{
    string temp;                // creating two character arrays, one for storing and one for interchanging
    for (int i = 0; i < 5; i++) // bubble sort begins to sort the data
    {
        for (int j = i + 1; j < 5; j++)
        {
            if ((musicName[i] > musicName[j])) // comparing only the ASCII equivalent of the entire word and interchanging if greater
            {
                (temp = musicName[i]);
                (musicName[i] = musicName[j]);
                (musicName[j] = temp);
            }
        }
    }
    // cout << "Names rearranged in alphabetical order : \n";
}

void display_list()
{
    cout << "----------Here is your Music List-----------" << endl;
    string getcontent;
    ifstream openfile("Music.txt");
    cout << "--------------Displaying List Alphabetically-------------" << endl;
    if (openfile.is_open())
    {
        while (!openfile.eof())
        {
            openfile >> getcontent;
            cout << getcontent << " ";
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << musicName[i] << "\n";
    }
}

// void deleteMusic()
// {
//     int id, x = 0;
//     struct book b;
//     printf("\t\t\t\t=======deletebookbook bookS RECORD=======\n\n\n");
//     printf("\t\t\t\tEnter book id :");
//     scanf("%d", &id);
//     FILE *f = fopen("book_record.txt", "r");
//     FILE *pT = fopen("temporary.txt", "w");
//     while (fscanf(f, "%s\t\t%s\t\t%s\t\t%d\n", b.book_name, b.author_name, b.book_category, &b.book_id) != EOF)
//     {
//         if (b.book_id != id)
//         {
//             fprintf(pT, "%s\t\t%s\t\t%s\t\t%d\n", b.book_name, b.author_name, b.book_category, b.book_id);
//         }
//         else
//         {
//             x++;
//             printf("\n---------------------\n");
//             printf(">>> Record deleted<<< \n");
//             printf("---------------------\n\n");
//         }
//     }
//     fclose(f);
//     fclose(pT);
//     remove("book_record.txt");
//     rename("temporary.txt", "book_record.txt");
// login();
// }

// int main()
// {
//     list();
//     sortAlpha();
//     display_list();
// }
