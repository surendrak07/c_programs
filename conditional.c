// checking eligibility for admission.
// #include<stdio.h>

// int main(){
//     int m,p,c;
//     scanf("%d %d %d",&m,&p,&c);
//     if(m>=65 && p>=55 && c>=50){
//         if(m+p+c>=190 || m+p>=140){
//             printf("The candidate is eligible for admission");
//         }
//         else{
//             printf("The candidate is not eligible for admission");
//         }
//     }
//     else{
//         printf("The candidate is not eligible for admission");
//     }
// }

//result declaration
// #include<stdio.h>

// int main(){
//     int r,p,c,comp,t;
//     printf("Roll no : ");
//     scanf("%d",&r);
//     printf("Name of student : ");
//     char n[15];
//     scanf(" %s",n);
//     printf("Marks in physics : ");
//     scanf("%d",&p);
//     printf("Marks in chemistry : ");
//     scanf("%d",&c);
//     printf("Marks in computer application : ");
//     scanf("%d",&comp);
//     t=(p+c+comp)/3;
//     if(t>=70) printf("A");
//     else if(t<70 && t>=60) printf("B");
//     else{
//         printf("Fail");
//     }
// }    

// print cubes upto n

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         printf("%d %0.0f %d\n",i,pow(i,i),i*i*i);
//     }
// }

// 1 power 1,2 power 2,....
// #include<stdio.h>
// int power(int n){
//     int i,r=1;
//     for(i=0;i<n;i++){
//         r=r*n;
//     }
//     return r;
// }
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         printf("%d\n",power(i));
//     }
// }

// factorial

// #include<stdio.h>

// int main(){
//     int n,i,r=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         r*=i;
//         printf("%d\n",r);
//     }
// }

//sum of n odd num;
// #include<stdio.h>

// int main(){
//     int n,i;
//     scanf("%d",&n);
//     printf("first %d odd numbers are:",n);
//     for(i=1;i<2*n;i=i+2){
//         printf("%d ",i);
//     }
//     printf("\nsum of %d odd numbers is %d",n,n*n);
// }

//sum of even cubes

// #include<stdio.h>

// int main(){
//     int n,i=2,k=0;
//     scanf("%d",&n);
//     while(i<=n){
//         k=k+(i*i*i);
//         i=i+2;
//     }
//     printf("%d",k);
// }

