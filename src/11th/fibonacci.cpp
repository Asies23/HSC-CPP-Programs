// WAP to print Fibonacci Series using while loop
// 0 1 1 2 3 5 8 13

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i = 0, j = 1, sum = 0;
    while (sum <= 13)
    {
        cout << sum << " ";
        sum = i + j;
        j = i;
        i = sum;
    }
    getch();
    return 0;
}

/* 
Output:-
0 1 1 2 3 5 8 13 
 */