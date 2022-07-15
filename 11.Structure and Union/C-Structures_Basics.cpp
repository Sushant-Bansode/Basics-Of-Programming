/*STRUCTURES -:
Structures are user-defined constructs that can be
built by encapsulating predefined data-types 
(int, char, float, double, strings, arrays etc. and even structures) 
together. */ 

/*The syntax to declare a structure is as follows:
struct <structure-name> {
      //data members
} */

#include <bits/stdc++.h>
using namespace std;

struct Employee {   
string name; // name of person   
int age; // age of person   
double salary; // in lakhs    
bool remote;}; // whether remote or not 

struct A {    
int x; // size of int is 4 bytes   
double z; // size of double is 8 bytes   
short int y; // size of short int is 2 bytes
};

int main(){ 
// Initialization-cum-Declaration   
Employee e = { "David", 24, 2.5, true };    
cout << "Name: " << e.name << endl;    
cout << "Age: " << e.age << endl;    
cout << "Salary: " << e.salary << endl;    
cout << "Is remote?: " << e.remote << endl; // Member-access    


Employee* eptr = &e;    // Access using structure pointer    
cout << "Pointer Access: " << (eptr->name) << endl;    
Employee office[10]; // array of employees    

// STRUCTURE ALIGNMENT IN DETAILED IN NOTES.
cout << sizeof(struct A) << endl;


return 0;
}

/*Output:
Name: David
Age: 24
Salary: 2.5
Is remote?: 1
Pointer Access: David*/

