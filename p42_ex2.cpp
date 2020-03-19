//  Teach Yourself C++ Third Edition
//  Page 42 Exercise 2
//  13 March 2020
//  Robert Goh
//
#include <iostream>
#include <string>
using namespace std;

class mydata
{
     string a;
     string b;

     public:
        mydata();
        ~mydata();
        void store(string name, string address);
        void display();
};

//constructor
//
mydata::mydata()
{
cout << "\n";

}


//destructor
mydata::~mydata()
{
cout << "\n*** ";
}

//
// store name
//
void mydata::store(string name,string address)
{
    a=name;
    b=address;

}
//
// display name
//

void mydata::display()
{
   cout << "\n" << a << " lives in " << b << "\n";
}


int main ()
{
  mydata data1;
  string s1,s2;
  cout << "name: ";
  cin >> s1;
  cout << "suburb: ";
  cin >> s2;
  data1.store(s1,s2);
  data1.display();

 return 0;
}
