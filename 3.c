#include <stdio.h>
void main ()
{
    int a[100],i,n,item,pos;
    printf ( "Enter the no. of sorted array");
    scanf ("%d",&n);
     printf ("Enter the array");
    for(i=0 ; i<n  ; i++)
     {
        scanf("%d",&a[i]);
     }
     printf ("Enter the element to entered");
     scanf ("%d",&item);
      for (i=0;i<n;i++)
      { 
         if (item<a[i])
           {
            pos=i;
            break;
            }
            
           }
           for ( i = n-1; i>=pos-1; i--)
    {
      a[i+1]=a[i];

    }
    a[pos]=item;
    
printf("array");
     for ( i = 0; i<n+1; i++)
     
     
     {
        printf ("%d",a[i]);
     }
}
