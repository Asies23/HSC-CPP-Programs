/* 
WAP to reverse a string 
using a function which locates the end of string 
and swap the first character with the last character 
and swaps the second character with the second last character and so on.
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void reverse(char s[255]);

int main()
{
    char s[255];
    cout << "Enter a String: ";
    cin.getline(s, 255);
    reverse(s);
    cout << "Reversed String: " << s;
    getch();
}

void reverse(char s[255])
{
    int i, j, length;
    length = strlen(s);
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

/* 
// Same Program for Turbo C++

#include <iostream.h>
#include <conio.h>
#include <string.h>

void reverse(char s[255]);

void main()
{
    char s[255];
    clrscr();
    cout << "Enter a String: ";
    cin.getline(s, 255);
    reverse(s);
    cout << "Reversed String: " << s;
    getch();
}

void reverse(char s[255])
{
    int i, j, length;
    length = strlen(s);
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
} 
*/

/* 
Output:
    Enter a String: Reverse this String
    Reversed String: gnirtS siht esreveR 
*/