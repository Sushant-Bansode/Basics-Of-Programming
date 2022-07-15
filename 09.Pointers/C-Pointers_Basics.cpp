
#include<iostream>
using namespace std;

int main () {

/*Pointers are symbolic representation of addresses. 
They enable programs to simulate call-by-reference as well as
to create and manipulate dynamic data structures.
It’s general declaration in C/C++ has the format: */

//Syntax:
//datatype *var_name; 

int *ptr;   //ptr can point to an address which holds int data

int var = 20;    // declare pointer variable int* ptr;  
// note that data type of ptr and var must be same   
ptr = &var;    // assign the address of a variable to a pointer    
cout << "Value at ptr = " << ptr << "\n";  
cout << "Value at var = " << var << "\n";    
cout << "Value at *ptr = " << *ptr << "\n";




}