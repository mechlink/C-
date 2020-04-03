//
// Sams Teach yourself C++ in 24 Hours, 6th Edition
// Accessing Data Members using Pointers
// Listing 11.2 page 157
// 3rd April 2020
//
#include <iostream>
using namespace std;

class SimpleCat
{
public:
    SimpleCat() { itsAge = 2; }
    ~SimpleCat() {}
    int GetAge() const { return itsAge; } // const never change in value
    void SetAge(int age) { itsAge = age; }
private:
    int itsAge;
};

int main()
{
    SimpleCat *Frisky = new SimpleCat;
    cout << "Frisky is " << Frisky->GetAge()
              << " years old" << "\n";

    Frisky->SetAge(5);
    cout << "Frisky is " << Frisky->GetAge()
              << " years old\n";

    Frisky->SetAge(9);
    cout << "Frisky is " << Frisky->GetAge()
              << " years old\n";

    delete Frisky;
    return 0;
}


