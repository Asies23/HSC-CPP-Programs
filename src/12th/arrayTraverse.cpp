// WAP to traverse through an array using pointers

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float a[5] = {3.4, 4.5, 7.8, 4.20, 6.9}, *p, *q, sum = 0.0;
    p = &a[0];
    for (q = p + 4; p <= q; p++)
    {
        cout << "Value: " << *p << " Address: " << p << endl;
        sum += *p;
    }
    cout << "Sum: " << sum << endl;
    getch();
}

/*
// Same Program for Turbo C++

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    float a[5] = {3.4, 4.5, 7.8, 4.20, 6.9}, *p, *q, sum = 0.0;
    p = &a[0];
    for (q = p + 4; p <= q; p++)
    {
        cout << "Value: " << *p << " Address: " << p << endl;
        sum += *p;
    }
    cout << "Sum: " << sum << endl;
    getch();
} 
*/

/* 
Output:-
  Value: 3.4 Address: 0x61fef0
  Value: 4.5 Address: 0x61fef4
  Value: 7.8 Address: 0x61fef8
  Value: 4.2 Address: 0x61fefc
  Value: 6.9 Address: 0x61ff00
  Sum: 26.8
 */