#include<stdio.h>
void main ()
{
    int a[100][100],b[100][100],c[100][100],m,n,p;
    printf ("Enter the order of matrix");
    scanf ("%d%d",&n,&m);
    printf ("Enter matrix");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++) 
        {
        scanf ("%d",&a[i][j]);
        }
    }
    printf ("Enter the order of matrix");
    scanf ("%d%d",&m,&p);
    printf ("Enter matrix");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<p;j++) 
        {
        scanf ("%d",&b[i][j]);
        }
    }
    //multiplication 
     for (int i=0;i<n;i++)
    {
        for (int j=0;j<p;j++) 
        {
          c[i][j]=0;
         for (int k=0;k<m;k++)
         {
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
         }
        }
    

    
    
    }
    printf ("Multiplication is \n");
 for (int i=0;i<n;i++)
    {
        for (int j=0;j<p;j++) 
        {
            printf ("%d\t",c[i][j]);

        }
        printf ("\n");
    }        
}