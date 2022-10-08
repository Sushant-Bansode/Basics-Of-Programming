/*Highest Occuring Character
Given a string, find and return the highest occurring character present in the given string.
If there are 2 characters in the input string with same frequency, return the character which comes first.
Note : Assume all the characters in the given string are lowercase.
Sample Input 1:
abdefgbabfba
Sample Output 1:
b
Sample Input 2:
xy
Sample Output 2:
x



/********************************************************* SOLUTION *******************************************************************/

#include<bits/stdc++.h> 
#define ASCII_SIZE 256 
// input - given string
char highestOccurringChar(char str[]) {
    char result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
  	return result;
}

