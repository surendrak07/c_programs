#include<stdio.h>
 
int main(){
    int i,a,b,c,d,n=0;
    char s[100000];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='1'){
            n=n+a;
        }
        else if(s[i]=='2'){
            n=n+b;
        }
        else if(s[i]=='3'){
            n=n+c;
        }
        else if(s[i]=='4'){
            n=n+d;
        }
    }
    printf("%d",n);
}