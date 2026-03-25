//Write a program to demonstrate nested structure.
#include <stdio.h>

// Nested structure for Marks
struct Marks {
    int m1;
    int m2;
};

// Main structure for Student
struct Student {
    int id;
    char name[50];
    struct Marks m;   // Nested structure
};

int main() {

    struct Student s1, s2;
    int total1, total2;

    // Input for first student
    printf("Enter first student ID: ");
    scanf("%d", &s1.id);

    printf("Enter first student name: ");
    scanf("%s", s1.name);

    printf("Enter marks of subject 1 and subject 2: ");
    scanf("%d %d", &s1.m.m1, &s1.m.m2);

    // Input for second student
    printf("\nEnter second student ID: ");
    scanf("%d", &s2.id);

    printf("Enter second student name: ");
    scanf("%s", s2.name);

    printf("Enter marks of subject 1 and subject 2: ");
    scanf("%d %d", &s2.m.m1, &s2.m.m2);

    // Calculate totals
    total1 = s1.m.m1 + s1.m.m2;
    total2 = s2.m.m1 + s2.m.m2;

    // Display totals
    printf("\nTotal marks of %s = %d", s1.name, total1);
    printf("\nTotal marks of %s = %d", s2.name, total2);

    // Comparison
    if(total1 == total2)
        printf("\nBoth students have equal marks.");
    else if(total1 > total2)
        printf("\n%s has higher marks.", s1.name);
    else
        printf("\n%s has higher marks.", s2.name);

    return 0;
}
