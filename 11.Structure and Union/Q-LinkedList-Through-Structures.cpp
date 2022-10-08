// LEARNING STRUCTURES

/*Structures are very useful when we want to create Linked Lists and Trees. 
Here we will learn to create a Linked List struct.

*****You have to make struct for Linked List.*****

Example 1:

Input:
N = 5
Linked List => 1 2 3 4 5
Output: 
5
Explanation:
1->2->3->4->5->NULL is the linked 
list formed. The length is 5
Your Task:
Since this is a function problem, you don't need to take any input.
Just complete the provided struct.
All the other functions of the linked-list are already implemented.
Driver code will print the length of the linked list.

Constraints:
1 <= N <= 100
***************************************SOLUTION**************************************/
#include <iostream>
using namespace std;

struct node{
   int data;
   node* next = NULL; 
};

int main ( ){
node *head = new node;
node *second = new node;
node *third = new node;
node *fourth = new node;
node *last = new node;
// Inserting data
head -> data = 1;
second -> data = 2;
third -> data = 3;
fourth -> data = 4;
last -> data = 5;
// Linking the linked list
head -> next = second;
second -> next = third;
third -> next = fourth;
fourth -> next = last;
last -> next = NULL;

// Now Finally printing it 
node *temp = head;
while ( temp != NULL ){
 cout << temp -> data << " ";
 temp = temp -> next;
}

}

