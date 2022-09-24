// WAP to print dum of nums that are not divisible by 3 up to given num 
// i/p=10
// o/p= sum of nums not divisible by 3 is 37



#include<stdio.h>
void main(){
	int num;
        int sum=0;

	printf("Enter input: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(i%3!=0){
			sum=sum+i;
		}
	}
	printf("sum of numbers not divisible by 3 is %d\n",sum);
}


