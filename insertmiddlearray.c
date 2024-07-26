#include<stdio.h>

int main(){
    int m,i,n,x;
    printf("enter size of array:");
    scanf("%d",&m);
    printf("enter position:");
    scanf("%d",&n);
    printf("enter number to insert:");
    scanf("%d",&x);
    printf("enter numbers:");
    int a[m];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        printf("%d ",a[i]);
    }
    for(i=m+1;i>n;i--){
        a[i]=a[i-1];
    }
    a[n-1]=x;
    printf("\n");
    for(i=0;i<m+1;i++){
        printf("%d ",a[i]);
    }
}