//WAP to print num is composite or not



#include<stdio.h>
void main(){
	int x;
	printf("Enter num of rows: ");
	scanf("%d",&x);

	int count=0;
	for(int i=1;i<=x;i++){
		if(x%i==0){
			count++;
		}
	}
	if(count>2){
		printf("%d is composite num\n ",x);
	}else{
		printf("%d is not composite num\n",x);
	}
}




