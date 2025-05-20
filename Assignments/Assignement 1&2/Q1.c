#include<stdio.h>

struct Student {
    char name[100];
    int rollno;
    float cgpa;
};

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);
    struct Student students[N];
    for (int i = 0; i < N; i++) {
        printf("Enter the details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("CGPA(OUT OF 10): ");
        scanf("%f", &students[i].cgpa);
    }

    int count1 = 0;
    int count2 = 0;

    for (int i = 1; i < N; i++) {
        if (students[i].cgpa > students[count1].cgpa) {
            count1 = i;
        }
        if (students[i].cgpa < students[count2].cgpa) {
            count2 = i;
        }
    }

    printf("Student with the highest CGPA:\n");
    printf("Name: %s\n", students[count1].name);
    printf("Roll Number: %d\n", students[count1].rollno);
    printf("CGPA: %.2f\n", students[count1].cgpa);

    printf("Student with the lowest CGPA:\n");
    printf("Name: %s\n", students[count2].name);
    printf("Roll Number: %d\n", students[count2].rollno);
    printf("CGPA: %.2f\n", students[count2].cgpa);

    return 0;
}
