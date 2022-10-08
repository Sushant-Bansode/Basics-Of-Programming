/*Code : Mirror Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
   1 
  121
 12321
1234321


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
   1 
  121
 12321

Sample Input 2:
4
Sample Output 2:
Pattern for N = 4
   1 
  121
 12321
1234321

/*************************************************** SOLUTION *************************************************************************/
	      
		
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i, j, k, l;
    
    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            cout<<(" ");
        }
        for (k = i; k >= 1; k--)
        {
            cout<< k;
        }
        for (l = 2; l <= i; l++)
        {
            cout<<l;
        }
        cout<<"\n";
    }
}