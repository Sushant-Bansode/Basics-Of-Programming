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

Sample Input :
5
Sample Output :
1
23
456
78910
1112131415  
*****************************************************************************************************/

#include <iostream>
using namespace std;
int main (){
 int n;
 cout << "ENTER A NO." << endl;
 cin >> n ;
 int value = 1;
 for(int i = 1 ; i<=n ; i++ ){
  int count = i;
 while( count--){
 cout << value; 
 value++;
 } 
 cout << endl;
 }


}