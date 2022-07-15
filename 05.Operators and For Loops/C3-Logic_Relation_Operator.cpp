// USE OF LOGICAL AND RELATIONAL OPERATOR.
#include<iostream>
using namespace std;
int main() {

int a , b;
 cout << "ENTER 2 NO." <<endl;
 cin >> a >> b;
 // RELATIONAL OPERATOR //
  
bool isequal = (a ==b); 
 cout << "ARE EQUAL" << isequal << endl;

bool issmaller = (a< b); 
cout << "A IS SMALLER" << issmaller << endl;

bool isgreater = (a> b); 
  cout << "A IS GREATER " << isgreater << endl;    
   
 // LOGICAL OPERATOR -//
 bool notequal = (a !=b);   
 cout << "NOT EQUAL" << notequal << endl;

bool and1 = ((a>b) && (a==b)); 
// bool and1 = (isequal && isgreater); 
cout << "and " << and1;

bool OR =  ((a>b) ||  (a==b));
cout << "OR " << OR;


}

 