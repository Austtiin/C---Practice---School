/*
02/14/2022

Austin Stephens

Input:
 Take relevant input form user at each decision point
reguarding current condition in question.

Output:
What is the traffic light color? Red, Yellow, or Green?
Is there oncoming traffic?
Is the turn signal currently set to indicate a left turn, a right turn, or is it off?

Program outputs whether the 'car's' decision is to wait or take
the left turn.
*/

#include <iostream>
#include <cstdlib>
#include <typeinfo>
#include <sstream>
#include <string>

using namespace std;
    int main()
    {

        /*Declare*/
        int i = 0;
        int b = 0;
        int c = 0;
        string light = "";
        string traffic = "";
        string turnSignal = "";
        string go = "We are good to go! ";
        string no = "Hold on! We aren't good to go! ";

    /* Input Validation / Input loops*/

            do
                {
                    cout << "What is the traffic light color? Red, Yellow, or Green?" << endl;
                    cin >> light;
                } while (!cin.fail() && light!="Red" && light!="Yellow" && light!= "Green");


            do
                {
                    cout << "Is there oncoming traffic? 'Yes' or 'No'" << endl;
                    cin >> traffic;
                } while (!cin.fail() && traffic!="Yes" && traffic!="No");


            do
            {
                cout << "Is the turn signal currently set to indicate a 'Left' turn, a 'Right' turn, or is it 'Off'? " << endl;
                cin >> turnSignal;
            } while (!cin.fail() && turnSignal!="Left" && turnSignal!="Right" && turnSignal!="Off");


    /*If statements / Decision makers */

            if (light == "Green" || light == "Yellow")
                {
                    i = 1;
                }else if (light == "Red")
                {
                    i = 0;
                }

            if (traffic == "No")
                {
                    b = 1;
                }  else if (traffic == "Yes")
                {
                    b = 0;
                }

            if (turnSignal == "Left")
                {
                    c = 1;
                }else if (turnSignal == "Right" || turnSignal == "Off")
                {
                    c = 0;
                }


    /*Output decision statement*/

            if (i == 1 && b == 1 && c== 1)
            {
                cout << go;
            }else{
                cout << no;
            }

        system ("Pause");
        return 0;
    }