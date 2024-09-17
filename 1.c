#include<stdio.h>
void main ()
{
    int a[100],i,n;
    printf ( "Enter the no. of elements of array");
    scanf ("%d",&n);
    printf ("Enter the array");
    for(i=0 ; i<n  ; i++)
     {
        scanf("%d",&a[i]);
     }
     printf("Array as follow :");
     for ( i=0 ;i<n ; i++)
     {
        printf ("%d",a[i]);
     }
}