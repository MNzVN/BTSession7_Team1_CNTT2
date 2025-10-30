#include <stdio.h>

int main() {
    float m_point_c = 0, m_point_p = 0, e_point_c = 0, e_point_p = 0;
    int userChoose;

    do {
        printf("\n --- Menu --- \n");
        printf("1. Enter your Midterm exam points\n");
        printf("2. Enter your Final exam points\n");
        printf("3. Calculate the average score at the end of the course\n");
        printf("4. Check how many points are needed to pass the course\n");
        printf("5. Check to Pass or Fail your subject\n");
        printf("6. Retest (enter points again)\n");
        printf("7. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice (1 to 7): ");

        if (scanf("%d", &userChoose) != 1) {
            printf("Error input! Please enter a number from 1 to 7.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (userChoose) {
            case 1:
                printf("Enter your Midterm exam points:\n");
                printf("  Multiple choice: ");
                scanf("%f", &m_point_c);
                printf("  Practice: ");
                scanf("%f", &m_point_p);
                break;

            case 2:
                printf("Enter your Final exam points:\n");
                printf("  Multiple choice: ");
                scanf("%f", &e_point_c);
                printf("  Practice: ");
                scanf("%f", &e_point_p);
                break;

            case 3: {
                float average_m = 0.5 * (m_point_c + m_point_p);
                float average_e = 0.5 * (e_point_c + e_point_p);
                float average = average_m * 0.3 + average_e * 0.7;
                printf("Average score at the end of the course: %.2f\n", average);
                break;
            }

            case 4: {
                int passChoose;
                printf("\n--- PASS CALCULATION MENU ---\n");
                printf("1. How many Final average points needed to pass\n");
                printf("2. How many Final Multiple choice points needed to pass\n");
                printf("3. How many Final Practice points needed to pass\n");
                printf("Enter your choice (1–3): ");
                scanf("%d", &passChoose);

                float pass_score = 50;
                float average_m = 0.5 * (m_point_c + m_point_p);

                switch (passChoose) {
                    case 1: {
                        float required_average_e = (pass_score - average_m * 0.3) / 0.7;
                        printf("\nYour Midterm average: %.2f\n", average_m);
                        printf("? You need Final average = %.2f to pass.\n", required_average_e);

                        if (required_average_e > 100)
                            printf("Impossible to pass (need more than 100 points in Final).\n");
                        else if (required_average_e < 0)
                            printf("You already passed based on Midterm alone!\n");
                        break;
                    }

                    case 2: {
                        float average_e = 0.5 * (e_point_c + e_point_p);
                        float required_average_e = (pass_score - average_m * 0.3) / 0.7;
                        float required_c = required_average_e * 2 - e_point_p;
                        printf("\nYour Midterm average: %.2f\n", average_m);
                        printf("Your current Final practice: %.2f\n", e_point_p);
                        printf("? You need Final multiple choice = %.2f to pass.\n", required_c);

                        if (required_c > 100)
                            printf("Impossible to pass (need more than 100 points).\n");
                        else if (required_c < 0)
                            printf("You already passed regardless of multiple choice score.\n");
                        break;
                    }

                    case 3: {
                        float average_e = 0.5 * (e_point_c + e_point_p);
                        float required_average_e = (pass_score - average_m * 0.3) / 0.7;
                        float required_p = required_average_e * 2 - e_point_c;
                        printf("\nYour Midterm average: %.2f\n", average_m);
                        printf("Your current Final multiple choice: %.2f\n", e_point_c);
                        printf("? You need Final practice = %.2f to pass.\n", required_p);

                        if (required_p > 100)
                            printf("Impossible to pass (need more than 100 points).\n");
                        else if (required_p < 0)
                            printf("You already passed regardless of practice score.\n");
                        break;
                    }

                    default:
                        printf("Invalid option in Pass Calculation menu.\n");
                }
                break;
            }

            case 5: {
                float average_m = 0.5 * (m_point_c + m_point_p);
                float average_e = 0.5 * (e_point_c + e_point_p);
                float average = average_m * 0.3 + average_e * 0.7;
                if (average >= 50)
                    printf("? You Pass! (Average: %.2f)\n", average);
                else
                    printf("? You Fail! (Average: %.2f)\n", average);
                break;
            }

            case 6: {
                int testChoose;
                printf("\n--- Retest Menu ---\n");
                printf("1. You took the test again (re-enter scores)\n");
                printf("2. You haven't taken the exam yet (reset all to 0)\n");
                printf("Enter your choice: ");
                scanf("%d", &testChoose);

                if (testChoose == 1) {
                    printf("Re-enter your new exam points.\n");
                    printf("  Midterm multiple choice: ");
                    scanf("%f", &m_point_c);
                    printf("  Midterm practice: ");
                    scanf("%f", &m_point_p);
                    printf("  Final multiple choice: ");
                    scanf("%f", &e_point_c);
                    printf("  Final practice: ");
                    scanf("%f", &e_point_p);
                } else if (testChoose == 2) {
                    m_point_c = m_point_p = e_point_c = e_point_p = 0;
                    printf("All scores have been reset.\n");
                } else {
                    printf("Invalid option in Retest menu.\n");
                }
                break;
            }

            case 7:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please enter a number from 1 to 7.\n");
        }

    } while (userChoose != 7);

    return 0;
}
