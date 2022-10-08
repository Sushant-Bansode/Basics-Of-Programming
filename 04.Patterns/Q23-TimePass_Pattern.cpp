#include<iostream>
using namespace std;

int main () {
int N;
/*
cout << "ENTER NUM\n";
int start = 0 , end = N-1; */
    
for (int i = 1 ; i <= 5 ; i++){
    for (int j = 1 ; j <= 5 ; j++) {
   if(i == 1 || i == 5 || j == 1 || j == 5 )
   cout << "* ";
   else if(i == 3 && j== 3)
   cout << "# ";
   else if((j== 2 || j==3 || j==4) && i !=1 && i!=5 )
   cout << "a ";
  
}
 cout << endl;
}

return 0;
}