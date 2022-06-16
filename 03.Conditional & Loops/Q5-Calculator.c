
#include<stdio.h>

int main() {
int num =10;
do{
printf("***********************WELCOME TO CALCULATOR PROGRAM ***********************\n");
printf("Press 1 for addition.\n");
printf("Press 2 for subtration.\n");
printf("Press 3 for Multiplication.\n");
printf("Press 4 for Division.\n");
printf("Press 5 for Remainder.\n");
printf("Press 6 for Factorial(that is 1st No. Factorail)\n");
printf("Press 7 for For power.(that is 1st No. to Power of 2nd one)\n");
printf("Press 8 To EXIT PROGRAMME\n");
int a ,b,n;
printf("Enter Choice no.\n");
scanf("%d",&n);
switch (n) {
case 1:
printf("Enter 2 no.\n");
scanf("%d%d",&a ,&b);
int sum = a + b;
printf("Addition is %d\n",sum);
break;
case 2:
printf("Enter 2 no.\n");
scanf("%d%d",&a ,&b);
int sub = a - b;
printf("Subtration is %d\n",sub);
break;
case 3:
printf("Enter 2 no.\n");
scanf("%d%d",&a ,&b);
int Mul = a * b;
printf("Multiplication is %d\n",Mul);
break;
case 4:
printf("Enter 2 no.\n");
scanf("%d%d",&a ,&b);
float div = a/b;
printf("Division is %f\n",div);
break;
case 5:
printf("Enter 2 no.\n");
scanf("%d%d",&a ,&b);
int rem = a % b;
printf("Remainder is %d\n",rem);
break;
case 6:
printf("Enter 1 no.\n");
scanf("%d",&a);
int i = a-1;
while( i> 0 ){
a = a * i;
i--;
}  
printf("Factorial of No is  %d\n",a);
break;
case 7:
printf("Enter 2 no. So to Get 1st No. to Power of 2nd one \n");
scanf("%d%d",&a ,&b);
int temp=a, j=1;
while ( j< b ){ 
 temp = temp * a;
 j++;
}
printf(" 1st No. to Power of 2nd one is %d\n",temp);
break;
}
if (n == 8){
   break; 
}
}while (num ==10);

return 0;
}


