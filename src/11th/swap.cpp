// WAP to swap two numbers

#include <iostream>
#include <conio.h>
using namespace std;

void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Two numbers are " << a << " and " << b << " respectively";
}

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    swap(a, b);
    getch();
    return 0;
}