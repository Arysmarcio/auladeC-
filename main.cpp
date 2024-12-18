//isso é um cabeçalho é um arquivo que contém funções e comandos.
//O cabeçalho <iostream> em C++ contém o comando cout, que usamos para exibir texto.
# include <iostream>

//Um namespace é usado para organizar o código em grupos lógicos e dar-lhes nomes.
using namespace std;

//O tipo char é usado para armazenar um único caractere. É semelhante à declaração de um string, mas usa aspas simples para o valor
// Você pode declarar variáveis do mesmo tipo em uma linha, separadas por vírgulas.
//Outra palavra-chave útil é auto.A palavra-chave auto permite definir o tipo da variável com base no seu valor.


int main ( )
{
    string message;
    message = "welcome";
    double temp = 84.2;
    float length = 4.56f;
    char  x = 'S';
    bool online = true;
    int point = 234;
    int A=8 , Z=9 ,y=5;
    auto D = "eu vou ";
    cout<<"ola mundo" << endl;
    cout << "This is the second line"<< endl;
    cout << message<< endl;
    cout << A+Z+y<< endl;
    cout << D;

}