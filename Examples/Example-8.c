#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024
#define MAX_NAME_LENGTH 50

// Structure to hold CSV data
typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    float score;
} Student;

// Function to write data to a CSV file
void writeCSV(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    fprintf(file, "Name,Age,Score\n"); // Write header
    fprintf(file, "Alice,20,85.5\n");
    fprintf(file, "Bob,22,90.0\n");
    fprintf(file, "Charlie,19,78.2\n");
    
    fclose(file);
    printf("CSV file written successfully.\n");
}

// Function to read data from a CSV file
void readCSV(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    char line[MAX_LINE];
    fgets(line, sizeof(line), file); // Read header
    printf("Reading CSV data:\n");
    while (fgets(line, sizeof(line), file)) {
        Student student;
        char *token = strtok(line, ",");
        if (token) strcpy(student.name, token);
        
        token = strtok(NULL, ",");
        if (token) student.age = atoi(token);
        
        token = strtok(NULL, ",");
        if (token) student.score = atof(token);
        
        printf("Name: %s, Age: %d, Score: %.2f\n", student.name, student.age, student.score);
    }
    
    fclose(file);
}

int main() {
    const char *filename = "students.csv";
    writeCSV(filename);
    readCSV(filename);
    return 0;
}
