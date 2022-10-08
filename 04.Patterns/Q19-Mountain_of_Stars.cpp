/*Code : Mirror Number Pattern
Print the following pattern for the given N number of rows.

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50

Sample Input 1:
5
Sample Output 1:
Pattern for N = 5
    *    
   ***   
  *****  
 ******* 
*********

/*************************************************** SOLUTION *************************************************************************/

 #include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 0;
    while(i < n){
        for(int sp = 1; sp < n-i;sp++){
            cout<< " ";
        }
        for(int k = 0; k < ((2*i)+1); k++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}


