// WAP to print Fibonacci Series using while loop
// 0 1 1 2 3 5 8 13

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i = 0, j = 1, sum = 0, n, c = 1;
    cout << "Enter the number of terms " << endl;
    cin >> n;
    while (c <= n)
    {
        cout << sum << " ";
        sum = i + j;
        j = i;
        i = sum;
        c++;
    }
    getch();
    return 0;
}

/* 
Output:-
Enter the number of terms 
5
0 1 1 2 3
 */