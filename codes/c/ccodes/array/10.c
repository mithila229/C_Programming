#include<stdio.h>
void main(){
	int size;
	int arr[size];

	printf("Enter size: ");
	scanf("%d",&size);

	printf("Enter elements: ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("number divisible by 4 &5 are: ");
	int flag=0;

	for(int i=0;i<size;i++){
		if(arr[i]%4==0 && arr[i]%5==0){
			flag=1;
			
		}
	}
	if(flag==1){
		printf("found\n");
	}else{
		printf("not found\n ");
	}
}

