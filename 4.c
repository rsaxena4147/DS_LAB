// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,a[100],temp;
    printf ("size of array");
    scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (int i=1;i<=n-1;i++)
    {
        temp=a[i-1];
        a[i-1]=a[n-i];
        a[n-i]=temp;
        if (a[i-1]==a[n-i])
        {
            break;
        }
        
    }
    for (int i=0;i<n;i++)
    {
        printf ("%d",a[i]);
    }

    return 0;
}