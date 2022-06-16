#include <stdio.h>
 
int main()
{
    int n, n1, n2, n3, n4, max;
    printf("ENTER UPTO 4 Numbers :\n ");
    printf("HOW Many no. YOU ARE GOING TO COMPARE\n");
    scanf("%d",&n);
    if( n==2 ){
    printf( "enter 1st No.\n");
    scanf("%d",&n1);
     printf( "enter 2nd No.\n");
    scanf("%d",&n2);
    max = (n1 > n2) ? n1 : n2 ;
    printf("YOUR MAXIMUM NO. IS %d",max);

    }
   else if ( n==3 ){
    printf( "enter 1st No.\n");
    scanf("%d",&n1);
     printf( "enter 2nd No.\n" );
    scanf("%d",&n2);
     printf( "enter 3rd No.\n");
    scanf("%d",&n3);
    
    max = (n1 > n2 && n1 > n3 ) ?
               n1 : (n2 > n3) ?
               n2 : n3;
printf("YOUR MAXIMUM NO. IS %d",max);
    }
    else if ( n==4 ){
    printf( "enter 1st No.\n" );
    scanf("%d",&n1);
     printf( "enter 2nd No.\n" );
    scanf("%d",&n2);
     printf( "enter 3rd No.\n" );
    scanf("%d",&n3);
     printf( "enter 4th No.\n" );
    scanf("%d",&n4);
    
    max = (n1 > n2 && n1 > n3 && n1 > n4) ?
               n1 : ((n2 > n3 && n2 > n4) ?
               n2 : (n3 > n4 ? n3 : n4));
printf("YOUR MAXIMUM NO. IS %d",max);
    }


}



