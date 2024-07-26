// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// #include<stdio.h>
// int main(){
//     int i,j,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(j<=i){
//                 printf("%d ",i);
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


// #include<stdio.h>
// int main(){
//     int i,j,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){

//             if(j<=i){
//                 printf("%d ",j);
//             }
//             else{
//                 printf("  ");
//             }

//         }
//         printf("\n");
//     }
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


// #include<stdio.h>
// int main(){
//     int i,j,n,k=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){

//             if(j<=i){
//                 printf("%d ",k);
//                 k++;
//             }
//             else{
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
// }



//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

// #include<stdio.h>

// int main(){
//     int i,j,k,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(j>n-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         } 
//         for(j=1;j<=n;j++){
//             if(j<i){
//             printf("*");
//             }
//         }
//         printf("\n");
//     }
//     for(i=n-1;i>=1;i--){
//         for(k=1;k<=n;k++){
//             if(k>n-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         for(k=1;k<=n;k++){
//             if(k<i){
//             printf("*");
//             }
//         } 
//         printf("\n");
//     }
// }


//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// #include<stdio.h>

// int main(){
//     int i,j,k,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(j>n-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         } 
//         for(j=1;j<=n;j++){
//             if(j<i){
//             printf("*");
//             }
//         }
//         printf("\n");
//     }
//     for(i=n;i>=1;i--){
//         for(k=1;k<=n;k++){
//             if(k>n-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         for(k=1;k<=n;k++){
//             if(k<i){
//             printf("*");
//             }
//         } 
//         printf("\n");
//     }
// }

//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *


// #include<stdio.h>

// int main(){
//     int i,j,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){

//         for(j=1;j<=n;j++){

//             if(i+j==n+1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }

//         } 
//         for(j=2;j<=n;j++){

//             if(j-i==0){
//             printf("*");
//             }
//             else{
//                 printf(" ");
//             }

//         }
//         printf("\n");
//     }
//     for(i=2;i<=n;i++){
//         for(j=1;j<=n;j++){

//             if(j-i==0){
//             printf("*");
//             }
//             else{
//                 printf(" ");
//             }

//         }

//         for(j=2;j<=n;j++){

//             if(i+j==n+1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }

//         } 
//         printf("\n");
//     }
    
// }

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                printf("%d",n);
            }
        }
        printf("\n");
    }
}