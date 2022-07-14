
#include<stdio.h>
#include<string.h>
int main () {
  char password[100]; 
  int count1 = 0, count2 = 0, count3 = 0;
  char digit[100] = "0123456789";  
  char specialcharacter[100] = "@#$&*";
  char aplhabets[100] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
  
    printf("ENTER YOUR PASSWORD\n ");
  scanf( "%s", password );
  int length = strlen(password);
 for (int i = 0; i < length ; i++) {
 for (int j = 0; j < 10 ; j++){
   if ( password [i] == digit[j] ){
       count1++;
 }
 }
 }
 
 for (int i = 0; i < length ; i++) {
 for (int j = 0; j < 5 ; j++){
   if ( password [i] == specialcharacter[j] ){
       count2++;
 }
 }
 }
 
 for (int i = 0; i < length ; i++) {
 for (int j = 0; j < 52 ; j++){
   if ( password [i] == aplhabets[j] ){
       count3++;
 }
 }
 }
   if (count1 > 0  && count2 > 0 && count3 > 0 &&  (length > 6 || length < 12 )){
    printf("YOUR PASSWORD IS VALID AND SAVED SUCCESSFULLY \n ");    
  } 
  else{
   printf("PLEASE ENTER VALID PASSWORD \n ");     
  }
}