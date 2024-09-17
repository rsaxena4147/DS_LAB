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
 //transpose
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf ("Transpose is \n ");
      for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("%d\t",b[i][j]);
        }
        printf ("\n");
    }
    
    
}