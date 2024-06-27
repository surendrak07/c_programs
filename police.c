#include<stdio.h>

int main(){
    int n=0,i,a,uc=0,rec=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a>0){
            rec=rec+a;
        }
        else{
            if(rec>0){
                rec=rec-1;
            }
            else{
                uc=uc+1;
            }
        }
        
    }
    printf("%d",uc);
}