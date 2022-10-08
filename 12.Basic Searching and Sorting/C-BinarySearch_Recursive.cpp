/*Code Binary Search
Given a sorted integer array (in ascending order) and an element x. You need to search this element x in the given input array using binary search. Return the index of element in the input.
Indexing starts from 0.
Return -1 if x is not present in the input array.


Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Line 3 : Element to be searched (i.e. x)
Output Format :
Index of 'x' if found. Otherwise, '-1'
Constraints :
1 <= N <= 10^6
Sample Input 1:
7
1 3 7 9 11 12 45
3
Sample Output 1:
1
Sample Input 2:
7
1 2 3 4 5 6 7
9
Sample Output 2:
-1
	
	
/***************************************************** SOLUTION **************************************************************************/
	

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}