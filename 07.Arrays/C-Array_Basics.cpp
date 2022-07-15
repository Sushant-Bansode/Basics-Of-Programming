
#include <iostream>
using namespace std;

int main () {

// We can declare an array by specifying its type and size or 
// by initializing it or by both.

// Array declaration by specifying size

int arr[10];  
// array declaration with specific size
int n;
cin >> n;
int arr[n];
//declare array after user-input


// Array declaration by initializing elements

// Array declaration by initializing elements
int arr1[] = { 10, 20, 30, 40 };
// Compiler creates an array of size 4.
// above is same as  "int arr1[4] = {10, 20, 30, 40}"


// Array declaration by specifying size and initializing elements

// Array declaration by specifying size and initializing elements //
int arr2[6] = { 10, 20, 30, 40 };
// Compiler creates an array of size 6,
// initializes first, 4 elements as specified by user and
// rest two elements as 0, above is same as  
// "int arr[] = {10, 20, 30, 40, 0, 0}"

// ACCESSING THE ARRAY ELEMENTS..... 

int arr[5];    
arr[0] = 5;   
 arr[2] = -10;    
 arr[3 / 2] = 2; 
 // this is same as arr[1] = 2 , arr[3] = arr[0];   
cout << arr[0] << arr[1] << arr[2] << arr[3];

// No Index Out of bound Checking
int arr4[2];   
cout << arr4[3] << " " << arr4[-2] << " "; 

// CONTIGUOUS ALLOCATION IN ARRAYS.....

// an array of 10 integers.  If arr[0] is stored at 
// address x, then arr[1] is stored at x + sizeof(int)   
// arr[2] is stored at x + sizeof(int) + sizeof(int)    
// and so on.   
int arr5[5], L;  
cout <<"Size of int in this compiler is "<<sizeof(int)<<endl;   
for (L = 0; L < 5; L++)       
// The use of '&' before a variable name, yields 
// address of variable.      
cout <<"Address arr[" << L << "] is "<< &arr5[L] <<endl; 

}