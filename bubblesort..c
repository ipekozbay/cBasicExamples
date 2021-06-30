#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void bubblesort(int arr[],int size){
	int i,j;
	
	for(i=0;i<size;i++){
		
		for(j=1;j<size-i;j++){
			
			if(arr[j-1]> arr[j]){
				int temp =arr[j];
				arr[j]=arr[j-1];
				arr[j-1]= temp;
			}
			
		}
	}
}

int main() {
	
	int array[MAX],size,a;
	
	printf("enter array size ");
	scanf("%d",&size);
	
	 for(a=0;a<size;a++){
	 	printf("%d: ",a+1);
     	scanf("%d",&array[a]);
	 }	
	
   bubblesort(array,size);
		
	 for(a=0;a<size;a++){
     	printf("%d ",array[a]);
	 }	
	
	return 0;
}
