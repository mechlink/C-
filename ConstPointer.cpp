//
// Sams Teach yourself C++ in 24 Hours, 6th Edition
// Using const pointer
// Listing 11.5 page 163
//
// 11th April 2020
//
#include <iostream>
using namespace std;
class Rectangle
{
public:
    Rectangle();
    ~Rectangle();
    void SetLength(int length) { this->itsLength = length; }
    int GetLength() const { return this->itsLength; }
    void SetWidth(int width) { itsWidth = width; }
    int GetWidth() const { return itsWidth; }
    int GetArea() const {return itsLength*itsWidth;}

private:
    int itsLength;
    int itsWidth;
};

Rectangle::Rectangle():
 itsWidth(5),
 itsLength(10)
{}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle* pRect = new Rectangle;
    const Rectangle *pConstRect = new Rectangle;
    Rectangle * const pConstPtr = new Rectangle;

    cout << "pRect width: "
              << pRect->GetWidth() << " feet\n";
    cout << "pCostRect width: "
              << pConstRect->GetWidth() << " feet\n";
    cout << "pConstPtr width: "
              << pConstPtr->GetWidth() << " feet\n";

    cout << "\n";
    pRect->SetWidth(10);
// Cannot legally call a non-const member function
// pConstRect->SetWidth(10);
    pConstPtr->SetWidth(10);

    cout << "pRect width: "
              << pRect->GetWidth() << " feet\n";
    cout << "pCostRect width: "
              << pConstRect->GetWidth() << " feet\n";
    cout << "pConstPtr width: "
              << pConstPtr->GetWidth() << " feet\n";

    return 0;
}

