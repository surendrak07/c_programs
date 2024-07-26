#include<stdio.h>

int main(){
    int i,a[10],max=0,max2=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++){
        if(a[i]>max){
            max2=max;
            max=a[i];
        } 
        else if(a[i]<=max && max2<a[i]){
            max2=a[i];
        }
    
    }
    printf("%d\n",max);
    printf("%d\n",max2);
}