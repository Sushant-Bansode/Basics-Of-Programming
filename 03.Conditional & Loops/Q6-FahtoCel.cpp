#include <iostream>
using namespace std;
int main () {
float startf, endf, step, cel;
cout << " ENTER STARTING FAH VALUE " <<endl;
cin >> startf;
cout << " ENTER ENDING FAH VALUE " <<endl;
cin >> endf;
cout << " ENTER STEPS IN BETWEEN FAH VALUE " <<endl;
cin >> step;

if ( startf <= 80 && startf >= 0 && endf <= 900 && endf >= startf && step <= 40 && step >= 0 ){
while ( startf <= endf ){
cel = (startf - 32)*5.0/9;
cout << startf << " " << cel << endl;

startf = startf + step;
}


}









} 