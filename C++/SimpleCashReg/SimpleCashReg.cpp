/*
Austin Stephens
Simple Cash Register
02/21/2022


Input:
The program inputs five floating point numbers that represent purchased items.
The program will input the numbers one at a time.

Output:
The program will output the items, item taxes, item subtotals, items total, tax total, and total due.
The output will be formatted in columns with a header above the fields as shown below.

Output Example

Item Cost       Item Tax        Item Subtotal
----------------------------------------------
1.00              0.07          1.07
2.00              0.14          2.14
5.00              0.35          5.35
10.00             0.70          10.70
100.00            7.00          107.00
---------------------------------------------
Items Total       Tax Total     Item Subtotal
118.00             8.26         126.26

*/


#include <iostream>


using namespace std;

    int main()
    {
        /*Declare*/
       const float tax = 7;
       float itemCost[5];
       float itemTax[5];
       float subT[5];
       float itemtotal;
       float taxtotal;
       float subtotal;


    cout.precision(2);
    cout.setf(ios::fixed);

/*input*/
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Price for product" << endl;
        cin >> itemCost[i];

        itemTax[i] = (itemCost[i] * tax)/100;
        subT[i] = itemCost[i] + itemTax[i];
    }


        cout << "Item Cost \t Item Tax \t Item Total" << endl;
        cout << "-----------------------------------------------" << endl;


/*Output*/

    for (int j = 0; j < 5; j++)
    {
        cout << itemCost[j] << "\t\t" << itemTax[j] << "\t\t" << subT[j] << endl;
    }

    cout << "-----------------------------------------------" << endl;
    cout << "Items Total \t Tax Total \t Item Subtotal" << endl;

    for (int t = 0; t < 5; t++)
    {
    itemtotal = itemtotal + itemCost[t];
    taxtotal = taxtotal + itemTax[t];
    subtotal = subtotal + subT[t];
    }

    cout << itemtotal << "\t\t" << taxtotal << "\t\t" << subtotal;

        return 0;
    }