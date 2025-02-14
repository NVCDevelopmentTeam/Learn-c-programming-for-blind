#include <stdio.h>
#include <string.h>

// Define a structure for student information
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student student1;
    
    // Input student details
    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = 0; // Remove newline character
    
    printf("Enter student's age: ");
    scanf("%d", &student1.age);
    
    printf("Enter student's GPA: ");
    scanf("%f", &student1.gpa);
    
    // Display student details
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    
    return 0;
}
