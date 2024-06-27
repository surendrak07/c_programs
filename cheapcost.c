#include <stdio.h>
int min(int h,int j){
    if (h<j){
        return h;
    }
    else{
        return j;
    }
}
int main() {
	int n,m,a,b;
	scanf("%d %d %d %d",&n,&m,&a,&b);
 
	int res=0;
     if(m*a<=b){
        res=n*a;
        }	
    else
        {
 	    res=(n/m)*b+min((n%m)*a,b);
    }
    printf("%d", res);
}