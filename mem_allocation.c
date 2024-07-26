// static variable can be updated in a function
// #include<stdio.h>
// void fun(){
//     int x=0;
//     static int y=0;
//     x++;y++;
//     printf("%d %d",x,y);
// }
// int main(){
//     fun();
//     fun();
//     fun();
// }

// #include<stdio.h>

// int main(){
//     static int i;
//     int j;
//     for(j=0;j<10;j++){
//         i+=2;
//         i-=j;
//         printf("%d\n",i);
//     }
// }


#include<stdio.h>
struct exp{
    
    int n;
    char a2;
    float f;
    char c;
    double d;
    int n1;

};
int main(){
    printf("%d",sizeof(struct exp));
}