// WAP to print the greatest of 3 numbers

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter Three numbers" << endl;
    cin >> n1 >> n2 >> n3;
    if (n1 > n2 && n1 > n3)
        cout << n1 << " is the greatest";
    else if (n2 > n1 && n2 > n3)
        cout << n2 << " is the greatest";
    else
        cout << n3 << " is the greatest";
    getch();
    return 0;
}