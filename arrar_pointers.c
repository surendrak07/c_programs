#include<stdio.h>

int main(){
    int a=10;
    int *b=&a;
    int *c=&b;
    printf("%d %d %d\n",a,*b,*c);
    printf("%p %p %p",&a,b,c);
}

// int area_circle(int n){
//     return (22*n*n)/7;
// }
// #include<stdio.h>

// int main(){
//     int i;
//     int a[]={7,14,21,28,35};
//     int b[*(&a+1)-a];
//     for(i=0;i<*(&a+1)-a;i++){
//         b[i]=area_circle(*a+i);
//     }
//     for(i=0;i<*(&a+1)-a;i++){
//         printf("%d ",*(b+i));
//     }
// }