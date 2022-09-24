//harshad num between range


#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start num: ");
	scanf("%d",&start);
	printf("Enter end num: ");
	scanf("%d",&end);

	for(int i=start;i<=end;i++){
		int x=i;
		int sum=0;
		while(x>0){

			int rem=x%10;
		 	sum=sum+rem;
			x=x/10;
		}
	
		if(i%sum==0){
			printf("%d\n",i);
		}
	}
}

