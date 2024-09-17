#include<stdio.h>

int main() {
    int n, m;
    int a[100], b[100], c[200]; 
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<n;i++){
        int present=0;
        for(int j=0;j<m;j++){
            
            if(a[i]==b[j]){
                present=1;
                break;
            }
        }
        if(present==0){
            printf ("%d\t",a[i]);
            
        }
    }
    
    
}