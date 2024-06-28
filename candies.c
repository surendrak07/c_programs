#include <stdio.h>
 
int main() {
	int n,i,a;
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    scanf("%d",&a);
	    if(a%2 ==0){
            a=(a/2)-1;
            printf("%d\n",a);
        }
        else{
            printf("%d\n",a/2);
        }
	}
}