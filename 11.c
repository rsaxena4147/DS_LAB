#include<stdio.h>
void main ()
{    
    int i,n,m,a[100],b[100],c[100];
    printf ( "Enter the no. of elements of array1");
    scanf ("%d",&n);
    printf ("Enter the array");
    for(i=0 ; i<n  ; i++)
     {
        scanf("%d",&a[i]);
     }
     printf ( "Enter the no. of elements of array2");
    scanf ("%d",&m);
    printf ("Enter the array");
    for(i=0 ; i<m  ; i++)
     {
        scanf("%d",&b[i]);
     }
    for(i=0 ; i<m  ; i++) 
    {
         for(int j=0 ; j<n  ; j++) 
         {
            if (b[i]==a[j])
            {
                 for(k=0 ; k<m+n ; k++) 
                 {
                    c[k]=b[i]
                 }
            }
         }
    }
    printf("Array as follow :");
     for ( i=0 ;i<n+m; i++)
     {
        printf ("%d",c[i]);
     }
}