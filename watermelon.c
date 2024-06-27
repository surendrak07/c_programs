#include<stdio.h>
 
int main(){
    int a;
    scanf("%d",&a);
    if (a==2){
        printf("NO");
    }
    else if (a&1){
        printf("NO");
    }
    else{
    printf("YES");
    }
    return 0;
}
