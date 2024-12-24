#include <stdio.h>

// Define a structure to store student details
struct student {
    char name[50];  // Name of the student
    int i,roll_no;    // Roll number of the student
    int marks;      // Marks of the student
};

 main() {
    // Declare an array of 3 structures
    struct student s1[3];
    int i;

    // Input student details
    for ( i = 0; i < 3; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        
        // Input name, roll number, and marks
        printf("Enter Name: ");
        scanf("%s", s1[i].name);  // Input student name
        
        printf("Enter Roll Number: ");
        scanf("%d", &s1[i].roll_no);  // Input roll number
        
        printf("Enter Marks: ");
        scanf("%d", &s1[i].marks);  // Input marks
    }

    // Display student details
    printf("\nStudent Details:\n");
    for ( i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s1[i].name);
        printf("Roll No: %d\n", s1[i].roll_no);
        printf("Marks: %d\n", s1[i].marks);
    }

}

