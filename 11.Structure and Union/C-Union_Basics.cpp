// UNION VS STRUCTURE (IN MEMORY ALIGNMENT AND WHENEVER THE DOMINATING ONES COMES IN...
// AND THE WAY THE MEMORY IS SHARED IN ALL DATATYPES...)
// UNION ALIGNMENT... IN NOTES IN DETAILS...
#include <bits/stdc++.h>
using namespace std;
union test { 
int x, y;};

int main(){   
test t;    
t.x = 2;    
cout << t.x << " " << t.y << endl;    
t.y = 3;    
cout << t.x << " " << t.y << endl;    

return 0;}