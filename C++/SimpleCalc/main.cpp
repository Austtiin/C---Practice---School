/*
Austin Stephens
February 9th 2022
Simple Geometric Calculator

Input:
None
Output:
The sides of the triangle measure 3 and 4. The area is 6.

The sides of the triangle measure 15.0 and 20.0. The area is 150.0
*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
    using namespace std;

    int main(){

        /*Part One*/

        int base = 4.0;
        int sides = 3.0;
        float area = 0;
        cout << "The starting area is " << area << " output will begin: " << endl;
        area= (0.5)*sides*base;
        cout << "The sides of the triangle measure " << sides << " and " << base << "." << " The Area is " << area << endl;

        /*Part Two*/

        double base2 = 0.0;
        double side2 = 0.0;
        double area2 = 0.0;

        base2= (5.0)*base;
        side2= (5.0)*sides;

        area2= (0.5)*base2*side2;


        cout << setprecision(1) << fixed << "The sides of the triangle measure " << side2 << " and " << base2 << ". " << "The area is " << area2 << endl;

    system("pause");
    return 0;
    }