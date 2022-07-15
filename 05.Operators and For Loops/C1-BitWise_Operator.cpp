// USE OF BITWISE OPERATOR OF EVERYTYPE, MUST BE CRYSTAL CLEAR.
#include <iostream>
using namespace std;

int main() {

int a = 19;
int b = 28;
  
int c = a^b; // XOR
cout << c << endl; 

int d = a|b; // OR
cout << d << endl; 

int e = a & b; // AND
cout << e << endl; 

int f = b << 2; // LEFT SHIFT
cout << f << endl; 

int g = b >> 2; // RIGHT SHIFT
cout << g << endl; 

cout << "NEGATION " <<  ~a << " " << ~b ; // NEGATION OF THE INTEGER


}   