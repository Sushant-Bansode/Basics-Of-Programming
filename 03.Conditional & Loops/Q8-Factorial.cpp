#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
    int temp = 1;
	for (int i = 1;i <= n; i++) {
	temp = temp * i;	
	}
    
		cout << "Factorial is " << temp << endl;
	}