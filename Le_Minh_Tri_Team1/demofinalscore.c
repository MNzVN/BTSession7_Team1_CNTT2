#include <stdio.h>

int main() {
    float midtermScoreTheory = 0, midtermScorePractice = 0;
    float finalScoreTheory = 0, finalScorePractice = 0;
    float averageScoreTheory, averageScorePractice, averageScoreFinal;
    int choice;

    do {
        printf("\n=============== FINAL SCORE TABLE ===============\n");
        printf("1. Enter the midterm score (theory, practice)\n");
        printf("2. Enter the final score (theory, practice)\n");
        printf("3. Calculate subject average score\n");
        printf("4. Calculate final score needed to pass (>= 5.0)\n");
        printf("5. Check if the subject has passed\n");
        printf("6. Retake (if score is below 5.0)\n");
        printf("7. Exit\n");
        printf("=================================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the midterm theory score: ");
                scanf("%f", &midtermScoreTheory);
                printf("Enter the midterm practice score: ");
                scanf("%f", &midtermScorePractice);
                break;

            case 2:
                printf("Enter the final theory score: ");
                scanf("%f", &finalScoreTheory);
                printf("Enter the final practice score: ");
                scanf("%f", &finalScorePractice);
                break;

            case 3:
                averageScoreTheory = midtermScoreTheory * 0.3 + finalScoreTheory * 0.7;
                averageScorePractice = midtermScorePractice * 0.3 + finalScorePractice * 0.7;
                averageScoreFinal = (averageScoreTheory + averageScorePractice) / 2;
                printf("RESULT\n"); 
                printf("===> Average theory score: %.2f\n", averageScoreTheory);
                printf("===> Average practice score: %.2f\n", averageScorePractice);
                printf("===> Average final score: %.2f\n", averageScoreFinal);
                break;
                
            case 4:
            	printf("Check the final score to see how many points are needed\n");
            	float requiredFinalTheory = (5 - midtermScoreTheory * 0.3) / 0.7;
            	float requiredFinalPractice = (5 - midtermScorePractice * 0.3) / 0.7;
            	printf("To achieve a minimum average of 5.0, you need:\n");
            	printf("The required final theory %.2f\n", requiredFinalTheory);
            	printf("The required final practice %.2f\n", requiredFinalPractice);
            	break;
            	
            case 5:
            	if (averageScoreFinal >= 5) 
            		printf("Congratulations! You passed the subject with %.2f.\n", averageScoreFinal);
            	else 
            		printf("You are stupid you did not pass bitch! with %.2f\n", averageScoreFinal);
            	break;
            	
        	case 6:
                if (midtermScoreTheory < 0 || midtermScorePractice < 0 || finalScoreTheory < 0 || finalScorePractice < 0) {
                    printf("Please enter all scores first!\n");
                } else {
                    averageScoreTheory = midtermScoreTheory * 0.3 + finalScoreTheory * 0.7;
                    averageScorePractice = midtermScorePractice * 0.3 + finalScorePractice * 0.7;
                    averageScoreFinal = (averageScoreTheory + averageScorePractice) / 2;
                    if (averageScoreFinal < 5)
                        printf("You must retake the course.\n");
                    else
                        printf("No retake needed.\n");
                }
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please choose again.\n");
				
            	
            	

        
        }

    } while (choice != 7);

    return 0;
}
