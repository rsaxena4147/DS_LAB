#include <stdio.h>

   void main()
   {
      int a[100], b[100], m, c[100],  n;
      printf("Enter the no. of elements of array");
      scanf("%d", &n);
      printf("Enter the array");
      for (int i = 0; i < n; i++)
      {
         scanf("%d", &a[i]);
      }
      printf("Enter the no. of elements of array2");
      scanf("%d", &m);
      printf("Enter the array");
      for (int i = 0; i < m; i++)
      {
         scanf("%d", &b[i]);
      }
      int i = 0, j = 0, k = 0;
      while (i < n && j < m)
      {
         if (a[i] < b[j])
         {
            c[k] = a[i];
            i++;
            k++;
         }
         else
         {
            c[k]=b[j];
            j++;
            k++;

         }
      }
      while (i<n)
      {
         c[k++]=a[i++];
      }
      while (j<m   )
      {
         c[k++]=b[j++];
      }
      

      printf("Array as follow :");
      for (i = 0; i < n+m; i++)
      {
         printf("%d", c[i]);
      }
   }
