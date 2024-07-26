#include<stdio.h>
int main(){
    int a,i,j,c=0;
    scanf("%d",&a);
    for(i=2;i<=a;i++){
        for(j=1;j<=i/2;j++){
                if(i%j==0){
                    c++;
                }
                
            }
        if(c==1){
        printf("%d\n",i);
        }
        c=0;
    }
}