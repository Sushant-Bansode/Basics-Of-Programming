/*Check Palindrome
Given a String s, check it its palindrome. Return true if string is palindrome, else return false.
Palindrome strings are those, where string s and its reverse is exactly same.
Input Format :
 String S
Output Format :
"true" if S is palindrome, else "false"
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
	
	
/********************************************************* SOLUTION *******************************************************************/
#include <iostream>
using namespace std;

int main ( ){
string s;
cin >> s;
int n = s.size();
bool flag = true;
// See via looping or just reverse.s and compare both of them.
for(int i = 0; i <= n/2 ; i++){
 if( s[i] != s[n-i-1] ) {
 flag = false; }
}

if(flag)
cout << "TRUE" << endl;
else
cout << "FALSE" << endl;

} 
