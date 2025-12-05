// Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student top(struct Student a[], int n) {
    int i, max = 0;
    for (i = 1; i < n; i++) {
        if (a[i].marks > a[max].marks) {
            max = i;
        }
    }
    return a[max];
}

int main() {
    struct Student s[3];
    scanf("3 students: %s %d %d, %s %d %d, %s %d %d",
          s[0].name, &s[0].roll, &s[0].marks,
          s[1].name, &s[1].roll, &s[1].marks,
          s[2].name, &s[2].roll, &s[2].marks);

    struct Student t = top(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           t.name, t.roll, t.marks);

    return 0;
}