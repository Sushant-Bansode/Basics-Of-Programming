
// learnt The Use of Basic If else.
#include <cmath>
#include<iostream>
using namespace std;
int main() {
int basic, allow;
char grade;
float hra,da,pf,total;

cout <<"ENTER what is YOUR BASIC SALARY  "<< endl;
cin >> basic;
cout << "ENTER YOUR GRADE "<< endl;
cin >> grade;

hra = basic*0.2;
da = basic*0.5;
pf = basic*0.11;
if (grade = 'A') {
  allow = 1700;
}
else if (grade = 'B') {
  allow = 1500;
}
else if (grade = 'C') {
  allow = 1300;
}

total = (basic + hra + da + allow) - pf; 

cout << " TOTAL SAL. " << llround(total);
// llround in cmaths is used for rounding off.
}