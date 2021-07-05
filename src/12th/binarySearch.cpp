// WAP to search through an array using Binary Search

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float a[10] = {1.1, 4.20, 6.9, 32.7, 46.2, 87.3, 87.9, 90.5, 96.42, 99.99}, num;
    int start = 0, end = 9, mid;
    bool isInArray = 0;
    cout << "Enter the number to be searched " << endl;
    cin >> num;
    for (mid = (start + end) / 2; start <= end; mid = (start + end) / 2)
    {
        if (a[mid] == num)
        {
            cout << "Number is at position " << mid + 1;
            isInArray = 1;
            break;
        }
        if (num > a[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (isInArray == 0)
        cout << "Number not found";
    getch();
}

/* 
// Same program for Turbo C++

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    float a[10] = {1.1, 4.20, 6.9, 32.7, 46.2, 87.3, 87.9, 90.5, 96.42, 99.99}, num;
    int start = 0, end = 9, mid;
    bool isInArray = 0;
    cout << "Enter the number to be searched " << endl;
    cin >> num;
    for (mid = (start + end) / 2; start <= end; mid = (start + end) / 2)
    {
        if (a[mid] == num)
        {
            cout << "Number is at position " << mid + 1;
            isInArray = 1;
            break;
        }
        if (num > a[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (isInArray == 0)
        cout << "Number not found";
    getch();
}
*/

/* 
Output :-
  Enter the number to be searched 
  99.99
  Number is at position 10 
*/