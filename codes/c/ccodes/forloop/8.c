#include<stdio.h>
void main(){
	char x,y;
	printf("Enter starting of char: ");
	scanf("%c",&x);
	printf("Enter ending of char: ");
	scanf("%c",&y);
	for(int i=x ; i<=y; i++){
		printf("%c",i);
	}
}
