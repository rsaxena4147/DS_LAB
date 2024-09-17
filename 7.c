//Missing number
#include<stdio.h>
void main ()
{
    int a[100],i,n,sum=0,n_sum,sum_array,miss_no;
    
    printf ( "Enter the no. of elements of array\n");
    scanf ("%d",&n);
    n_sum=(n*(n+1))/2;
    printf ("Enter the array\n");
    for(i=0 ; i<n-1 ; i++)
     {
        scanf("%d",&a[i]);
        sum=sum+a[i];

     }
     printf ("sum of array :%d\n",sum);
     miss_no =n_sum-sum;
     printf ("missing no is %d",miss_no);
     

}