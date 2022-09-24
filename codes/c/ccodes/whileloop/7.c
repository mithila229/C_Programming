//WAP to print char is vowel or consonant from A to Z. Take lower and upper bound from user



#include<stdio.h>
void main(){
	char x,y;
	printf("Enter Lower bound: ");
	scanf("%c",&x);

	printf("Enter upper bound: ");
	scanf(" %c",&y);

	while(x<=y){
		if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
			printf("%c is vowel\n",x);
			x++;
		}else{
			printf("%c is consonant\n",x);
			x++;
		}
	}
}
