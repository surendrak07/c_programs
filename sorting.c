// bubble sort

// #include<stdio.h>

// int main(){
//     int a[5]={2,4,5,6,1};
//     int i,j,n=5,temp;
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
            
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }


//selection sort


// #include<stdio.h>

// int main(){
//     int a[5]={2,4,5,6,1};
//     int min_i,i,j,n=5,temp;
//     for(i=0;i<n-1;i++){
//         min_i=i;
//         for(j=i+1;j<n;j++){
//             if(a[j]<a[min_i]){
//                 temp=a[j];
//                 a[j]=a[min_i];
//                 a[min_i]=temp;
//                 min_i=j;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }


// insertion sort

// #include<stdio.h>

// int main(){
//     int a[5]={2,4,5,6,1};
//     int i,j,n=5,key;

//     for(i=0;i<n-1;i++){
//         key=a[i+1];
//         j=i;
//         while(j>=0 && a[j]>key){
//             a[j+1]=a[j];
//             j=j-1;
//         }
//         a[j+1]=key;
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }

//merge sort

// #include <stdio.h> 
// #include <stdlib.h> 
 
// void merge(int arr[], int l, int m, int r) 
// { 
// 	int i, j, k; 
// 	int n1 = m - l + 1; 
// 	int n2 = r - m; 

// 	int L[n1], R[n2]; 


// 	for (i = 0; i < n1; i++) 
// 		L[i] = arr[l + i]; 
// 	for (j = 0; j < n2; j++) 
// 		R[j] = arr[m + 1 + j]; 


// 	i = 0; 
// 	j = 0; 
// 	k = l; 
// 	while (i < n1 && j < n2) { 
// 		if (L[i] <= R[j]) { 
// 			arr[k] = L[i]; 
// 			i++; 
// 		} 
// 		else { 
// 			arr[k] = R[j]; 
// 			j++; 
// 		} 
// 		k++; 
// 	} 

// 	while (i < n1) { 
// 		arr[k] = L[i]; 
// 		i++; 
// 		k++; 
// 	} 

// 	while (j < n2) { 
// 		arr[k] = R[j]; 
// 		j++; 
// 		k++; 
// 	} 
// } 

// void mergeSort(int arr[], int l, int r) 
// { 
// 	if (l < r) { 
// 		int m = l + (r - l) / 2; 

// 		mergeSort(arr, l, m); 
// 		mergeSort(arr, m + 1, r); 

// 		merge(arr, l, m, r); 
// 	} 
// } 

// void printArray(int A[], int size) 
// { 
// 	int i; 
// 	for (i = 0; i < size; i++) 
// 		printf("%d ", A[i]); 
// 	printf("\n"); 
// } 
// int main() 
// { 
// 	int arr[] = {2,4,5,6,1}; 
// 	int arr_size = sizeof(arr) / sizeof(arr[0]); 


// 	mergeSort(arr, 0, arr_size - 1); 

// 	printf("\nSorted array is \n"); 
// 	printArray(arr, arr_size); 
// 	return 0; 
// }


// #include<stdio.h>

// int main()
// {
//     int a[]={1,0,0,1,0,1,1,0};
    
//     for(i=0;i<n;i++){

//     }
// }



