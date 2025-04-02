#include <stdio.h>

int main() {
    float physics[4], chemistry[4], math[4];
    float totalPhysics = 0, totalChemistry = 0, totalMath = 0;
    float averagePhysics, averageChemistry, averageMath;
    float overallAverage;

    const char* testNames[4] = {"Assignment", "Coursework", "Mid-term", "End-of-term"};

    printf("Enter marks for Physics:\n");
    for (int i = 0; i < 4; i++) {
        while (1) {
            printf("Enter marks for %s: ", testNames[i]); 
            if (scanf("%f", &physics[i]) != 1) {
                printf("Please enter the correct data type (a number).\n");
                while (getchar() != '\n'); 
            } else if (physics[i] < 0 || physics[i] > 100) {
                printf("Please enter a mark between 0 and 100.\n");
            } else {
                totalPhysics += physics[i]; 
                break; 
            }
        }
    }

    
    printf("Enter marks for Chemistry:\n");
    for (int i = 0; i < 4; i++) {
        while (1) {
            printf("Enter marks for %s: ", testNames[i]); 
            if (scanf("%f", &chemistry[i]) != 1) {
                printf("Please enter the correct data type (a number).\n");
                while (getchar() != '\n'); // Clear invalid input
            } else if (chemistry[i] < 0 || chemistry[i] > 100) {
                printf("Please enter a mark between 0 and 100.\n");
            } else {
                totalChemistry += chemistry[i]; 
                break; 
            }
        }
    }


    printf("Enter marks for Math:\n");
    for (int i = 0; i < 4; i++) {
        while (1) {
            printf("Enter marks for %s: ", testNames[i]);
            if (scanf("%f", &math[i]) != 1) {
                printf("Please enter the correct data type (a number).\n");
                while (getchar() != '\n'); // Clear invalid input
            } else if (math[i] < 0 || math[i] > 100) {
                printf("Please enter a mark between 0 and 100.\n");
            } else {
                totalMath += math[i]; // Update total for Math
                break; // Exit the loop if input is valid
            }
        }
    }


    averagePhysics = totalPhysics / 4;
    averageChemistry = totalChemistry / 4;
    averageMath = totalMath / 4;


    overallAverage = (averagePhysics + averageChemistry + averageMath) / 3;

    printf("\nAverage marks:\n");
    printf("Physics: %.2f\n", averagePhysics);
    printf("Chemistry: %.2f\n", averageChemistry);
    printf("Math: %.2f\n", averageMath);
    printf("Overall Average: %.2f\n", overallAverage);

    return 0;
}
