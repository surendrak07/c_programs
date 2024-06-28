#include<stdio.h>
#include <stdlib.h>
int main(){
    int i;
    char username[20]="surendra";
    char password[8]="123";
    char username1[20];
    char password1[8];
    printf("enter username:\n");
    gets(username1);
    printf("enter password:\n");
    gets(password1);
    for(i=1;i<3;i++){
        if(strcmp(username,username1)==0 && strcmp(password,password1)==0)
        {
        system("cls");
        printf("login successfull");
        break;
        }
        else if(strcmp(username,username1)!=0){
            system("cls");
            printf("Invalid user name");
        }
        else if(strcmp(username,username1)==0 && strcmp(password,password1)!=0)
        {   
            system("cls");
            printf("invalid password \n");
            printf("only %d chances left\n",3-i);
            printf("enter username\n");
            gets(username1);
            printf("enter password\n");
            gets(password1);
            system("cls");
            if(i==2){    
            printf("you are blocked");
            }
        }
    }
    return 0;
}