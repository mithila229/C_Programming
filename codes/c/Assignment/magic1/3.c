//WAP to print all composit num betwn range


#include<stdio.h>
void main(){
	int start,end,count=0;
	printf("Enter start: ");
	scanf("%d",&start);
	printf("Enter end: ");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
		for(int j=1;j<=end;j++){
			if(i%j==0){
				count=count+1;
			}
			if(count>2){
				printf("%d ",i);
			
			}
		}
		
	}
}

