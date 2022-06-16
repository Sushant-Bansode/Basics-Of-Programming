
// THIS CODE WAS BASICALLY TO LEARN THAT IMPLICIT AND EXPLICIT TYPECASTING.
#include<iostream>
using namespace std;
int main() {
		
int a;
char c;
cout << "ENTER YOUR INTEGER FOR RELATED CHARACTER " << endl;
cin >> a;
c = a;
cout <<  c << endl;
// ANOTHER WAY OF WRITING IT MAYBE
cout <<  ((char)a) << endl;

cout << "ENTER YOUR CHARACTER FOR RELATED INTEGER  " << endl;
cin >> c;
a = c;
cout <<  c << endl;
// ANOTHER WAY OF WRITING IT MAYBE
cout <<  ((int)c) << endl;

cout << "ENTER YOUR float FOR RELATED integer " << endl;
float f;
cin >> f;
a = f;
cout <<  a << endl;
// ANOTHER WAY OF WRITING IT MAYBE
cout <<  ((int)f) << endl;


int o = a + c;
char d =  a + c;
cout << o <<endl;
cout << d <<endl;
//addtion of ascii value of character
		char c1='a';
		char z= (char)(c1+3);
        //explicite type casting;
		 //it will print charater which equal to addition of ascii value
		






	}










