// LEARNT THE BASIC STRUCTURE OF FUNCTIONS AND USING THEM IN CODE.

#include<iostream>
using namespace std;
int findsum(int a, int b){
 int sum = a + b;
return sum;
}

void Average(int a, int b){
 int average = (a + b) /2 ;
 cout << average;
}

int main () {
int x , y;
cout << "ENTER YOUR 2 NO. TO GET THEIR AVERGAE AND SUM" << endl;
cin >> x >> y;
cout << "Their Sum is " << findsum(x, y) << endl; // function calling.
cout << "Their Average is " << endl;
Average(x , y);


}