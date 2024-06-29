#include<stdio.h>

int main(){
    int a;
    printf("enter marks:");
    scanf("%d",&a);
    a=a/10;
    switch(a){
        case 10:
        printf("A");
        break;
        case 9:
        printf("A");
        break;
        case 8:
        printf("B");
        break;
        case 7:
        printf("C");
        break;
        case 6:
        printf("D");
        break;
        default:
        printf("F");
        break;
    }
}