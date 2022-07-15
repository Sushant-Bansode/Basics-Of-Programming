// Scope of variables in a LOOP

#include<iostream>
using namespace std;
int main() {

/*Scope of variables is the curly	brackets {}	
Inside	which they are defined.
Outside	which they aren’t known to the compiler. 
Same is	for	all loops and conditional statement (if,else).
******Scope	of	variable - for loop******/
// for (initializationStatement; test_expression; updateStatement)	{
//	Scope of variable defined in loop

// Example:
for (int	i=0;	i<5;	i++)	{						
int	j=2; 								
//	Scope	of	i	and	j	are	both	inside	the	loop	they	
// can’t	be	used outside																																																																																																																																													
}

//  Scope	of	variable	for	while	loop
// while(test_expression)	{
//	Scope	of	variable	defined	in	loop


int	i=0;
while(i<5)
{
int	j=2;			
//	Scope	of	i	is	main	and	scope	of	j	is	only	the	loop
i++;
}

// Scope of	variable for conditional statements
// if(test_expression)	{
//	Scope	of	variable	defined	in	the	conditional	statement


int	K=0;
if	(K<5)
{
int	j=5; //	Scope	of	j	is	only	in	this	block
}
//	cout<<j; This	statement	if written	will	give	an	error	because	
// scope	of	j	is	inside	if	and	is	not	accessible	outside	if.

}



 