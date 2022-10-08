#include <iostream>
#include<cmath>
using namespace std;
int main () {
 int x , n, temp ;
 
cout <<"ENTER YOUR X "<< endl;
cin >> x;
cout <<"ENTER YOUR N "<< endl;
cin >> n;
temp = x;
// Conditions Given inthe Question were itis below.
if ( x <=8 && x >=0 && n <=9 && x >=0 ){
    if ( x==0 & n==0 ){
 cout << "1" << endl;
}
  else {
int i  = 1;
while ( i< n ){
temp = temp * x;
i++;
}
cout << temp << endl;
  }



}





















}