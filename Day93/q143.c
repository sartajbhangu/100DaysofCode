// Find and print the student with the highest marks.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char names[n][50];
    int marks[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", names[i], &marks[i]);
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("Topper: %s %d\n", names[maxIndex], marks[maxIndex]);

    return 0;
}