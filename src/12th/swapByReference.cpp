// WAP in C++ that exchanges data (passing by reference) using (Swap Function) to interchange the given two numbers

#include <iostream>
#include <conio.h>

using namespace std;

void swap(int *, int *);

int main()
{
    int x, y;
    cout << "Enter any two numbers \n";
    cin >> x >> y;
    swap(&x, &y);
    cout << "The Swapped numbers are " << x << " & " << y;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Output:-
//   Enter any two numbers
//   2
//   6
//   The Swapped numbers are 6 & 2