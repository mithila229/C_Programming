#include <stdio.h>
void main(){
	int x,y;
	printf("enter starting number: \n ");
	scanf("%d",&x);
	printf("Enter ending number: \n");
	scanf("%d",&y);
	for (int i=x;i<=y;i++){
		if(i%2==1){
			printf("%d=%d\n",i,i*i);
		}
	}
}
	
