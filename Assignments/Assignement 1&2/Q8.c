#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename1[100], filename2[100];
    printf("Enter the name of the first file: ");
    scanf("%s", filename1);

    printf("Enter the name of the second file: ");
    scanf("%s", filename2);

    FILE *file1 = fopen(filename1, "w");
    if (file1 == NULL) {
        printf("Failed to open the first file.\n");
        return 1; 
    }

    FILE *file2 = fopen(filename2, "w");
    if (file2 == NULL) {
        printf("Failed to open the second file.\n");
        fclose(file1); 
        return 1;   
    }

    char ch;
    printf("Enter data for the first file (Ctrl+Z to end input):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, file1);
    }

    printf("Enter data for the second file (Ctrl+Z to end input):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, file2);
    }

    fclose(file1);
    fclose(file2);

    file1 = fopen(filename1, "r");
    if (file1 == NULL) {
        printf("Failed to open the first file.\n");
        return 1;
    }

    
    file2 = fopen(filename2, "a");
    if (file2 == NULL) {
        printf("Failed to open the second file.\n");
        fclose(file1); 
        return 1;      
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2);
    }

    
    fclose(file1);
    fclose(file2);

    printf("Contents of %s appended to %s.\n", filename1, filename2);

    return 0;
}
