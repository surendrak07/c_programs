#include<stdio.h>
#include <stdlib.h>
int main(){
    int a,amount,withdraw,balance=1000;
    while(1){
        printf("Enter 1 for check balance\n");
        printf("Enter 2 for deposit\n");
        printf("Enter 3 for withdraw\n");
        printf("Enter 4 for exit\n");
        printf("Enter option(1/2/3/4):");
        scanf("%d",&a);
        system("cls");
        switch(a){
        case 1:
        printf("%d\n",balance);
        break;
        case 2:
        printf("enter deposit amount:");
        scanf("%d",&amount);
        printf("deposited successfully\n");
        balance=balance+amount;
        printf("balance is %d\n",balance);
        break;
        case 3:
        printf("enter withdrawl amount:");
        scanf("%d",&withdraw);
        if(withdraw>balance){
            printf("insufficient balance\n");
        }
        else{
            balance=balance-withdraw;
            printf("withdrawl successfully\n");
            printf("withdrawl amount %d\n",withdraw);
            printf("balance is %d\n",balance);
        }
        break;
        case 4:
        printf("exited");
        return 0;
        break;
    }
    }
    
}