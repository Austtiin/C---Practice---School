/*

Author: Austin Stephens

Date: 04/04/2022

FileName: basicAdressBook.cpp

Purpous: Module 01 Assignment Showcase

Input: Number based on enu selection

Output: Either menu item or concepts of entering in adress information
Exceptiuons: 
 
    
    Rules:

Uses a basic array in the main program to hold multiple Record class objects.

A Record class is to be constructed with the following member variables:
Record number, first name, last name, age, and telephone number.

The Record class must have a custom constructor that initializes the member variables.

The Record class declaration is to be separated from the Record class implementation and these are to be placed in .h and .cpp files respectively.

The program should have a perpetual menu that allows a choice of:
Input information into an record,
Display all information in all records, and
Exit the program.

The program should hold 10 records at the minimum.

Test output with 0 people input, 5 people input and 10 people input before submitting the .cpp and .h files for this assignment.

*/


//Including librarys
#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;


//defining class

class Record
{
private:
    char *FirstName,*LastName;
    long *PhoneNumber;
    int *Age, *RecordNumber;
public:
    Record()
    {
        FirstName = new char[20];
        LastName = new char[20];
        PhoneNumber = new long;
        Age = new int;
        RecordNumber = new int;
    }   
    //
        void datafeed();
        void ShowRecords();
};


    //fucntions
void Record::datafeed()
{
    cin.ignore();
    cout << "Enter First Name: " << endl;
    cin.getline(FirstName, 20);
    cout << "Enter Last Name; " << endl;
    cin.getline(LastName, 20);
    cout << "Enter Age: " << endl;
    cin >> *Age;
    cout << "Enter Phone Number: " << endl;
    cin >> *PhoneNumber;
    cout << "Enter Record Number: " << endl;
    cin >> *RecordNumber;
}



void Record::ShowRecords()
{
        cout << "-------------------------" << endl;
        cout << "   First Name: " << FirstName<< endl;
        cout << "    Last Name: " << LastName << endl;
        cout << "          Age: " << *Age << endl;
        cout << " Phone Number: " << *PhoneNumber << endl;
        cout << "Record-Number: " << *RecordNumber << endl;
        cout << "-------------------------" << endl;
}


//main
int main()
{
    Record *B[20];
    int Choice, i=0, j;
    
    
    while (1)
    {
        cout << "1. Input information into an record" << endl;
        cout << "2. Display all information in all records" << endl;
        cout << "3. Exit the program" << endl;
        cin >> Choice;


        switch (Choice)
        {
            //new record creation
        case 1:
            B[i] = new Record;
            B[i]-> datafeed();
            i++;
            break;

        case 2:
            //loop to repeat functions, wont show if no records have been created
            cin.ignore();
            for (int j = 0; j < i; j++)
            {
                B[j]->ShowRecords();
            }
            break;

            
            
            //exit
        case 3:
            exit(0);
        default:
            cout << "Invalid Choice Entered" << endl;
        }
    }
    

    return 0;

}