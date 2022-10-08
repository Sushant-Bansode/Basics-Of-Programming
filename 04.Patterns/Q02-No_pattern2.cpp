/*Print the following pattern

Pattern for N= 4
   1
  23
 345
4567

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines

Sample Input :
5
Sample Output :
    1
   23
  345
 4567 
56789    
*****************************************************************************************************/
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
      int j = i,count = i;    
        while(count--){
            cout<<j;
        j++;    
        }
        cout<<endl;
        i++;
    }
}