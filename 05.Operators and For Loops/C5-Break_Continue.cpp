// USES OF BREAK AND CONTINUE IN VARIOUS CASES...

#include<iostream>
using namespace std;
int main() {
//	will	never	end)
int b = 10;
while(b--)	{
//	codes
cout << b << endl;
if	(b == 7)	{
break;
}
//codes
}


for (int i = 0;	i < 20; i++)	{
//	codes
cout << i << " " << endl;
if	( i == 10)	{
break;
}
//codes
}

/* Inner loop	break:
When there are two more loops inside one another.	
Break from innermost loop,	
will just exit that loop.*/
// Example	Code	1:
for	(int K=1; K <=3; K++)	{
cout<<K<<endl;
for	(int j=1; j<= 5;	j++)
{
cout<< "IN"	<<endl;
if(j==1)
{
break;
}
}
}

/*Output:
1
in…
2
in…
3
in…  */


//Example	Code	2:

int	H=1;
while	(H<=3)	{
cout<< H << endl;
int	L=1;
while	(L <= 5)
{
cout<< "IN" <<endl;
if(L==1)
{
break;
}
L++;
}
H++;
}

/*Output:
1
in…
2
in…
3
in…*/

/*Continue
The continue keyword can be	used in	any	of the	loop
control	structures.	It causes the loop to immediately	
jump to	the	next iteration	of	the	loops.*/
// • Example:	(using	for	loop)

for	(int m=1; m <=	5;	m++)	{
if(m==3)
{
continue;
}
cout<<m<<endl;
}

/*Output:	
1
2
4
5*/


//Example:	(using	while	loop)

int	n=1;
while (n <=	5)	{
if(n==3)
{
n++;																		
// If Increment isn’t done here then loop wil run	
// Infinite	time for i=3
continue;																
}
cout<<n<<endl;
n++;
}

/*Output:	
1
2
4
5 */  


} 