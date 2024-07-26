#include<stdio.h>

int main(){
    int a,b,c,d,max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        max=a;
    }
    else if(b>c && b>d){
        max=b;
    }
    else if(c>d){
        max=c;
    }
    else{
        max=d;
    }
    printf("%d",max);
}