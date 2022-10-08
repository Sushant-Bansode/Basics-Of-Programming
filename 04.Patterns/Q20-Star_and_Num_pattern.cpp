/*Code : Star and Numbers Pattern
Print the following pattern for the given number of rows.

Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
4
Sample Output 1:
12344321
123**321
12****21
1******1
Sample Input 2:
3
Sample Output 2:
123321
12**21
1****1


/*************************************************** SOLUTION *************************************************************************/


#include<iostream>
using namespace std;

int main(){
    int i,j,n,k;
    
    cin >>n;
    
    for(i = n; i>=1;i--)
    {
        for( j = 1 ; j<= n;j++)
        {
            if(j<=i)
                cout <<j;
            else
                cout <<"*";
            
        }
    
    
    for(j = n ;j>=1;j--)
    {
        if(j<=i)
        {
            cout <<j;
        }
        else
            cout <<"*";
    }
        cout <<endl;
    }
}




#include<bits/stdc++.h>
using namespace std; 
int main() {
   

}
