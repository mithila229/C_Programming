//WAP to print even in reverse order and odd in std way 
//i/p= sart-2
//end=9
//o/p= 8 6 4 2
//     3 5 7 9




#include<stdio.h>
void main(){
	int x,y;
	

	printf("Enter start: ");
	scanf("%d",&x);

	printf("Enter end: ");
	scanf("%d",&y);
        
	for(int i=y; i>=x; i--){
		if(i%2==0){
			
			printf("%d ",i);
			i--;
		}
	}
	printf("\n");
	for(int i=x; i<=y; i++){
		if(i%2!=0){
			printf("%d ",i);
			i++;
		}
	}
}
	




                                       
	
