//WAP to print perfect num between range


#include<stdio.h>
void main(){
	int start,end;
	printf("Enter starting num: ");
	scanf("%d",&start);
	printf("Enter ending num: ");
	scanf("%d",&end);
 	
	for(int i=start; i<=end;i++){
		int sum=0;
		
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum=sum+j;
			}
		}
		if(sum==i){
			printf("%d ",i);
		}
	}
}
