//memoria alocada 
# include <iostream>
using namespace  std;

int main (){
  int size = 8;

  int *p =  new int [size];

  p[0] = 128;
  p[1] = 456;
  p[2] = 543;

  cout << *(p+1);
  

}