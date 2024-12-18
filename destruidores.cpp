#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass();//construtor
        ~MyClass();//destrutor
};

MyClass::MyClass()
{
    cout<<"Constructor"<<endl;
}

MyClass::~MyClass()
{
    cout<<"Destructor"<<endl;
}

int main() {
    MyClass obj;
}