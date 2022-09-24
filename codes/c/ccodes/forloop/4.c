#include <stdio.h>
void main(){
	int add=0;
	int i;
	for(i=1 ; i<=5 ; i++){

		printf("Enter subject %d marks",i);
		scanf("%d",&i);
		add=add+i;
	}

	printf("addition is: %d\n",add);
}
