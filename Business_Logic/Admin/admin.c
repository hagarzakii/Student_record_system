#include<stdio.h>
#include <stdlib.h>
#include "../Student/student.h"
#include "admin.h"
#include "../../Data_Access/Memory_Management/memory_management.h"

//extern int i ;
int cpy_nNumStudents=0;
char cpy_cAdminPassword[MAX_PASSWORD_LENGTH];
char cpy_cCurrentPassword[MAX_PASSWORD_LENGTH];
char cpy_cNewPassword[MAX_PASSWORD_LENGTH];

void change_admin_password() {
    printf("Enter current password: ");
    scanf("%s", cpy_cCurrentPassword);

    if (strcmp(cpy_cCurrentPassword, cpy_cAdminPassword) != 0) {
        printf("Incorrect current password. Password not changed.\n");
        return;
    }

    printf("Enter the new password: ");
    scanf("%s", cpy_cNewPassword);

    if (strlen(cpy_cNewPassword) < MIN_PASSWORD_LENGTH) {
        printf("Error: password must be at least %d characters long.\n", MIN_PASSWORD_LENGTH);
        return;
    }

    strcpy(cpy_cAdminPassword, cpy_cNewPassword);
    printf("Password changed.\n");
}
void add_byadmin() {
    int nN;
    printf("Enter the number of students you need to add: ");
    scanf("%d", &nN);

    struct student *s;
    s = (struct student *) malloc(nN * sizeof(struct student));

    printf("Enter the details of the new students:\n");

    for (int i = 0; i < nN; ++i) {
        printf("Enter the first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter the last name: ");
        scanf("%s", s[i].lastName);
        printf("Enter the ID number: ");
        scanf("%d", &s[i].id_number);
        printf("Enter the student GPA: ");
        scanf("%f", &s[i].GPA);
        printf("Enter the student's new password: ");
        scanf("%u", &s[i].s_pass);
        printf("\n");
    }

    printf("Details of all the new students are:\n");

    for (int i = 0; i < nN; ++i) {
        printf("Student first name: %s\n", s[i].firstName);
        printf("Student last name: %s\n", s[i].lastName);
        printf("Student ID number: %d\n", s[i].id_number);
        printf("Student GPA: %.2f\n", s[i].GPA);
        printf("Student password: %u\n", s[i].s_pass);
        printf("\n");
    }

    cpy_nNumStudents += nN;
    free(s);
    return;
}

void delete_student() {
    int nTemp;
    printf("Enter the ID number of the student: ");
    scanf("%d", &nTemp);

    for (int j = 0; j < cpy_nNumStudents; j++) {
        if (nTemp == st[j].id_number) {
            free_student(&st[j]);
            for (int k = j; k < cpy_nNumStudents - 1; k++) {
                st[k] = st[k + 1];
            }
            cpy_nNumStudents--;
            printf("The entered student's records have been deleted successfully.\n");
            return;
        }
    }

    printf("Error: No student record found with the entered ID number.\n");
}
void edit_student() {
    int nTemp;
    printf("Enter the ID number of the student: ");
    scanf("%d", &nTemp);

    for (int j = 0; j < cpy_nNumStudents; j++) {
        if (nTemp == st[j].id_number) {
            printf("1. First Name\n"
                   "2. Last Name\n"
                   "3. ID Number\n"
                   "4. GPA\n"
                   "5. Phone Number\n");
            int nC;
            scanf("%d", &nC);
            switch(nC) {
                case 1:
                    printf("Enter the updated first name: ");
                    scanf("%s", st[j].firstName);
                    break;
                case 2:
                    printf("Enter the updated last name: ");
                    scanf("%s", st[j].lastName);
                    break;
                case 3:
                    printf("Enter the updated ID number: ");
                    scanf("%d", &st[j].id_number);
                    break;
                case 4:
                    printf("Enter the updated GPA: ");
                    scanf("%f", &st[j].GPA);
                    break;
                case 5:
                    printf("Enter the updated phone number: ");
                    scanf("%d", &st[j].phone_number);
                    break;
                default:
                    printf("Invalid choice.\n");
                    return;
            }
            printf("Records updated successfully.\n");
            return;
        }
    }

    printf("Error: No student record found with the entered ID number.\n");
}
void id_number()
{
   int cpy_nTemp;
   printf("Enter the ID number of the student\n");
   scanf("%d", &cpy_nTemp);
   for (int i=0 ; i<cpy_nNumStudents ; i++)
   {
      if (cpy_nTemp == st[i].id_number)
      {
         printf("The student's details for ID number %d are:\n", cpy_nTemp);
         printf("The first name is %s\n", st[i].firstName);
         printf("The last name is %s\n", st[i].lastName);
         printf("The GPA is %f\n", st[i].GPA);
         printf("The phone number is %d\n", st[i].phone_number);
		 break;
      }
   }
 }

void view_all_records() {
    printf("\nAll Student Records:\n");
    for (int i = 0; i < cpy_nNumStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("First Name: %s\n", st[i].firstName);
        printf("Last Name: %s\n", st[i].lastName);
        printf("ID Number: %d\n", st[i].id_number);
        printf("GPA: %f\n", st[i].GPA);
        printf("Phone Number: %d\n", st[i].phone_number);
        printf("\n");
    }
    return ;
}
