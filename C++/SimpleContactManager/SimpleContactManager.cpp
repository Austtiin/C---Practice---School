/*
Austin Stephens

03/01/2022

Create a program that simulates a simple contact manager application given the following requirements:

Input:

The program is to store individual first and associated telephone numbers in parallel arrays.
The program should input from the user 3 people’s first and their telephone numbers and add the data to the parallel arrays.
When data input is finished, the program should sort both data arrays in ascending order based on telephone numbers maintaining the associations between first and telephone numbers.

The user will then enter a name.
The program will then search for the name and print the name and the associated telephone number for that person.
If the person is not in the array, the program will print that the user cannot be found.

Output:
The program will print the list of users and their telephone numbers after sorting.
After printing the list, the program will ask for a name to search for.

*/





#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;



int main()

{

    string nameArray[3];
    string numberArray[3];
    string temp = "";
    string temp2 = "";
    string findValue = "";
    bool found = false;
    int arraySize = 3;
    int index = -1;
    int pass = -1;
    



  // Get names and numbers from the user

    cout<<"Please enter 3 contact names and numbers."<<endl;

    for(int i=0; i<arraySize; i++)
    {
        cout<<"Please enter a contact name: " << endl;
        cin>>nameArray[i];
        cout<<"Please enter a contact number: " << endl;
        cin>>numberArray[i];
     }






     #include <cstdlib>

#include <iostream>

using namespace std;

int main()

{

int myArray[10] = {32, 41, 97, 2, 55, 24, 16, 83, 102, 9};

int temp = -1;

int index = -1;

int pass = -1;

for (pass = 0; pass < 9; pass++)

{

for (index = 0; index < 9 - pass; index++)

{

if ( myArray[index] > myArray[index + 1] )

{

temp = myArray[index];

myArray[index] = myArray[index + 1];

myArray[index + 1] = temp;

}

}

}

for(index = 0; index < 10; index++)

{

cout << myArray[index];

if (index < 9) cout << ", ";

}

cout << endl;

return 0;

}

  // Sort the array in ascending order based on the phone number

    for ( pass = 0; pass < arraySize; pass++)
    {
        for (index = 0; index < arraySize; index++)
        {
            if (numberArray[index] > numberArray[index + 1])
            {
                temp = numberArray[index];
                numberArray[index] = numberArray[index + 1];
                numberArray[index + 1] = temp;

                temp2 = nameArray[index];
                nameArray[index] = nameArray[index + 1];
                nameArray[index + 1] = temp2;

            }   
        }
    }

  // Display the array content
  
    for(int j=0; j<arraySize; j++)
    {
        cout<<setw(2)<<j+1<<". "<<"Name : "<<setw(20)<<nameArray[j]<<" | "<<
        "Number: "<<setw(15)<<numberArray[j]<<endl;
    }

    //Get the search term

    cout << "Please enter a search term: " << endl;
    cin >> findValue;



    //Search the array

    for (int i = 0; i < arraySize; i++)
    {
        if (nameArray[i] == findValue)
        {
            cout << "Contact Found!: " << endl;
            cout << setw(2) << ". " << "Name : " << setw(20) << nameArray[i] <<" | "<< "Number: "<< setw(15) << numberArray[i] <<endl;
            found = true;

        }
    }
    if (found = false)
    {
        cout << "User cannot be found! " << endl;
    }
    


  return 0;
}