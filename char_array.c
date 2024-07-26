// 1.Reversing a string
// #include<stdio.h>

// int main(){
//     int n,i;
//     scanf("%d",&n);
//     char c[n];
//     for(i=0;i<n;i++){
//         scanf(" %c",&c[i]);
//     }
//     for(i=n;i>=0;i--){
//         printf("%c",c[i]);
//     }
// }

// 2.Remove consonants from the string

// #include<stdio.h>

// int main(){
//     int n,i;
//     scanf("%d",&n);
//     char a[n];
//     for(i=0;i<n;i++){
//         scanf(" %c",&a[i]);
//         if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') printf("%c",a[i]);
//     }
// }

// 3.remove vowels and print consonats

// #include<stdio.h>

// int main(){
//     int n,i;
//     scanf("%d",&n);
//     char a[n];
//     for(i=0;i<n;i++){
//         scanf(" %c",&a[i]);
//         if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U') printf("%c",a[i]);
//     }
// }


// 4. check for the character is lowercase/uppercase/specialcharacter/digit

// #include<stdio.h>

// int main(){
//     char c;
//     scanf("%c",&c);
//     if(c>='0' && c<='9'){
//         printf("digit");
//     }
//     else if(c<='Z' && c>='A'){
//         printf("Uppercase");
//     }
//     else if(c<='z' && c>='a'){
//         printf("Lowercase");
//     }
//     else{
//         printf("Special Character");
//     }
// }

// 5.convert lowercase letters to uppercase and if any character print not an alphabet

// #include<stdio.h>

// int main(){
//     char c;
//     scanf("%c",&c);
//     if(c<='Z' && c>='A'){
//         printf("%c",c+32);
//     }
//     else if(c<='z' && c>='a'){
//         printf("%c",c-32);
//     }
//     else{
//         printf("Not an alphabet");
//     }
// }

// 6.to change the given str in lowercase

// #include<stdio.h>

// int main(){
//     int i,n;
//     scanf("%d",&n);
//     char c[n];
//     for(i=0;i<n;i++){
//         scanf(" %c",&c[i]);
//         if(c[i]<='Z' && c[i]>='A')
//         {
//         printf("%c",c[i]+32);
//         }
//     }   
// }

// 7.count no.of words and spaces in a string and char also
// #include<stdio.h>
// int main(){
//     int i,s=0,ch=0,w=0;
//     char c[100];
//     scanf("%[^\n]",c);
//     for(i=0;c[i]!='\0';i++)
//     {
//         if(c[i]==' ' && c[i+1]!='\0'){
//             s=s+1;
//         }    
//         ch=ch+1;
//     }
//     w=s+1;
//     printf("spaces:%d\ncharacters:%d\nwords:%d",s,ch,w);
// }

// 8.to eliminate first char of a str

// #include<stdio.h>

// int main(){
//     int i;
//     char c[100];
//     scanf("%[^\n]",c);
//     for(i=1;c[i]!='\0';i++){
//         if (c[i]==' '){
//             i++;
//             printf(" ");
//         }
//         else{
//             printf("%c",c[i]);
//         }
//     }
// }

// 9.to removing spaces in a string

// #include<stdio.h>

// int main(){
//     int i;
//     char c[100];
//     scanf("%[^\n]",c);
//     for(i=0;c[i]!='\0';i++){
//         if (c[i]==' '){
//             continue;
//         }
//         else{
//             printf("%c",c[i]);
//         }
//     }
// }
