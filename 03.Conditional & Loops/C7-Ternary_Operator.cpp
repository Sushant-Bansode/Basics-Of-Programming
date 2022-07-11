#include <iostream>
using namespace std; 
int main()
{
    int n, n1, n2, n3, n4, max;
    cout << "ENTER UPTO 4 Numbers :\n ";
    cout <<"HOW Many no. YOU ARE GOING TO COMPARE\n";
    cin >> n;
    if( n==2 ){
    cout << "enter 1st No.\n";
    cin >> n1;
     cout << "enter 2nd No.\n";
    cin >> n2;
    max = n1 > n2 ? n1 : n2 ;
    cout << "YOUR MAXIMUM NO. IS " << max ;

    }
   else if ( n==3 ){
    cout << "enter 1st No.\n";
    cin >> n1;
     cout << "enter 2nd No.\n";
    cin >> n2;
     cout << "enter 3rd No.\n";
    cin >> n3;
    
    max = (n1 > n2 && n1 > n3 ) ?
               n1 : (n2 > n3) ?
               n2 : n3;
cout << "YOUR MAXIMUM NO. IS " << max;
    }
    else if ( n==4 ){
    cout << "enter 1st No.\n";
    cin >> n1;
     cout << "enter 2nd No.\n";
    cin >> n2;
     cout << "enter 3rd No.\n";
    cin >> n3;
     cout << "enter 4th No.\n";
    cin >> n4;
    
    max = (n1 > n2 && n1 > n3 && n1 > n4) ?
               n1 : ((n2 > n3 && n2 > n4) ?
               n2 : (n3 > n4 ? n3 : n4));
cout << "YOUR MAXIMUM NO. IS " << max;
    }


}



