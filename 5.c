//for deleting element in desired location
#include <stdio.h>
void main()
{
    int a[100], i, n,pos;
    printf("Enter the no. of elements of array");
    scanf("%d", &n);
    printf("Enter the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the postion for deleting array");
    scanf("%d",&pos);

    for (i=pos-1; i <n- 1; i++)
    {
        a[i] = a[i+1];
        
    }
    n--;
printf("Array as follow :") ;
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}