#include "input_output.h"
#include <stdio.h>
#include "student.h"

extern int numstudents;

// Implement standard input/output functions to interact with the user
void view_all_records() {
  //we need counter for number of students
printf("\nAll Student Records:\n");
for (int i = 0; i < numstudents; i++) {
    printf("Student %d:\n", i + 1);
    printf("First Name: %s\n", st[i].firstName);
    printf("Last Name: %s\n", st[i].lastName);
    printf("ID: %d\n", st[i].id_number);
    printf("GPA: %f\n", st[i].GPA);
    printf("Phone Number: %d\n", st[i].phone_number);
}
}
