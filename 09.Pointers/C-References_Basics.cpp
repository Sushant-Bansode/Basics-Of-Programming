// References in C++

/*C++ References is a new language construct which was 
introduced to reduce the dependency over pointers for doing indirect
memory access. Usage of pointers requires caution as the programmer 
needs to manually deallocate them to avoid memory leaks. 
A reference is an alternative name for a memory location. 
References are useful in following situations - */

#include <bits/stdc++.h>
using namespace std;
// Modify the passed parameters in a function
void swap (int& first, int& second){    
    int temp = first;    
    first = second;  
    second = temp;}


 struct Student {   
 string name;  
 string address;   
 int rollNo;};
// Avoiding copy of large structures
void print(const Student &s){   
cout << s.name << "  " << s.address << "  " << s.rollNo;}   
int main(){   
// Modify the passed parameters in a function    
     int a = 2, b = 3; 
     swap(a, b);  
     cout << a << " " << b; 
// Avoiding copy of large structures
 Student sushant;
 sushant.name = "SUSHANT";
 sushant.address = "PUNE";
 sushant.rollNo = 18;
 print(sushant);

// In For-Each Loops to modify all objects
vector<int> vect{ 10, 20, 30, 40 };     
for (int &x : vect)        
 x = x + 5;  
for (int x : vect)        
cout << x << " "; 


/*REFERENCES VS POINTERS...
A pointer can be declared as VOID but a reference can't.
It must refer to some existing variable/memory location.
Also, references can't be assigned NULL unlike pointers.
References are less powerful than pointers
Once a Reference is created, it can't be made to refer another variable. 
With pointers we can do so.
A reference must be initialized. 
Pointers can be declared without initialization.*/
    
   
 return 0;
}