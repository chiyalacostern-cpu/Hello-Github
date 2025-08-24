#include <stdio.h>

// Function to input marks for students
void inputMarks(int marks[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

// Function to calculate average mark
float calculateAverage(int marks[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += marks[i];
    return (float)sum / n;
}

// Function to find highest mark
int findHighest(int marks[], int n) {
    int high = marks[0];
    for (int i = 1; i < n; i++) if (marks[i] > high) high = marks[i];
    return high;
}

// Function to find lowest mark
int findLowest(int marks[], int n) {
    int low = marks[0];
    for (int i = 1; i < n; i++) if (marks[i] < low) low = marks[i];
    return low;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];
    inputMarks(marks, n);
    printf("Marks entered: ");
    for (int i = 0; i < n; i++) printf("%d ", marks[i]);
    printf("\nAverage mark: %.2f\n", calculateAverage(marks, n));
    printf("Highest mark: %d\n", findHighest(marks, n));
    printf("Lowest mark: %d\n", findLowest(marks, n));
    return 0;
}
