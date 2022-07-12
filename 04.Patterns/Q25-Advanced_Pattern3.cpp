/*Code : Star and Numbers Pattern
Print the following pattern for the given number of rows.

Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3 
Sample Input 2:
7
Sample Output 2:
7
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 


/*************************************************** SOLUTION *************************************************************************/
#include<iostream>
using namespace std;
int main () {
int N;
cout << "ENTER NUM\n";
cin >> N;
int k; 
k = ((N/2) + 1) ;
int arr[N][N];
int start = 0 , end = N-1;

while ( start != end ){
    
for (int i = start ; i <= end ; i++){
    for (int j = start ; j <= end ; j++) {
    arr[i][j] = k;
}
}

k--;
start++;
end--;
}
arr[(N/2)][(N/2)] = 1;

for (int i = 0 ; i < N ; i++){
    for (int j = 0 ; j < N ; j++){
    cout << arr[i][j] << " " ;
    }
    cout << "\n";
}

return 0;
}