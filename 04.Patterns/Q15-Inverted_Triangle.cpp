/*Code : Star Pattern
Print the following pattern
Pattern for N = 4
****
***
**
*
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
***
**
*
Sample Input 2 :
4
Sample Output 2 :
****
***
**
*
 
 /*************************************************** SOLUTION *************************************************************************/
 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = n;
    while(i > 0){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
        i--;
    }
}
 