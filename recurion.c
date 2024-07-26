// 1. write a program to fing the sum of n natural numbers

// #include<stdio.h>

// int sum(int a){
//     if (a==1){
//         return 1;
//     }
//     else{
//         return a+sum(a-1);
//     }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d ",sum(n));
// }

// 2 .write a c program to print first n natural numbers using recurion

// #include<stdio.h>

// void num(int n){
//     if(n!=1){
//         num(n-1);
//     }
//     printf("%d ",n);
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     num(n);
// }


// 4. write a c program to print fibonacci series using recursion

// #include<stdio.h>

// void fib(int n,int a,int b){
//     if(n>=1){
//         printf("%d ",a);
//         return fib(n-1,b,a+b);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a=0,b=1;
//     fib(n,a,b);
// }


// 5. write a c program  to scan array elements to print using recursion
// #include<stdio.h>
// void scan(int *a,int n){
//     if(n>=0){
//         scan(a,n-1);
//         printf("%d ",a[n]);
//     }
// }
// int main(){
//     int a[5]={11,12,13,14,15};
//     scan(a,4);
// }

// 6. write a c program to fing sum of digits in a number using recursion
// #include<stdio.h>
// int sum(int n){
//     if(n>0){
//         return n%10+sum(n/10);
//     }
// }
// int main(){
//     int n=99;
//     printf("%d",sum(n));
// }

// 7. write a c program to print gcd of 2 numbers using recursion

// #include<stdio.h>
// int gcd(int a,int b,int i){
//     if(i<=b){
//         if(a%i==0 && b%i==0){
//             printf("%d",i);
//         }
//         else{
//             return gcd(a,b,i-1);
//         }
//     }
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int i=b;
//     gcd(a,b,i);
// }


// 8. write a c program to print factorial of a number using recursion

// #include<stdio.h>

// int fact(int a){
//     if (a==0){
//         return 1;
//     }
//     else{
//         return a*fact(a-1);
//     }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d ",fact(n));
// }
// 9. write a c program to print lcm of 2 numbers using recursion
// #include<stdio.h>
// int gcd(int a,int b,int i){
//     if(i<=b){
//         if(a%i==0 && b%i==0){
//             return i;
//         }
//         else{
//             return gcd(a,b,i-1);
//         }
//     }
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int i=b;
//     printf("%d",(a*b)/gcd(a,b,i));
// }