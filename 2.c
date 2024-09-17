#include <stdio.h>
void main ()
{
    int a[100],i,n,item,pos;
    printf ( "Enter the no. of elements of array");
    scanf ("%d",&n);
     printf ("Enter the position to be interted");
     scanf ("%d",&pos);
     printf ("Enter the element to entered");
     scanf ("%d",&item);
    printf ("Enter the array");
    for(i=0 ; i<n  ; i++)
     {
        scanf("%d",&a[i]);
     }

     
    for ( i = n-1; i >= pos-1; i--)
    {
      a[i+1]=a[i];

    }
    a[pos-1]=item;
    
     
     for ( i=0 ;i<n+1; i++)
     {
        printf ("%d",a[i]);
     }
}
