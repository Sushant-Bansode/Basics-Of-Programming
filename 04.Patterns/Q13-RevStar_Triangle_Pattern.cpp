/*Code : Mirror Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
   * 
  **
 ***
****


Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
Sample Input 1:
3
Sample Output 1:
Pattern for N = 3
   * 
  **
 ***
Sample Input 2:
4
Sample Output 2:
Pattern for N = 4
   * 
  **
 ***
****

/*************************************************** SOLUTION *************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i <= n){
        for(int spc = 1; spc <= n-i; spc++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}



