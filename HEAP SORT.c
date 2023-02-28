#include<stdio.h>

heapify(int *arr,int i,int n){
	int min=i;
	int left=2*i+1;
	int right=left+1;
	
	if(n>left && arr[min]>arr[left])	//if left child lower than the root
		min=left;

	if(n>right && arr[min]>arr[right]) //if right child lower than the root
		min=right;
		
	if(min !=i){			//if min is not root
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		heapify(arr,min,n); //recursively heapify the affected sub-tree
	}		
}

heapsort(int *arr,int n){
	int i;
	for(i=n/2-1;i>=0;i--){
		heapify(arr,i,n);   //create min heap
	}
	for(i=n-1;i>=0;i--){
		int temp=arr[0];   	//swap first and last node
		arr[0]=arr[i];
		arr[i]=temp;
		heapify(arr,0,i); 	//creates min heap on reduced array
	}
}

int main(){
	int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n=6;
	heapsort(arr,n);
	int i;
	for(i=0;i<6;i++){
		printf("%d ",arr[i]); 	
	}
}
