// 4 TYPES OF ERRORS SPECIALLY -:
// SYNTAX ERROR/ COMPILATION ERROR
// MLE -: MEMORY LIMIT EXCEEDED
// RUN TIME ERROR
// TLE -: TIME LIMIT EXCEEDED

/* 
COMPILATION ERROR MAYBE DUE TO SYNTAX ERRORS IN CODE 

MLE -: SIMPLY BECAUSE MEMEORY EXCEEDED LIKE DECLARING 
An ARRAY OF 1e9 GLOBALLY and trying TO access its last element
// Remember -: For Global Array its Total elements Capacity be 1e7 and local its 1e5.

RUN TIME ERROR -: MAYBE BECAUSE YOUR ARE TRYING TO ACCESS THE 
OUTOF SCOPE MEMORY, LIKE n+1 ELEMENT IN array OF n. or 
MAYBE DUE TO Pointers PLay... or a[-1] ACCESSING OR 4/0 etc...

// Depending on No. Of Calls in Recursion the, 
//The error can be TLE As Well as RE.
// Because the Recursive Code Works on the Stack Principle Rule...

TLE -: 
Remember The Following -:
No. of Iteration Possible in 1 second is 10^7 - 10^8 
MAX value of N                       Time complexity
   10^9                              O(logN) or Sqrt(N)
   10^8                              O(N) Border case
   10^7                              O(N) Might be accepted
   10^6                              O(N) Perfect
   10^5                              O(N * logN)
   10^4                              O(N ^ 2)
   10^2                              O(N ^ 3)
   <= 160                            O(N ^ 4)
   <= 18                             O(2N*N2) 
   <= 10                             O(N!), O(2N)

// Some Special Statement May Arrive in Between of the Questions like eg-:
let T <=100000 and N <=100000 and We Calculate The Time Complexity as O(T*N) 
and We get its Worse case as, 10^10 .  
But a Statement is Given that if -: SUM OF N OVER ALL TEST CASES IS <= 10^7.
Means the Time complexity can be, 10^7. it will not be 10^10 in its Worst Case Given all Situations.
// O(n) -> O(logn) Try most times because for example if 10^5 is N then for log2N total iteration = 5* log2(10) ~ 5*3 

*/