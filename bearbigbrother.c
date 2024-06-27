#include <stdio.h>
 
int main() {
	int l,b;
	int i=0;
	scanf("%d %d",&l,&b);
	while(l<=b){
	    l=l*3;
	    b=b*2;
	    i=i+1;
	}
    printf("%d",i);
}