// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date jd;
};

int main() {
    struct Employee e;
    scanf("Employee: %s | ID: %d | Joining Date: %d %d %d",
          e.name, &e.id, &e.jd.day, &e.jd.month, &e.jd.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id, e.jd.day, e.jd.month, e.jd.year);

    return 0;
}