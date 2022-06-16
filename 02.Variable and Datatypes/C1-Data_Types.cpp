/* LEARNT THE ABOUT VARIABLES DECLARATION AND BASIC DATATYPES 
*/ 
#include<iostream>
using namespace std;
int main() {
cout << "ENTER YOUR INTEGER" << endl;
int a;
unsigned int a1;
long a3;
short a4;
cin >> a;
cout << "your integer is  " << a << endl;

cout << "ENTER YOUR decimal No." << endl;
float b ;
double b1;
cin >> b ;
cout << "your decimal is  " << b << endl;
cout << "Size of your decimal is " << sizeof(b) << endl;

cout << "ENTER YOUR character" << endl;
char c;
cin >> c ;
cout << "your character is  " << c << endl;
cout << "ASCII VALUE OF your character is " << int(c) << endl;

cout << "ENTER YOUR String" << endl;
string name;
cin >> name ;
cout << "your String is  " << name << endl;
cout << " Size of your string is " << sizeof(name) << endl;

bool d1 = true;
bool d2 = false;
cout << " BOOL D1 VALUE " << d1 << " BOOL not D2 VALUE " << !d2 << endl;


}