// 1.write a c program to find the no.of occurances of 2nd input in 1st input.
// sample input:19998
// i/p : 9
// o/p: 3


// 2  write a c program to prime numbers with in a range dividing witha comma(,).
// sample i/p: 1-10
// o/p 2,3,5,7

// 3.write a c program to sort the given elements in ascending order.

// 4.write a c program to sort the eiven elements in ascending order and print the alternate numbers
// i/p:

// 5.write a c program to sort 1st half in asc order and 2nd half in des order

// 6.write a c program to add 2 matrices.

// 7.write a c program to find the co-ordinates of the element in a 2D array and print element not found if the element is not there.
// i/p: 1 2
//      3 4
// 3
// o/p:(2,1)

// 8.write a c program to take n no.of elements and n no.of array elements and print the no.of occurances of each element
// i/p: 1 1 4 3
// o/p: 1-2
//      4-1
//      3-1

// 1
// #include<stdio.h>

// int main(){
//     int a,b,k,c=0;
//     scanf("%d\n%d",&a,&b);

//     while(a){
//         k=a%10;
//         a=a/10;
//         if(k==b){
//             c=c+1;
//         }
//     }
//     printf("%d",c);
// }

//2
// #include<stdio.h>

// int main(){
//     int a,n,k,i,j,p=0;
//     scanf("%d-%d",&a,&n);
//     for(i=a;i<=n;i++){
//         k=0;
//         for(j=1;j<= i/2 ;j++){
//             if(i%j==0){
//                 k=k+1;
//             }
//         }
//         if(k==1 && p==0){
//             printf("%d",i);
//             p=1;
//             }
//         else if(k==1 && p==1){
//             printf(",%d",i);
//             }
//         }
// }

//3

// #include<stdio.h>

// int main(){
//     int n,i,j,t;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//             t=a[i];
//             a[i]=a[j];
//             a[j]=t;
//         }
//         }
//         printf("%d ",a[i]);
//     }
// }

//4
// #include<stdio.h>

// int main(){
//     int n,i,j,t;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//             t=a[i];
//             a[i]=a[j];
//             a[j]=t;
//         }
//         }
//         if(i%2==0){
//             printf("%d ",a[i]);
//         }
//     }
// }

//5
// #include<stdio.h>

// int main(){
//     int n,i,j,t;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
    
//     for(i=0;i<n/2;i++){
//         for(j=i+1;j<n/2;j++){
//             if(a[i]>a[j]){
//             t=a[i];
//             a[i]=a[j];
//             a[j]=t;
//         }
//         }
//         printf("%d ",a[i]);
//     }
//     for(i=n/2;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(a[i]<a[j]){
//             t=a[i];
//             a[i]=a[j];
//             a[j]=t;
//         }
//         }
//         printf("%d ",a[i]);
//     }
    
// }

//6

// #include<stdio.h>

// int main(){
//     int m,n,i,j;
//     printf("numbrer of rows and columns:");
//     scanf("%d %d",&m,&n);
//     int a[m][n],b[m][n],c[m][n];
//     printf("enter 1st matrix elements: ");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter 2nd matrix elements: ");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("sum of the matrices:\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             c[i][j]=a[i][j]+b[i][j];
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }

// }

//7

// #include<stdio.h>

// int main(){
//     int m,n,i,j,k,c=0;
//     printf("numbrer of rows and columns:");
//     scanf("%d %d",&m,&n);
//     int a[m][n];
//     printf("enter elements: ");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter search element:");
//     scanf("%d",&k);
//     printf("position is ");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             if(a[i][j]==k){
//                 printf("%d %d",i,j);
//                 c=c+1;
//             }
//         }
//     }
//     if(c==0) printf("not found");
// }

//8
#include<stdio.h>
int main(){
    int n,i,j,c,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c=0;
        k=a[i];
        if(k!=-1){
            for(j=0;j<n;j++){
            if(k==a[j]){
                c=c+1;
                a[j]=-1;
            }
        }
        printf("%d is occured %d times\n",k,c);
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}