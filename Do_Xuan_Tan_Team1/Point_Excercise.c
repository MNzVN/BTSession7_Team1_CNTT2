#include <stdio.h>>
int main() {
	int choice;
	float theory_midterm_score;
	float practical_scores_midterm_score; //diem giua ki 
	float theory_final_score;
	float practical_score_final_score;
	float final_score;
	float Midterm_score ;
	float Average_score_for_the_year;
	
	do {
	printf("\n+=================| Statistics of course grades |===================+\n");
	printf("\n|   1 Enter midterm grades (theory and practical scores             |\n");
	printf("\n|   2.Enter final exam grades including theory and practical scores |\n");
    printf("\n|   3.Calculate the average score                                   |\n");
    printf("\n|   4.Check how many points are needed in the final exam            |\n");
    printf("\n|   5.Check if the student has passed                               |\n");
    printf("\n|   6.Retake exam (final)                                           |\n");
    printf("\n|   7.exit                                                          |\n");
    printf("\n+--------------------+please!select number+-------------------------+\n");
    scanf("%d", &choice);
    switch (choice) {
    	case 1:{
    		printf(" enter number midterm score_theory: ");
    		scanf("%f", &theory_midterm_score);
    		printf(" enter number midterm score_practical: ");
    		scanf("%f", &practical_scores_midterm_score);
    		break;
		}
		case 2:
			 printf("Enter final exam grades including theory and practical scores :");
			 scanf("%f", &theory_final_score);
			 printf("Enter final exam grades including theory and practical scores :");
			 scanf("%f", &practical_score_final_score);
			 break;
		case 3:
			 Midterm_score = (theory_midterm_score * 0.5) + ( practical_scores_midterm_score * 0.5 ); // tinh diem trung binh giua ki
			 final_score = ( theory_final_score * 0.5) + ( practical_score_final_score * 0.5 ); // tinh diem trung binh cuoi ki
		     Average_score_for_the_year	= (Midterm_score * 0.3) + (final_score * 0.7); // tong diem giua ki va cuoi ki
		     printf("\n===RESULT===\n");
		     printf("Midterm_score: %.2f\n", Midterm_score);
		     printf("final_score: %.2f\n", final_score);
		     printf("Average_score_for_the_year: %.2f\n", Average_score_for_the_year);
		     break;
	    case 4:
	    	printf("\n+=== Menu ===+\n");
	    	printf("\n1.Final exam not taken yet\n");
	    	printf("\n2.Exam with theory score known\n");
	    	printf("\n3.Definitely passed the course\n");
	    	printf("\n=======please!select=====");
	    	scanf("%d", &choice);
	    switch (choice) {
	    	case 1: 
	    		 printf("enter number midterm score: ");
                 scanf("%f", &Midterm_score);
                 final_score = (50 - Midterm_score * 0.4) / 0.6;
				 break;
			case 2:
				 printf("enter number midterm score: ");
                 scanf("%f", &Midterm_score);
                 printf("enter theory_final_score: ");
                 scanf("%f", &theory_final_score);
                 practical_score_final_score = ((50 - Midterm_score * 0.4) / 0.6) * 2 - theory_final_score ;
                 break;
            case 3: 
             final_score = (50 - Midterm_score * 0.3 * 100/70);
            if (final_score > 50)
             	printf("You are definitely passing the subject\n");
			else if (final_score <= 0)
			     printf("You have to retake the exam\n");
			     break;	
		   default:
			     printf("Invalid selection!");
			 }
		 
		case 5:
				if (Average_score_for_the_year > 50)
				    printf("you pass the subject\n");
				break;
		case 6: {
			float theory, practical;
				printf("Retake exam (final)\n");
				printf("Enter final exam grades including theory  :");
			    scanf("%f", &theory_final_score);
			    printf("Enter final exam grades including practical scores :");
			    scanf("%f", &practical_score_final_score);
			 // tinh lai diem trung binh cuoi ki sau khi thi lai
			    final_score = (theory_final_score + practical_score_final_score) / 2;
			 // tinh lai diem tong ket 
			    Average_score_for_the_year = (Midterm_score * 0.3) + (final_score * 0.7);
				 
			if (Average_score_for_the_year >= 50){
			
			    printf("You have already passed the subject");
			}else {
			 
			    printf("You still haven't passed the subject");
			break;
		}
		case 7:	
		        printf("exit\n");
		        break;
}
}
	} while (choice!= 7);
	return 0;	         	
}     
