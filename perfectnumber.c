#include<stdio.h>
int main(){
    int n,i,k=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            k=k+i;
        }
    }
        if (n==k){
            printf("yes");
        }
        else{
            printf("no");
        }
}