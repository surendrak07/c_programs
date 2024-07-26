// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n=25;
//     int k,i=n;
//     k=n*n;
//     int c=0;
//     while(n){
//         n=n/10;
//         c++;
//     }
//     int d=pow(10,c);
//     if(i==k%d){
//         printf("hi");
//     }

// }

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    while(n){
        c=(c*10)+(n%10);
        n=n/10;
    }
    printf("%d",c);
}