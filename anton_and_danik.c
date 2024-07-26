#include<stdio.h>

int main(){
    int i,n,c=0;
    scanf("%d",&n);
    char s[n];
    for(i=0;i<=n;i++){
        scanf("%c",&s[i]);
        if(s[i]=='A'){
            c++;
        }
    }
    if(c==n-c){
        printf("Friendship");
    }
    if(c>n-c){
        printf("Anton");
    }
    if(c<n-c){
        printf("Danik");
    }
}