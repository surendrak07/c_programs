#include<stdio.h>
 
int main(){
    int n,i,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if (a%b==0){
            printf("%d\n",a%b);
        }
        else if(a>b){
            printf("%d\n",b-a%b);
        }
        else{
            printf("%d\n",b-a);
        }
    }
}