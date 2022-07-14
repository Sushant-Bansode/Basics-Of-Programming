// Understanding How pass by value works in the function.
#include<iostream>
using namespace	std;
 void increment (int x,	int	y)	{																		//	x	and	y	are	formal	parameters
x++;
y = y +	2;
cout <<x << ":"<< y << endl;
}

int main ()	{
int	a	=	10,	b	=	20;
increment (a,b);																										//	a	and	b	are	actual	parameters	
cout<<	a << ":" << b;							

}