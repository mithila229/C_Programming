//rel btwn array and pointer



#include<stdio.h>
void main(){
	int size;
	printf("Enter size of arry: ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
		printf("%d\n",*(arr+i));
	}
}
