/*
WAP to add two complex nums A = 2.3 + 3.4i & B = 4.4 + 3.5i using a constructor. 
Print the complex nums and there sum after calculation.
*/

#include <iostream>
using namespace std;

// Structure of Complex Number
struct compNum
{
    float real, imaginary;
};

class Complex
{
public:
    Complex(compNum num1, compNum num2)
    {
        compNum1 = num1;
        compNum2 = num2;
    }

    compNum addNum()
    {
        compNum result;
        result.real = compNum1.real + compNum2.real;
        result.imaginary = compNum1.imaginary + compNum2.imaginary;
        return result;
    }

private:
    compNum compNum1, compNum2;
};

int main()
{
    compNum number1, number2;

    // User Input
    cout << "Enter real part of number 1" << endl;
    cin >> number1.real;
    cout << "Enter imaginary part of number 1" << endl;
    cin >> number1.imaginary;
    cout << "Enter real part of number 2" << endl;
    cin >> number2.real;
    cout << "Enter imaginary part of number 2" << endl;
    cin >> number2.imaginary;

    // Object Creation
    Complex compNumObj(number1, number2);

    compNum number = compNumObj.addNum();

    // Printing the Sum
    cout << "Sum of Complex Numbers " << number1.real << " + " << number1.imaginary << "i"
         << " & " << number2.real << " + " << number2.imaginary << "i is" << endl;
    cout << number.real << " + " << number.imaginary << "i" << endl;
    return 0;
}

/* 
Output:-
    Enter real part of number 1
    2.3
    Enter imaginary part of number 1
    3.4
    Enter real part of number 2
    4.4
    Enter imaginary part of number 2
    3.5
    Sum of Complex Numbers 2.3 + 3.4i & 4.4 + 3.5i is
    6.7 + 6.9i
*/