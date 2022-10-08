/*Print the following pattern

Pattern for N= 4
    1
   23
  456
78910

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
*****************************************************************************************************/

#include <iostream>
using namespace std;
int main (){
 int n;
 cout << "ENTER A NO." << endl;
 cin >> n ;
 int value = 1;
 for (int i = 1 ; i <= n; ++i){
        for(int spc = 1; spc <= n-i; spc++){
            cout << " ";
       }
 int count = i;
 while( count--){
 cout << value; 
 value++;
 } 
 cout << endl;
      }
return 0;
}
