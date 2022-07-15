// CHARACTER ARRAYS IN C++

#include <iostream>
#include <cstring>
using namespace std;

int main () {

//C-style (character arrays and literals)

//C-style strings are defined using character arrays. 
//There is an extra character called the null (\0) character
//appended to the character array to mark it's end.

//Syntax:
//char str_name[size];

//Declaration & Initialization of string
//char str[size];
char str[] = "Geeks";
char str1[6] = "Geeks";
char str2[] = {'G','e','e','k','s'};

// Declared a string, str of max size 10   
 char str3[10];    
 // Taking input from user    
 cin>>str3;   
 // Printing the string     
 cout<<str3<<endl;
    
// use of strlen
char str4[]="hello";    
for (int i=0;i<strlen(str4);i++)      
cout<<(char)(str4[i]-'a'+'A');
// OUTPUT == HELLO

// USE OF STRCAT == STRING CONCATENATE
char src[] = "source";  
char dest[] = "destination";      
cout<<strcat(dest,src)<<endl;
// OUTPUT == destinationsource

/*strcmp: Performs lexicographical comparison between 2 strings. The function returns an integer.
= 0 (if both strings are equal)
> 0 (if 1st string appears after 2nd string in lexicographical order)
< 0 (if 1st string appears before 2nd string in lexicographical order*/

char stri1[]="abc";   
char stri2[]="abcd";  
char stri3[]="abb";       
cout<<strcmp(stri1,stri2)<<endl;  
cout<<strcmp(stri1,stri3)<<endl;   
cout<<strcmp(stri2,stri3)<<endl;
/*OUTPUT ==
-100   <0 indicating str1 appears before str2
1      >0 indicating str1 appears after str3
1      >0 indicating str2 appears after str3 */

// String Class in C++ STL
//Syntax: Declaring strings using STL class is simpler than declaring character arrays.
//string str_name;

// Declaring String    
string str9;  
// Taking input from user  
cin>>str9;       
// Printing the String   
cout<<str9<<endl;   
cout<<str9.length()<<endl; 
// REMAINING STL AND OTHER USELFUL INBUILT FUNCTIONS OF STRING CLASS IN STL


}