#include <iostream>
using namespace std;

int main() {
	int n;
    cout << "ENTER n" << endl;
	cin >> n;
 int d = 2;
 bool divided = false;
 while ( d < n ){
 if (n % d == 0 ) {
     cout << "NOT PRIME" << endl;
     divided = true;
 } 
 d++;
 }
if (!divided) {
 cout << " PRIME " << endl;
}

}