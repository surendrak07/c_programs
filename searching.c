// #include<stdio.h>
// int linearsearch(int a[],int size,int key){
//     int i,c=0;
//     int k[size],first,last;
//     for(i=0;i<size;i++){
//         if(a[i]==key){
//             last = i;
//             k[c]=i;
//             c++;
//             printf("%d ",i);
//         }
//         if(a[size-1-i]==key){
//             first = size-1-i;
//         }
//     }
//     printf("\ncount: %d",c);
//     printf("\n1st and last index are: %d %d\n",k[0],k[c-1]);
//     printf("1st and last index are: %d %d",first,last);

// }
// int main(){
//     int a[]={4,2,9,7,1,7,7,6,7,7,9};
//     int key=7;
//     int size=sizeof(a)/sizeof(a[0]);
//     printf("index of 7:");
//     linearsearch(a,size,key);
// }


#include<stdio.h>

int binarysearch(int a[],int size,int key){
    int s=0,l=size-1,mid,count=0,ind;
    while(s<=l){
    mid=(s+l)/2;
        if(a[mid]==key){
            ind=mid;
            break;
        }
        if(a[mid]>key){
            l=mid-1;
        }
        if(a[mid]<key){
            s=mid+1;
        }
    }
    for(int i=0;i<ind;i++){
        if(a[ind+1]==key){
            count++;
        }
        if(a[ind-i]==key){
            count++;
        }
    }
    printf("\n count : %d",count);
    printf("\nindex : %d",ind);
    
}

int main(){
    int a[]={1,2,3,4,7,7,7};
    int key=7;
    int size=sizeof(a)/sizeof(a[0]);
    binarysearch(a,size,key);
}