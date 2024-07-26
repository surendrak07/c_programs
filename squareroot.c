// square root
#include<stdio.h>
int main(){
    int n,i,a;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(i*i<=n){
            a=i;
        }
        else{
            break;
        }
    }
    printf("%d",a);
}