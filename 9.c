// Online C compiler to run C program online

#include<stdio.h>
void main ()
{
    int a[100],i,m,n,j,b[100];
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
      for(i=0 ; i< m; i++)
      {
          int p=0;
           for(int j=0 ; j<n ; j++)
           {
               if (b[i]==a[j])
               {
                   p=1;
                   break;
               }
           }
      if (p==0)
           {
               a[n]=b[i];
               n++;
           }
      }
      
     printf("Array as follow :");
     for ( i=0 ;i<n ; i++)
     {
        printf ("%d\t",a[i]);
     }
}

  