#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char content[1000];
    
    // Ask the user for the filename
    printf("Enter the filename to create and write: ");
    scanf("%s", filename);
    
    // Open file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    
    // Ask the user for content
    printf("Enter content to write to the file: ");
    getchar(); // Clear input buffer
    fgets(content, sizeof(content), stdin);
    
    // Write content to file
    fprintf(file, "%s", content);
    fclose(file);
    printf("File successfully written.\n");
    
    // Open file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    
    // Read and display file content
    printf("File content:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);
    
    return 0;
}
