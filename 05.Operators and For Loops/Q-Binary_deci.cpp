/*Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7


/*************************************************** SOLUTION *************************************************************************/


#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cin >> n;
int decimal;
    int dec_value = 0;
  // Initializing base value to 1, i.e 2^0
    int base = 1;
    int temp = n;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
        base = base * 2;
    }
  cout << dec_value;

}
