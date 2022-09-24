#include<stdio.h>
void main(){
	int size;
	int arr[size];

	printf("Enter size of array: ");
	scanf("%d",&size);

	printf("Enter elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int search;
	printf("search element:\n");
	scanf("%d",&search);

        int flag=0;
	for(int i=0;i<size;i++){
		if(search==arr[i]){
			flag=1;
		}
	}
	if(flag==1){
		printf("found\n");
	}
	else{
		printf("not found\n");
	}
}

