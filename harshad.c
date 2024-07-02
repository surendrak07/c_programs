#include<stdio.h>
int main(){
    int x,n,k=0;
    scanf("%d",&n);
    x=n;
    while (x>0){
    k=k+(x%10);
    x=x/10;  
    }
    if (n%k==0){
        printf("%d",k);
    }
    else{
         printf("-1");
    }
}