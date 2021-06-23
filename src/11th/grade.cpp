/* WAP to accept percentage from user and print grade as follows:
per<35 fail
per>=35 & <45 pass 
per>=45 & <60 second class 
per>=60 & <75 first class
per>=75 distinction
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float per;
    cout << "Enter your Percentage" << endl;
    cin >> per;
    if (per < 35)
        cout << "Fail";
    else if (per >= 35 && per < 45)
        cout << "Pass";
    else if (per >= 45 && per < 60)
        cout << "Second Class";
    else if (per >= 60 && per < 75)
        cout << "First Class";
    else if (per >= 75 && per <= 100)
        cout << "Distinction";
    else
        cout << "Not Possible";
    getch();
    return 0;
}
