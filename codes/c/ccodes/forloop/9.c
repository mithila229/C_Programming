//WAP to find count of numbers which are divided by 5 from given range 



#include<stdio.h>
void main(){
	int x,y;
	int count =0;

	printf("Enter start number: ");
	scanf("%d",&x);

	printf("Enter end number: ");
	scanf("%d",&y);

	for(int i=x; i<=y; i++){
		if(i%5==0 && i>0){
			count=count+1;
		}
	}
	printf("count is %d",count);
}





