//1.string cpoy without strcpy().

// #include<stdio.h>

// int main(){
//     int i;
//     char s[]="surendra";
//     char c[10];
//     int size = sizeof(s)/sizeof(char);
//     for(i=0;i<size;i++){
//         c[i]=s[i];
//     }
//     printf("%s",c);
// }


//2.string concatenation without strcat().

// #include<stdio.h>

// int main(){
//     int i;
//     char s1[]="koppala";
//     char s2[]="surendra";
//     char s[20];
//     int size1 = sizeof(s1)/sizeof(char);
//     int size2 = sizeof(s2)/sizeof(char);
//     for(i=0;i<size1+size2;i++){
//         if(i<size1){
//             s[i]=s1[i];
//         }
//         else{
//             s[i]=s2[i-size1];
//         }
//         printf("%c",s[i]);
//     }
// }

//3.string compare without strcmp().

// #include<stdio.h>

// int main(){
//     int i,c=0;
//     char s1[]="surendra";
//     char s2[]="surendra";
//     int size = sizeof(s1)/sizeof(char);
//     for(i=0;i<size;i++){
//         if(s1[i]==s2[i]){
//             c=c+1;
//         }    
//     }
//     if(c==size){
//         printf("matched");
//     }
//     else{
//         printf("not matched");
//     }
// }

//4.string reverse without strrev().

#include<stdio.h>

int main(){
    char s1[]="surya";
    char s2[20];
    int i,j,size;
    size=sizeof(s1)/sizeof(char);
    for(i=size-1,j=0;i>=0;i--,j++){
        s2[j]=s1[i];
        printf("%c",s2[j]);
    }
}

//5.string palindrome without strrev()

// #include<stdio.h>

// int main(){
//     int i,j,c=0;
//     char s1[]="mom";
//     int size = sizeof(s1)/sizeof(char);
//     for(i=size-2,j=0;i>=0;i--,j++){
//         if(s1[j]!=s1[i]){
//             printf("not palindrome");
//             break;
//         }
//         else{
//             c=c+1;
//         }
//     }
//     if(c==size-1){
//         printf("palindrome");
//     }
// }

//6.Frequency of of each character in a string.

// #include<stdio.h>
// int main(){
//     int n,i,j,c,k;
//     char a[10]="hippocloud";
//     n=sizeof(a)/sizeof(char);
//     for(i=0;i<n;i++){
//         c=0;
//         k=a[i];
//         if(k!=-1){
//             for(j=0;j<n;j++){
//             if(k==a[j]){
//                 c=c+1;
//                 a[j]=-1;
//             }
//         }
//         printf("%c is occured %d times\n",k,c);
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%c",a[i]);
//     }
// }

//7.find common character in 2 strings.

//8.add last 4 digits of a number plate.

//9.remove consecutive repeated characters in a string.