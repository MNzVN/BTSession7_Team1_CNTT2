#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float average_midterm,average_finalterm,average,final_exam;
	float finalterm_theory,finalterm_practice,midterm_theory,midterm_practice;
	int choice,pass,choose;
	while(1){
		printf("|--------------------------MENU------------------------------|\n");
		printf("|1.Point midterm exam!!                                      |\n");
		printf("|                                                            |\n");
		printf("|2.Point final exam!!                                        |\n");
		printf("|                                                            |\n");
		printf("|3.Calculate the final grade point average                   |\n");
		printf("|                                                            |\n");
		printf("|4.Check how many final points are needed to pass the course |\n");
		printf("|                                                            |\n");
		printf("|5.Check you pass the exam!!                                 |\n");
		printf("|                                                            |\n");
		printf("|6.Retest!!                                                  |\n");
		printf("|                                                            |\n");
		printf("|7.Exit                                                      |\n");
		printf("|                                                            |\n");
		printf("|------------------------------------------------------------|\n");
		printf("Enter your choice: "); 
		scanf("%d",&choice);
     	
	
	switch(choice){
		case 1:{
		printf("Enter point midtem exam theory:");
	       scanf("%f",&midterm_theory);
	       printf("Enter point midterm exam practice:");
	       scanf("%f",&midterm_practice);
	       break;
		 
		}
		   
	    case 2:{
	       printf("Enter point final exam theory:");
	       scanf("%f",&finalterm_theory);
	       printf("Enter point final exam practice:");
	       scanf("%f",&finalterm_practice);
	       break;
	   }
	    case 3:
	    	average_midterm = (midterm_theory + midterm_practice)*50/100;
			printf("Your grade point average mifterm is:%.2f\n",average_midterm);
			average_finalterm = (finalterm_theory+finalterm_practice)*50/100;
			printf("Your grade point average final is:%.2f\n",average_finalterm);
			average= (average_midterm*0.3)+(average_finalterm*0.7);
			printf("Your grade point average final suject is:%.2f\n",average);
			break;
		case 4:{
			while(1){
		
			printf("1.Have not take the final exam!!\n");
			printf("2.Know point midterm theory\n");
			printf("3.Pass the exam\n");
			printf("4.Exit!!\n");
			printf("Enter your choose:");
			scanf("%d",&choose);
			switch(choose){
				
				
				case 1:
					final_exam=50-(average_midterm*30/100*70/100);
					 printf("You need to take exam %.2f can pass the exam!!\n",final_exam);
					 break;
				case 2:
					final_exam=(50-(average_midterm*30/100)+finalterm_theory)*70/100;
					printf("You need to take exam %lf can pass the exam!!\n",final_exam);
					break;
				case 3:
					final_exam=(50-(average_midterm))*30/100*70/100;
					if(final_exam<0){
						printf("You pass the suject!!\n");
						
					}else{
						printf("You stupid!!!\n");
					}
					    break;
				case 4:
					printf("Good bye!!\n");
					return 0;
				    break;
				default:
					printf("Invalid choose\n");
					break;
					
				}
			}
		}
			break ;
		case 5:
			if(midterm_theory==0){
				printf("You not enter midterm theory!!\n");
				printf("You need enter point midterm theory\n");
		
				
			}
			if(midterm_practice==0){
				printf("You not enter midterm practice!!\n");
				printf("\n");
				printf("You need enter point midterm pracitce");
				
			}
			if(finalterm_theory==0){
				printf("You not enter final theory!!");
				printf("\n");
				printf("You need enter point finaltheory!!\n");
				
			}
			if(finalterm_practice==0){
				printf("You not enter final practice!!\n");
				printf("\n");
				printf("You need enter point final practice!!\n");
			}
			if(average>=50){
				printf("You pass the suject!!\n");
			}else{
				printf("You not pass the exam,You stupid!!\n");
			}
			break;
		case 6:
			printf("Enter your point  final theory exam!!");
			scanf("%f",&finalterm_theory);
			printf("Enter your point final practice exam!!");
			scanf("%f",&finalterm_practice);
			break;
		    
		case 7:
			printf("Good bye you!!");
			return 0;
     }
    }

	return 0;
}
