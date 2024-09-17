#include<stdio.h>
void main ()
{
    int a[100][100],b[100][100],c[100][100],i,m,j,n;
    printf ("enter the size of matrix n*m");
    scanf ("%d%d",&n,&m);
    printf ("Enter the matrix a :");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("Enter the matrix b :");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf ("%d",&b[i][j]);
        }
    }
    //adding two matrix
   
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
   
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf ("%d\t",c[i][j]);
        
    }
    printf ("\n");
}
}