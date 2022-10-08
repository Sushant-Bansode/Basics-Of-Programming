#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int number,count1=0,count2=0,count3=0;
    char continuee='Y';
    
    for( ;int(continuee) == 89 ;)
    {
    cout << "Enter Any Number You Want:\n ";
   cin >> number;
    

    if(number>0) {
    count1+=1;
    }
    else if (number<0) {
    count2+=1;
    }
    else {
    count3+=1;
    }
   cout << "  Do you want enter another Number Y/N:\n";
 cin >> continuee;
    }

   cout << "Positive Numbers: " << count1 << endl;
   cout <<"Negative Numbers: " << count2 << endl;
  cout << "Zero Numbers: " << count3 << endl;
    
   return 0;
}