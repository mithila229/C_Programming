//WAP to print table of number


#include<stdio.h>
void main(){
	int num;
	printf("Enter any num: ");
	scanf("%d",&num);
        
	int i=1;
	while(i<=10){
		printf("%d * %d = %d\n", num,i, num*i);
	        i++;
	}
}
