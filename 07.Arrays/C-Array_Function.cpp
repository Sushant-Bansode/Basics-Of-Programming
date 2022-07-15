// PASSING ARRAY TO FUNCTION

// WE NEED TO PASS THE SIZE OF THE ARRAY EXPLICITLY AND ALSO, 
// CAN USE *ARR INSTEAD OF ARR[] TO PASS TO FUNCTION. 
#include <iostream>
using namespace std; 
// function declaration:
double getAverage(int arr[], int size);
int main () {
   // an int array with 5 elements.
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   // pass pointer to the array as an argument.
   avg = getAverage( balance, 5 ) ;
 
   // output the returned value 
   cout << "Average value is: " << avg << endl; 
    
   return 0;
}

// FUNCTION INILISATION...
double getAverage(int arr[], int size) {
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

   return avg;
}