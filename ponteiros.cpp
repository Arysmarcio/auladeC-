# include <iostream>
using namespace  std;

int main (){
    int num = 42;

    int *p = &num;
   // nom cout colocar a varavel p sem o o asterisco ela vai dizer o endereço da onde estaalocado a varoavel na memoria 
   // se colocar com o asterisco ela vai mostrar o valor da variavel 
    cout << *p;
}