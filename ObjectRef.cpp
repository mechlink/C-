//
// Sams Teach yourself C++ in 24 Hours, 6th Edition
// Passing by Reference
// Listing 13.1 page 184
//
// 22nd April 2020
//

#include <iostream>
using namespace std;

class SimpleCat
{
public:
    SimpleCat();               // constructor
    SimpleCat(SimpleCat&);     // copy constructor
    ~SimpleCat();              // destructor
};

SimpleCat::SimpleCat()
{
    cout << "Simple Cat Constructor ...\n";
}

SimpleCat::SimpleCat(SimpleCat&)
{
    cout << "Simple Cat Copy Constructor ...\n";
}

SimpleCat::~SimpleCat()
{
    cout << "Simple Cat Destructor ...\n";
}

SimpleCat FunctionOne(SimpleCat theCat);
SimpleCat* FunctionTwo(SimpleCat *theCat);

int main()
{
    cout << "Making a cat ...\n";
    SimpleCat Frisky;
    cout << "Calling FunctionOne ...\n";
    FunctionOne(Frisky);
    cout << "Calling FunctionTwo ...\n";
    FunctionTwo(&Frisky);
    return 0;
}

// FunctionOne, passes by value
SimpleCat FunctionOne(SimpleCat theCat)
{
    cout << "Function One. Returning ...\n";
    return theCat;
}

// functionTwo, passes by reference
SimpleCat* FunctionTwo (SimpleCat *theCat)
{
    cout << "Function Two. Returning ...\n";
    return theCat;
}
