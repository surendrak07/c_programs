// swap 2 numbers using pointers
// #include<stdio.h>
// int swap(int *a,int *b){
//     int c;
//     c=*a;
//     *a=*b;
//     *b=c;
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     swap(&a,&b);
//     printf("%d %d",a,b);
// }


//add of 2 matrices using pointers
// #include<stdio.h>

// int main(){
//     int i,j;
//     int a[2][2]={{1,2},{1,2}};
//     int b[2][2]={{1,2},{1,2}};
//     int c[2][2];
//     int *p1 = &a;
//     int *p2 = &b;
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             c[i][j]=(*p1+j)+(*p2+j);
//             printf("%d ",c[i][j]);
//         }
//     }
// }

//or
// #include<stdio.h>

// int main(){
//     int i,j;
//     int a[2][2]={{1,2},{1,2}};
//     int b[2][2]={{1,2},{1,2}};
//     int c[2][2];
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             c[i][j]=*(*(a+i)+j)+*(*(b+i)+j);
//             printf("%d ",c[i][j]);
//         }
//     }
// }

//largest among 2 numbers using pointers

// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int *p1,*p2;
//     p1=&a;
//     p2=&b;
//     if(*p1>*p2){
//         printf("%d",*p1);
//     }
//     else{
//         printf("%d",*p2);
//     }
// }

//palindrome

// #include<stdio.h>

// int main(){
//     int p=121;
//     int rev=0,k,n=p;
//     while(n){
//         k=n%10;
//         rev=rev*10+k;
//         n=n/10;
//     }
//     if(p==rev){
//         printf("palindrome");
//     }
// }

//fibonacci
// #include<stdio.h>
// int main(){
//     int i,temp=0,a=0,b=1;
//     int n=5;
//     for(i=0;i<n;i++){
//         if(i==0){
//             printf("%d ",a);
//         }
//         else if(i==1){
//             printf("%d ",b);
//         }
//         else{
//             temp=a+b;
//             a=b;
//             b=temp;
//             printf("%d ",temp);
//         }
//     }
// }

// function pointer
#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int main(){
    int k;
    int (*p)(int,int)=&add;
    k=p(2,3);
    printf("%d",k);
}