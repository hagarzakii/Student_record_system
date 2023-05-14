#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void addstudent();
void delete_student();
void edit_student();
void id_number();
int i = 0;
 struct student
{
    char firstName[20];
   char lastName[20];
   int id_number;
   float GPA;
   int phone_number;
} st[500];
//struct student st[500]={"amr","eziza",1000,2.79,01000};
int main()
{
   int t;
      printf("Enter the task that you want to perform\n");
      printf("1. Add a new student detail\n");
      printf("2. Find the details of a student using ID number\n");
      printf("3. Delete the details of an student\n");
      printf("4. Update the details of an student\n");
      printf("5. Exit\n");
      scanf("%d", &t);
      switch (t)
      {
      case 1:
         addstudent();
         break;
      case 2:
          id_number();
         break;
         case 3:
        delete_student();
         break;
      case 4:
         edit_student();
         break;
         case 5:
         printf("successful exit");
         break;
      default:
           printf("successful exit");
      }
   return 0;
}

void addstudent()
{
   printf("Add the student's details\n\n");
   printf("Enter the first name of the student\n");
   scanf("%s", st[i].firstName);
   printf("Enter the last name of the student\n");
   scanf("%s", st[i].lastName);
   printf("Enter the ID number of the student\n");
   scanf("%d", &st[i].id_number);
   printf("Enter the GPA of the student\n");
   scanf("%f", &st[i].GPA);
   printf("Enter phone number of the student\n");
   scanf("%d", &st[i].phone_number);
   printf("Records saved successfully");
}
void delete_student()
{
   int temp;
   printf("Enter the ID number of the student\n");
   scanf("%d", &temp);
   for (int j = 1; j <= i; j++)
   {
      if (temp == st[j].id_number)
      {
         for (int k = j; k < 499; k++)
         {
            st[k] = st[k + 1];
         }
        i--;
      }
   }
   printf("The entered student's records deleted successfully");
}
void edit_student()
{
   int temp;
   printf("Enter the ID number of the student\n");
   scanf("%d", &temp);
   for (int j = 0; j < i; j++)
   {
      if (temp == st[j].id_number)
      {
         printf("1. First Name\n"
                "2. Last Name\n"
                "3. ID Number\n"
                "4. GPA\n"
                "5.phone number\n");
         int c;
         scanf("%d", &c);
         switch(c) {
            case 1:
               printf("Enter the updated first name : ");
               scanf("%s", st[j].firstName);
               break;
            case 2:
               printf("Enter the updated last name : ");
               scanf("%s", st[j].lastName);
               break;
            case 3:
               printf("Enter the updated ID number : ");
               scanf("%d", st[j].id_number);
               break;
            case 4:
               printf("Enter the updated GPA : ");
               scanf("%f", st[j].GPA);
               break;
            case 5:
               printf("Enter the updated phone number : ");
               scanf("%d", st[j].phone_number);
               break;
         }
         printf("Records updated successfully");
      }
   }
}
void id_number()
{
   int temp;
   printf("Enter the ID number of the student\n");
   scanf("%d", &temp);
      if (temp == st[i].id_number)
      {
         printf("The student's details are\n");
         printf("The first name is %s\n", st[i].firstName);
         printf("The last name is %s\n", st[i].lastName);
         printf("The GPA is %f\n", st[i].GPA);
         printf("The phone number is %d\n", st[i].phone_number);
      }
 }

