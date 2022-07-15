/*cin.get() is used for accessing character array.
It includes white space characters. 
Generally, cin with an extraction operator (>>) 
terminates when whitespace is found. 
However, cin.get() reads a string with the whitespace.*/


 // C++ program to demonstrate cin.get()
#include <iostream>
using namespace std;

int main()
{
	char name[25];
	cin.get(name, 25);
	cout << name;
 // cin >> name; WILL NOT INCLUDE THE SPACE INTO IT......
 
/*int num;
num = cin.get();
THIS WILL NOT WORK BECAUSE CIN.GET TAKES ONLY STRING OR CHARACTER ARRAY*/
 
return 0;

}




 