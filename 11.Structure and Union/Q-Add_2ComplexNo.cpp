// ADD TWO COMPLEX NUMBERS

/*In this problem, you need to add 2 given complex numbers
and return the resulting complex number to the function add().

A struct named Complex containing data members as real and 
imaginary part of the complex number is implemented already.

Example 1:
Input:
c1 = 3+6i 
c2 = -1+4i
Output:
2 + 10i

Your Task:
Just complete the given function add() having 
two Complex structs as arguments. Return the new 
Complex struct to the function. Don't print anything.

********************************SOLUTION**********************************/

// C++ program to add two complex numbers using structure and function
#include <iostream>
using namespace std;
  
/* Structure to store complex number in the form of x + yi, 
 * realPart = x and imaginaryPart = y;
 */
struct Complex {
   int realPart;
   int imaginaryPart;
};
   
int main() {
   Complex c1, c2, sum;
   
   cout << "Enter value of A and B  where A + iB is first complex number\n";
   cin >> c1.realPart >> c1.imaginaryPart;
     
   cout << "Enter value of A and B  where A + iB is second complex number\n";
   cin >> c2.realPart >> c2.imaginaryPart;
     
   /* (A + Bi) + (C + Di) = (A+C) + (B+D)i */
   sum.realPart = c1.realPart + c2.realPart;
   sum.imaginaryPart = c1.imaginaryPart + c2.imaginaryPart;
      
   if(sum.imaginaryPart >= 0 )
      cout << sum.realPart << " + " << sum.imaginaryPart<<"i";
   else
      cout << sum.realPart << " - " << sum.imaginaryPart<<"i";
     
   return 0;
}