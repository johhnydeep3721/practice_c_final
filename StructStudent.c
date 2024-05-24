#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data structure for student
struct Student {
    int ID;
    float midtermScore;
    float finalScore;
    char name[50];
};

// Function to compare students based on their scores
int compare(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return (studentB->midtermScore + studentB->finalScore) - (studentA->midtermScore + studentA->finalScore);
}

int main() {
    int numStudents;

    // Ask user to enter the number of students
    printf("Enter the number of students in the class: ");
    scanf("%d", &numStudents);

    // Allocate memory for dynamic arrays of students and scores
    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));
    float *scores = (float *)malloc(numStudents * sizeof(float));

    // Input student details
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].ID);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Midterm Score: ");
        scanf("%f", &students[i].midtermScore);
        printf("Final Score: ");
        scanf("%f", &students[i].finalScore);

        // Calculate and store total score
        scores[i] = students[i].midtermScore + students[i].finalScore;
    }

    // Sort students based on scores
    qsort(students, numStudents, sizeof(struct Student), compare);

    // Print students in descending order of scores
    printf("\nStudents in descending order of scores:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Name: %s, Total Score: %.2f\n", students[i].name, scores[i]);
    }

    // Free dynamically allocated memory
    free(students);
    free(scores);

    return 0;
}
