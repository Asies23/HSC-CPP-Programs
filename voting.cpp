// WAP to accept age from user and check his/her eligiblity for voting

#include <iostream> //importing required libraries
#include <conio.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age" << endl;
    cin >> age; // Input

    // no brackets because content of "if else" is single lined
    if (age >= 18)
        cout << "You are eligible for voting"; // Printed if age >= 18
    else
        cout << "You are not eligible for voting"; // Printed if age < 18
    getch();
    return 0;
}

/*
// Same program for Turbo C++
// WAP to accept age from user and check his/her eligiblity for voting

#include<iostream.h> //importing required libraries
#include<conio.h>

void main(){
    int age;
    clrscr();
    cout<<"Enter Your Age"<<endl;
    cin>>age; // Input

    // no brackets because content of "if else" is single lined
    if (age>=18)
        cout<<"You are eligible for voting"; // Printed if age >= 18
    else
        cout<<"You are not eligible for voting";  // Printed if age < 18
    getch();
}

*/