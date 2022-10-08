#include <iostream>
using namespace std;

int main() {
int num =10;
do{
cout << "***********************WELCOME TO CALCULATOR PROGRAM ***********************\n";
cout <<"Press 1 for addition.\n";
cout <<"Press 2 for subtration.\n";
cout <<"Press 3 for Multiplication.\n";
cout <<"Press 4 for Division.\n";
cout <<"Press 5 for Remainder.\n";
cout <<"Press 6 for Factorial(that is 1st No. Factorail)\n";
cout <<"Press 7 for For power.(that is 1st No. to Power of 2nd one)\n";
cout <<"Press 8 To EXIT PROGRAMME\n";
int a ,b,n;
int sum, sub,Mul, rem,i;
float div; 
cout <<"Enter Choice no.\n";
cin >> n;
switch (n) {
case 1:
cout << "Enter 2 no.\n";
cin >> a >> b;
sum = a + b;
cout << "Addition is"  << sum;
break;
case 2:
cout <<"Enter 2 no.\n";
cin >> a >> b;
sub = a - b;
cout <<"Subtration is \n" << sub ;
break;
case 3:
cout << "Enter 2 no.\n" ;
cin >> a >> b;
Mul = a * b;
cout << "Multiplication is \n" << Mul ;
break;
case 4:
cout <<"Enter 2 no.\n";
cin >> a >> b;
div = a/b;
cout <<"Division is \n",div;
break;
case 5:
cout <<"Enter 2 no.\n";
cin >> a >> b;
rem = a % b;
cout <<"Remainder is \n"<< rem;
break;
case 6:
cout <<"Enter 1 no.\n";
cin >> a ;
i = a-1;
while( i> 0 ){
a = a * i;
i--;
}  
cout << "Factorial of No is \n" << a;
break;
case 7:
cout << "Enter 2 no. So to Get 1st No. to Power of 2nd one \n" ;
cin >> a >> b;
int temp=a, j=1;
while ( j< b ){ 
 temp = temp * a;
 j++;
}
cout <<" 1st No. to Power of 2nd one is \n" << temp;
break;
}
if (n == 8){
   break; 
}
}while (num ==10);

return 0;
}


