// Write a program to store, read and print student details (Name, Rollno, Course, Branch, Dept, 5 subjects’marks, total and grade) demonstrate example.
#include <stdio.h>
struct Student
{
    char name[50];
    int rollno;
    char course[50];
    char branch[50];
    char dept[50];
    int marks[5];
    int total;
    char grade;
};
void calculateTotalAndGrade(struct Student *student)
{
    student->total = 0;
    for (int i = 0; i < 5; i++)
    {
        student->total += student->marks[i];
    }
    float average = student->total / 5.0;
    if (average >= 90)
    {
        student->grade = 'A';
    }
    else if (average >= 80)
    {
        student->grade = 'B';
    }
    else if (average >= 70)
    {
        student->grade = 'C';
    }
    else if (average >= 60)
    {
        student->grade = 'D';
    }
    else
    {
        student->grade = 'F';
    }
}
int main()
{
    struct Student student;
    // Input student details
    printf("Enter student name: ");
    scanf("%49s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.rollno);
    printf("Enter course: ");
    scanf("%49s", student.course);
    printf("Enter branch: ");
    scanf("%49s", student.branch);
    printf("Enter department: ");
    scanf("%49s", student.dept);
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
    }
    // Calculate total and grade
    calculateTotalAndGrade(&student);
    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollno);
    printf("Course: %s\n", student.course);
    printf("Branch: %s\n", student.branch);
    printf("Department: %s\n", student.dept);
    printf("Marks: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", student.marks[i]);
    }
    printf("\nTotal Marks: %d\n", student.total);
    printf("Grade: %c\n", student.grade);
    return 0;
}
