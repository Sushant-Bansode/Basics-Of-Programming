
//Array Name as Pointers

/*An array name contains the address of first element of the array
which acts like constant pointer. It means, the 
address stored in array name can't be changed.
For example, if we have an array named val then val and &val[0] 
can be used interchangeably. */


// C++ program to illustrate Array Name as Pointers in C++
#include <bits/stdc++.h>
using namespace std;
void geeks(){    
// Declare an array    
int val[3] = { 5, 10, 20 };   
// declare pointer variable   
 int* ptr;   
// Assign the address of val[0] to ptr  
// We can use ptr=&val[0];(both are same)   
ptr = val;    
cout << "Elements of the array are: ";    
cout << ptr[0] << " " << ptr[1] << " " << ptr[2];}
// Driver program
int main(){    
geeks();

/*Pointers To Pointers

In C++, we can create a pointer to a pointer that in turn may 
point to data or other pointer. The syntax simply
requires the unary operator (*) for each level of indirection 
while declaring the pointer.
char a;
char *b;
char ** c;
a = ’g’;
b = &a;
c = &b;
*/

/*VOID Pointers

A void pointer is a pointer that doesn't have any type and thus can
point to any data-type by explicit casting. Since the data-type
this pointer refers to isn't defined upon declaration, 
we can't dereference a void pointer. */

int x = 5;    
float f = 6.5;    
string s = "Hello World";        
void *p;        
p = &s;  // p = &x is valid , p = &f is valid , p = &s is valid        
// cout << *p << endl;    
cout << *(string *)p << endl; // Dereferncing void pointer 
cout << (string *)p << endl; // Printing address of void pointer


// NULL Pointers
int *pntr = NULL;        
cout << pntr << endl;        
if (pntr) 
cout << "Pointer is not NULL\n";   
else 
cout << "Pointer is NULL\n";

// But Null has some problems which can be solved using the, Nullptr

// Understanding nullptr in C++
// C++ program to demonstrate problem with NULL
/*#include <bits/stdc++.h>
using namespace std;

// function with integer argument
void fun(int N) { cout << "fun(int)"; return;}

// Overloaded function with char pointer argument
void fun(char* s) { cout << "fun(char *)"; return;}

int main()
{
	// Ideally, it should have called fun(char *),
	// but it causes compiler error.
	fun(NULL);
}

OUTPUT == 
16:13: error: call of overloaded 'fun(NULL)' is ambiguous
     fun(NULL);

What is the problem with above program? 
NULL is typically defined as (void *)0 and conversion of NULL
to integral types is allowed.
 So the function call fun(NULL) becomes ambiguous. 
How does nullptr solve the problem? 
In the above program, if we replace NULL with nullptr,
 we get the output as “fun(char *)”.
nullptr is a keyword that can be used at all places where
NULL is expected. Like NULL, nullptr is implicitly convertible 
and comparable to any pointer type. Unlike NULL, 
it is not implicitly convertible or comparable to integral types.
*/

}




