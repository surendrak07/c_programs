#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int o,a,b;
    while(1){
        printf("enter 1 to addition\n");
        printf("enter 2 to subtraction\n");
        printf("enter 3 to multiplication\n");
        printf("enter 4 to division\n");
        printf("enter 5 to squareroot\n");
        printf("enter 6 to cuberoot\n");
        printf("enter 7 to power\n");
        printf("enter 0 to exit\n");
        scanf("%d",&o);
        
        switch(o){
            case 0:
            system("cls");
            return 0;
            break;

            case 1:
            system("cls");
            scanf("%d %d",&a,&b);
            printf("%d\n",a+b);
            break;

            case 2:
            system("cls");
            scanf("%d %d",&a,&b);
            printf("%d\n",a-b);
            break;

            case 3:
            system("cls");
            scanf("%d %d",&a,&b);
            printf("%d\n",a*b);
            break;

            case 4:
            system("cls");
            scanf("%d %d",&a,&b);
            printf("%d\n",a/b);
            break;

            case 5:
            system("cls");
            scanf("%d",&a);
            printf("%f\n",sqrt(a));
            break;

            case 6:
            system("cls");
            scanf("%d",&a);
            printf("%f\n",cbrt(a));
            break;

            case 7:
            system("cls");
            scanf("%d %d",&a,&b);
            printf("%f\n",pow(a,b));
            break;
        }
    }
}