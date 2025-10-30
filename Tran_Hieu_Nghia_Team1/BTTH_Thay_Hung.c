#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nNum,sum,choice;
	printf("===== PROGRAM MENU =====\n");
	printf("1. Calculate the sum of numbers from 1 to n\n");
	printf("2. Calculate the sum of even numbers from 1 to n\n");
	printf("3. Calculate the factorial of n\n");
	printf("4. Check if a number is prime\n");
	printf("5. Check if a number is a palindrome\n");
	printf("6. Exit\n");
	printf("=========================\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	do{
	switch (choice){
		case 1:
			printf("Enter n: ");
			scanf("%d",&nNum);
			for(int i=1;i<=nNum;i++){
				sum+=i;
			}
			printf("S = %d\n",sum);
			break;
		case 2:
			printf("Enter n: ");
			scanf("%d",&nNum);
			for(int i=1;i<=nNum;i++){
				if(nNum%2==0){
					sum+=i;
				}
				
			}
			printf("S = %d",sum);
			break;	
	}
			
			
			
			
	
	}while(choice!=6);
	return 0;
}
