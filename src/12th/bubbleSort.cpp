// WAP that initializes an array of 10 integers and and sorts it using bubble sort

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numbers[10] = {129, 234, 354, 346, 36, 743, 247, 245, 256, 853};
    int length = sizeof(numbers) / sizeof(numbers[0]), temp;

    cout << "Original Array \n";

    for (int i = 0; i < length; i++)
    {
        cout << "Number " << i << ": " << numbers[i] << endl;
    }

    for (int i = 1; i < length; i++)
    {
        for (int j = 1; j < length - 1; j++)
        {
            if (numbers[j - 1] > numbers[j])
            {
                temp = numbers[j - 1];
                numbers[j - 1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "Sorted Array \n";

    for (int i = 0; i < length; i++)
    {
        cout << "Number " << i << ": " << numbers[i] << endl;
    }
}

/* 
// Same Program for Turbo C++

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int numbers[10] = {129, 234, 354, 346, 36, 743, 247, 245, 256, 853};
    int length = sizeof(numbers) / sizeof(numbers[0]), temp;

    cout << "Original Array \n";

    for (int i = 0; i < length; i++)
    {
        cout << "Number " << i << ": " << numbers[i] << endl;
    }

    for (int i = 1; i < length; i++)
    {
        for (int j = 1; j < length - 1; j++)
        {
            if (numbers[j - 1] > numbers[j])
            {
                temp = numbers[j - 1];
                numbers[j - 1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "Sorted Array \n";

    for (int i = 0; i < length; i++)
    {
        cout << "Number " << i << ": " << numbers[i] << endl;
    }
    getch();
}
*/

/* 
Output:-
  Original Array
  Number 0: 129
  Number 1: 234
  Number 2: 354
  Number 3: 346
  Number 4: 36
  Number 5: 743
  Number 6: 247
  Number 7: 245
  Number 8: 256
  Number 9: 853
  Sorted Array
  Number 0: 36
  Number 1: 129
  Number 2: 234
  Number 3: 245
  Number 4: 247
  Number 5: 256
  Number 6: 346
  Number 7: 354
  Number 8: 743
  Number 9: 853
 */