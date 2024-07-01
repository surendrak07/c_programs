#include<stdio.h>
int xor(int a){
    return ((a%4==0)?a:(a%4==1)?1:(a%4==2)?a+1:0);
}
int main(){
    int p,q,l,r;
    scanf("%d %d",&l,&r);
    p=xor(r);
    q=xor(l-1);
    printf("%d",p^q);
}