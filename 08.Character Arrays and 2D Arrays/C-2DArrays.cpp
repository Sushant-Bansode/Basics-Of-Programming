// MULTIDIMENSIONAL ARRAYS IN C++ ...

#include <iostream>
using namespace std;

int main () {

//creates (size1 * size2) type 2-D matrix
// int arr[size1][size2]

//creates (size1 * size2 * size3) type 2-D matrix
//int arr[size1][size2][size3]...

//We can continue with as many dimensions as we like:
// (size1 * size2 * ... *size_n) matrix
//int arr[size1][size2][size3]....[size_n]

int arr[2][3] = { {0, 1, 2}, {3, 4, 5} };
int arr1[2][3][4] = { { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} }, { {12, 13, 14, 15}, {16, 17, 18, 19}, {20, 21, 22, 23} } };

//To access a particular element, we do as:
//arr[i][j];
//arr[i][j][k];    

// TAKING INPUT
int x[3][4];
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
        cin >> x[i][j];
    }
}

// output each array element's value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }

}