#include<stdio.h>
 
int main(){
    int n,i,j,s,t=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&s);
        while(t<s){
            if (j%3!=0 && j%10!=3)
            {
                t=t+1;
            }
            j=j+1;
        }
        printf("%d\n",j-1);
        j=1;
        t=0;
        }
        
}