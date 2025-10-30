#include<stdio.h>

int main(){
	float midtheory, midpractice, finaltheory, finalpractice;
	char coursecode; 
	int choice;
	do{
		printf("1.Enter midterm score:\n ");
		printf("2.Enter final score including theoretical score and practical score:\n "); 
		printf("3. Calculate the average score:\n ");
		printf("4. Check how many points are needed for the final score:\n "); 
		printf("5.check if you passed the subject or not:\n ");
		printf("6.retake the exam:\n ");
		printf("7.exit:\n ");
		scanf("%d", &choice);
	
	switch (choice){
	case 1:
	printf("Enter theory poin:\n ");
	scanf("%f", &midtheory); 
	printf("Enter practice poin:\n ");
	scanf("%f", &midpractice);
	break; 
	case 2: 
	printf("Enter theory poin:\n ");
	scanf("%f", &finaltheory);
	printf("Enter practice poin:\n ");
	scanf("%f", &finalpractice); 
	break;
	case 3:{
	float average1 = 0.5 * (midtheory + midpractice);
	float average2 = 0.5 * (finaltheory + finalpractice); 
	float average = average1 * 0.3 + average2 * 0.7;
	printf("average score: %f", average);
		break;
	case 4:
	if(midtheory<0 || midpractice<0){
		printf("??No midterm scores yet, please enter first.");
	}else{
		float needfinaltheory = (5 - midtheory * 0.3)/0.7;
		float needfinalpractice = (5 - finaltheory * 0.3)/0.7;
		printf("\n?? To get 50, the final score needed is at least:\n");
		printf("-theory:%.2f\n", finaltheory);
		printf("-practice:%.2f\n", finalpractice); 
	} 
	break; 
	case 5:
	(average >=50) ? printf("you pass! (average %.2f)"):printf("you fail! (average %.2f)");
	break; 
	case 6:
		printf("retake");
	printf("Enter theory poin:\n ");
	scanf("%f", &finaltheory);
	printf("Enter practice poin:\n ");
	scanf("%f", &finalpractice); 
	case 7:
	printf("exiting program, goodbye.");
	break; 
	default:
	printf("You chose wrongly, please choose from 1-7."); 
	}
}
	
}while (choice !=7);
return 0; 
}
