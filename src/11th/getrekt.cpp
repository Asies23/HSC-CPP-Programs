// WAP to calculate the area of a rectangle using functions

#include <iostream>
#include <conio.h>
using namespace std;

float rect(float x, float y)
{
    return (x * y);
}

int main()
{
    float l, b, a;
    cout << "Enter lenght and breadth of rectangle" << endl;
    cin >> l >> b;
    a = rect(l, b);
    cout << "Area of a rectangle is " << a;
    getch();
    return 0;
}

/* 
Output :-
    Enter lenght and breadth of rectangle
    9
    2
    Area of a rectangle is 18
 */