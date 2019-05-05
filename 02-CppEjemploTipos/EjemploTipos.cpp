/*
Marianela Plescia
K1051
TP#2
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

  int i1 = 3;
  int i2 = 6;
  cout << "3 / 6 = " << i1/i2;
  
  bool t = true;
  bool f = false;
  cout << "\n V v F = " << t or f;
  
  char c1 = 's';
  char c2 = 'i';
  cout << "\n s + i" << c1+c2;
    
  unsigned u1 = 20;
  unsigned u2 = 10;
  cout << "\n 20 - 10 = " << u1-u2;
  
  double d1 = 123456;
  double d2 = 456789;
  cout << "\n 123456 x 456789 = " << d1*d2;
  
  string s1 = "Hola";
  string s2 = " Mundo";
  cout << "\n "<< s1+s2;
  
  cout << "\n\nTambien existe una variable de tipo 'void' que se usa por ejemplo en una declaracion de funcion: significa que la funcion no devuelve ningun valor.";
  
  return 0;
}
