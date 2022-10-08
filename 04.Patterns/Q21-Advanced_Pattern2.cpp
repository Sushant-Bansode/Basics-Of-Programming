/*Code : Star and Numbers Pattern
Print the following pattern for the given number of rows.

Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
8
Sample Output 1:
8
    1    
   123   
  12345  
 1234567 
123456789
 7654321 
  54321
   321 
    1  


/*************************************************** SOLUTION *************************************************************************/


#include<bits/stdc++.h>
using namespace std; 
int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= (n/2) + 1) {
        int k = 1; //k is the number of spaces
        while(k <= (n/2) + 1 - i) {
            cout << " "; k++; 
        }
        int j = 1; 
        while(j <= (2*i) - 1) {
            cout << j; 
            j++;
        }
        cout << endl;
        i++; 
    }
    i = 1;
    while(i <= n / 2){
        int k = 1;
        while(k <= i) {
            cout << " "; 
            k++;
        } 
        int j = 2 * ((n/2) - i + 1) - 1;
        while(j >= 1) {
            cout << j; 
            j--; 
        }
        cout << endl;
        i++;
    }
}
