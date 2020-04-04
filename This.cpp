//
// Sams Teach yourself C++ in 24 Hours, 6th Edition
// Using the This pointer
// Listing 11.4 page 160
// 4th April 2020
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

private:
    int itsLength;
    int itsWidth;
};

Rectangle::Rectangle()
{
    itsWidth = 3;
    itsLength = 4;
}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle theRect;
    cout << "theRect is " << theRect.GetLength()
              << " feet long.\n";
    cout << "theRect is " << theRect.GetWidth()
              << " feet wide.\n";

    theRect.SetLength(20);
    theRect.SetWidth(10);
    cout << "theRect is " << theRect.GetLength()
              << " feet long.\n";
    cout << "theRect is " << theRect.GetWidth()
              << " feet wide.\n";

    return 0;
}
