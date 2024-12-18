#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};

int main() {
    myClass myObj;
    myObj.setName("John");// esse comando vai definir o valor da variavel name para "John"
    cout << myObj.getName();// esse comando vai imprimir o valor da variavel name

    return 0;
}