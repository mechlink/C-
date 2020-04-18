//
// Sams Teach yourself C++ in 24 Hours, 6th Edition
// Returning Multiple Values by Reference
// Listing 12.8 page 179
//
// 17th April 2020
//

#include <iostream>
using namespace std;
enum ERR_CODE { SUCCESS, ERROR }; // SUCCESS=0, ERROR=1

ERR_CODE factor(int, int&,int&);

int main()
{
    int number, squared, cubed;
    ERR_CODE result;

    cout << "Enter a number (0 - 20): ";
    cin >> number;

    result = factor(number, squared, cubed);

    if (result == SUCCESS)
    {
        cout << "number: " << number << "\n";
        cout << "square: " << squared << "\n";
        cout << "cubed: "  << cubed   << "\n";
    }
    else
    {
        cout << "Error encountered!!\n";
    }
    return 0;
}

ERR_CODE factor(int n, int &rSquared, int &rCubed)
{
    if (n > 20)
    {
        return ERROR;   // simple error code
    }
    else
    {
        rSquared = n*n;
        rCubed = n*n*n;
        return SUCCESS;
    }
}

