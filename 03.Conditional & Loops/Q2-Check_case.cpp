#include <iostream>
using namespace std;
int main () {
char char1;
cout << " ENTER YOUR CHARACTER" <<endl;
cin >> char1;
int a = char1;

if ( a <=90 && a>=65 ) {
cout << "UPPER CASE SO 1 " << endl;
}
else if ( a >=97 && a <=122 ) {
cout << "LOWER CASE SO 0 " << endl;
}
else {
cout << "NOT AN ALPHABET SO -1 " << endl;
}





}