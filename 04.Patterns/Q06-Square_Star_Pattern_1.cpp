/*Print the following pattern

Pattern for N= 3
***
***
***

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
 for(int i = 1 ; i <= n ; i++){
 for(int j = 1; j <=n ; j++)  
    cout <<"*"; 
 cout << endl;   
 }

}

