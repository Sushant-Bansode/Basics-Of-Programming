#include <iostream>
using namespace std;
int main() {
int n;
 cout << "ENTER n" << endl;
 cin >> n;
 int i = 1;
 int s=0;   
 while ( i <= n ) {
 if ( i % 2 == 0 ){
 s= s + i;
 }
i++;
 }
cout << s << endl;


}