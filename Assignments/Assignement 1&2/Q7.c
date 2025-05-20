#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter the name of the text file: ");
    scanf("%s", filename);

    
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        printf("Failed to create the file.\n");
        return 1; 
    }

    printf("Enter the data for the file (Ctrl+Z+Enter Key to end input):\n");
    char ch;
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }

    fclose(file);


    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1; 
    }

    int count = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    if (ch != '\n' && count > 0) {
        count++;
    }

    fclose(file);

    printf("Number of lines in the file: %d\n", count);

    return 0;
}
