#include <iostream>;
using namespace std;

class A
{

private:
    char c;
    int i;

public:
    virtual void base()
    {
        cout << 1 << endl;
    }

};
class B : public A
{

private:
    char c;
    int i;

public:
    virtual void base()
    {
        cout << 1 << endl;
    }

};
class C :public A, public B
{
private:
    char c;
    int i;
public:
    virtual void drive()
    {
        cout << 2 << endl;
    }
};
//int main()
//{
//    cout << sizeof(A) << endl;
//    A a;
//    cout << sizeof(a) << endl;
//    B b;
//    cout << sizeof(B) << endl;
//    cout << sizeof(b) << endl;
//    cout << sizeof(C) << endl;
//    C c;
//    cout << sizeof(c) << endl;
//
//}