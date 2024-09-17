// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
 int n,a[100],count;
 printf ("Enter n");
 scanf ("%d",&n);
 printf ("Enter array");
 for (int i=0;i<n;i++)
 {
     scanf ("%d",&a[i]);
 }
 for (int i=0;i<n;i++)
 {
     for (int j=i+1;j<n;j++)
     {
         if (a[i]==a[j])
         {
            count=a[j];
            printf ("Repeating element %d\n",count);
            
         }
         
     }
 }
}