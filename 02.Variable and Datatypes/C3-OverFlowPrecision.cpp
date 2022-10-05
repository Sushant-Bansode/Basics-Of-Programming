#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main( ){
 // Remember in Online Contests -:
 // The range of int, double, float, long int, long long int .
 // -10^9 <int < 10^9
 // -10^12 <long int < 10^12
 // -10^18 <long long int < 10^18
 // -10^9 <int < 10^9
 // -10^9 <int < 10^9
 
 int a = 100000;
 int b = 100000;
 long int d = a * 1LL * b; // this wouldnt have print if there wont be long; 
 int c = INT_MAX;
 int e = INT_MIN;
 
 // If No. are bigger than 18

 double a1 = 100000;
 double b1 = 100000;
 double c1 = a1*b1;
 cout << fixed << c1; // Fixed for 1e+10 in decimal
 cout << fixed << setprecision(0) << c1;  // for printing only till without decimal part
 // WE SHOULD AVOID THE USE OF DOUBLE THOUGH IT HAS LOTS OF STORING CAPACITY 
 // BECAUSE OF LESS OF ITS PRECISION For Eg
 c1 = 1e25; // This will give the less Precision not exact 10^25 as output so better Use as much int/long as posssible  
 // Be Precautious in Problem of OverFlow Okay !
 


}