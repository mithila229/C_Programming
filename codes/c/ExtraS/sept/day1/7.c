//WAP to print 1st composite num btwn range



#include<stdio.h>
void main(){
	int start,end;
	printf("Enter starting num: ");
	scanf("%d",&start);

	printf("Enter end num: ");
	scanf("%d",&end);

	for(int i=start;i<=end;i++){
		int count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count>2){
			printf("1st composite num is %d\n",i);
			break;
		}
	}
}
