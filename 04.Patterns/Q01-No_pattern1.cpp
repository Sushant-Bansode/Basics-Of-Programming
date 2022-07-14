/*
Print the following pattern
Pattern for N= 4
1
23
345
4567

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines

Sample Input 1:
3
Sample Output 1:
1
23
345 
***************************************************************************************/


#include <iostream>
using namespace std;
int main (){
  int n;
 cout << "ENTER A NO." << endl;
 cin >> n ;

for(int i = 1 ; i <= n ; i++){
int count = i;  
int value = i;
while(count--){
cout << value;
value++;
}
cout << endl;  
}

}