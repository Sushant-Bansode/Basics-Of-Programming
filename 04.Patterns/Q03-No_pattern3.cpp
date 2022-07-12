/*Print the following pattern

Pattern for N= 4
1
12
123
1234

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines

Sample Input :
5
Sample Output :
1
12
123
1234 
12345  
*****************************************************************************************************/

#include <iostream>
using namespace std;
int main (){
  int n;
 cout << "ENTER A NO." << endl;
 cin >> n ;
 for(int i = 1 ; i<=n ; i++ ){
 for(int j = 1 ; j <=i ; j++){
 cout << j;
 } 
 cout << endl;
 }


}