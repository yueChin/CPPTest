#include <iostream>
using namespace std;

template<typename T, template<typename T> class Container >
class Base
{
private:
    Container<T> c;

public:
    Base();
    ~Base();
};

class A 
{
};

template<typename T>
class B 
{

};

int main() {
    //Base<string, A> aa;
    Base<string, B> aa;

    return 0;
}