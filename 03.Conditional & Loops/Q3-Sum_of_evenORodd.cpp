#include <iostream>
using namespace std;
int main () {
 int num, sumeven=0, sumodd=0, rem;

cout << "ENTER YOUR NO. " <<endl;
cin >> num;
 while( num >0 ){
 rem = num %10;    
 if (rem % 2 == 0 ){
sumeven = sumeven + rem;
 }
else {
sumodd = sumodd + rem;
}
num = num/10;
}

cout << "EVEN " << sumeven << " ODD " << sumodd << endl; 

}