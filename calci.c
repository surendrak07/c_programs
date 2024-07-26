#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int a,b;
    char o;
    scanf("%d %d",&a,&b);
    while(1){
        printf("enter + to addition\n");
        printf("enter - to subtraction\n");
        printf("enter * to multiplication\n");
        printf("enter / to division\n");
        scanf(" %c",&o);
        switch(o){
            case 0:
            system("cls");
            return 0;
            break;

            case '+' :
            system("cls");
            printf("%d\n",a+b);
            
            break;

            case '-':
            system("cls");
            printf("%d\n",a-b);
            break;

            case '*':
            system("cls");
            printf("%d\n",a*b);
            break;

            case '/':
            system("cls");
            printf("%d\n",a/b);
            break;
           
        }
    }
}