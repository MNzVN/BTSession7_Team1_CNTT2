#include <stdio.h>

int main() {
    float mid_lt = -1, mid_pr = -1; // Midterm scores (theory, practice)
    float final_lt = -1, final_pr = -1; // Final exam scores (theory, practice)
    float avg_lt, avg_pr, final_avg; // Averages
    int choice;

    do {
        printf("\n===== COURSE GRADE APPLICATION =====\n");
        printf("1. Enter midterm scores (theory, practice)\n");
        printf("2. Enter final exam scores (theory, practice)\n");
        printf("3. Calculate final course average\n");
        printf("4. Calculate required final exam score to reach 50%% (if midterm entered)\n");
        printf("5. Check pass/fail status\n");
        printf("6. Retake exam (enter new final exam scores)\n");
        printf("7. Exit\n");
        printf("====================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter midterm theory score: ");
                scanf("%f", &mid_lt);
                printf("Enter midterm practice score: ");
                scanf("%f", &mid_pr);
                break;

            case 2:
                printf("Enter final exam theory score: ");
                scanf("%f", &final_lt);
                printf("Enter final exam practice score: ");
                scanf("%f", &final_pr);
                break;

            case 3:
                if (mid_lt < 0 || mid_pr < 0 || final_lt < 0 || final_pr < 0) {
                    printf("Please enter all scores first!\n");
                } else {
                    avg_lt = mid_lt * 0.3 + final_lt * 0.7;
                    avg_pr = mid_pr * 0.3 + final_pr * 0.7;
                    final_avg = (avg_lt + avg_pr) / 2;

                    printf("==> Average Theory Score: %.2f\n", avg_lt);
                    printf("==> Average Practice Score: %.2f\n", avg_pr);
                    printf("==> Final Course Average: %.2f\n", final_avg);
                }
                break;

            case 4:
                if (mid_lt < 0 || mid_pr < 0) {
                    printf("Please enter midterm scores first!\n");
                } else {
                    // To pass, final average must be at least 50
                    // Calculate required final theory and practice scores
                    float required_final_lt = (50 - (mid_lt * 0.3 * 0.5 + mid_pr * 0.3 * 0.5)) / (0.7 * 0.5);
                    printf("To reach an average of 50, you need around %.2f points in both final exams (theory & practice).\n",
                           required_final_lt);
                }
                break;

            case 5:
                if (mid_lt < 0 || mid_pr < 0 || final_lt < 0 || final_pr < 0) {
                    printf("Please enter all scores first!\n");
                } else {
                    avg_lt = mid_lt * 0.3 + final_lt * 0.7;
                    avg_pr = mid_pr * 0.3 + final_pr * 0.7;
                    final_avg = (avg_lt + avg_pr) / 2;

                    if (final_avg >= 50)
                        printf("? You passed the course! Final Average: %.2f\n", final_avg);
                    else
                        printf("? You failed the course. Final Average: %.2f\n", final_avg);
                }
                break;

            case 6:
                printf("Retake exam — re-enter final exam scores:\n");
                printf("Enter new final exam theory score: ");
                scanf("%f", &final_lt);
                printf("Enter new final exam practice score: ");
                scanf("%f", &final_pr);
                break;

            case 7:
                printf("Exiting program... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please choose from 1–7.\n");
                break;
        }

    } while (choice != 7);

    return 0;
}

