#include <iostream>
using namespace std;

class CCC
{
public:
    CCC();
    ~CCC();
};

inline CCC::CCC() {
    cout << "  CCC  " << endl;
}

inline CCC::~CCC() {
    cout << "  ~CCC  " << endl;
}


class Base 
{
public:
    Base();
    ~Base();
};

inline Base::Base() 
{
    cout << "  Base  "<< endl;
}

inline Base::~Base() {
    cout << "  ~Base  "<< endl;
}

class Derived : public Base 
{
public:
    CCC ccc;
    
    Derived();
    ~Derived();
};

inline Derived::Derived() 
{
    cout << "  Derived  "<< endl;
}

inline Derived::~Derived() {
    cout << "  ~Derived  "<< endl;
}

 //int main() {
 //   Derived derived;
 //	return 0;
 //}