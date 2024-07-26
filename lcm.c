#include<stdio.h>

int main(){
    int a=2,b=5,i,c=0,d=0,l=0;
    for(i=1;i<b+1;i++){
        c=a*i;
        d=b*i;
        if(c%b==0){
            l=c;
            break;
        }
        if(d%a==0){
            l=d;
            break;
        }    
    }
    printf("%d ",l);
}