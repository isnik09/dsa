#include <iostream>
using namespace std;
int main()
{
    int number, reverse = 0;

    cout << "Enter a number whose reverse you want: " << endl;
    cin >> number;
    int copyNumber = number;
    while (number > 0)
    {

        int part = number % 10;
        number = number / 10;
        reverse = reverse * 10 + part;
    }
    if (copyNumber == reverse)
    {
        cout << copyNumber << " is a Palindrome" << endl;
    }
    else
    {
        cout << copyNumber << " is not a palindrome" << endl;
    }
    return 0;
}