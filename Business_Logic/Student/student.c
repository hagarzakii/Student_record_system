#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void id_number();
int i = 0;
 struct student
{
    char firstName[20];
   char lastName[20];
   int id_number;
   float GPA;
   int phone_number;
  int s_pass;
} st[500];
//struct student st[500]={"amr","eziza",1000,2.79,01000};
int main()
{
   int t;
      printf("Enter the task that you want to perform\n");
      printf("1. Find the details of a student using ID number\n");
      printf("2. Update the details of an student\n");
      printf("3. Exit\n");
      scanf("%d", &t);
      switch (t)
      {
      
      case 1:
          id_number();
         break;
      case 2:
         edit_student();
         break;
         case 3:
         printf("successful exit");
         break;
      default:
           printf("successful exit");
      }
   return 0;
}

void id_number()
{
   int temp;
   int z;
   printf("Enter the ID number of the student\n");
   scanf("%d", &temp);
   printf("Enter the password number of the student\n");
   scanf("%d", &z);
      if (temp == st[i].id_number && z==st[i].s_pass)
      {
         printf("The student's details are\n");
         printf("The first name is %s\n", st[i].firstName);
         printf("The last name is %s\n", st[i].lastName);
         printf("The GPA is %f\n", st[i].GPA);
         printf("The phone number is %d\n", st[i].phone_number);
      }
 }
void edit_student()
{
   int temp;
   int z;
   printf("Enter the ID number of the student\n");
   scanf("%d", &temp);
   printf("Enter the password number of the student\n");
   scanf("%d", &z);
 
   for (int j = 0; j < i; j++)
   {
      if (temp == st[j].id_number && z==st[j].s_pass)
      {
         printf("1. First Name\n"
                "2. Last Name\n"
                "3. ID Number\n"
                "4. GPA\n"
                "5. phone number\n"
                "6. password\n")
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
               scanf("%f", st[j].phone_number);
               break;
           case 6:
               printf("Enter the updated password : ");
               scanf("%f", st[j].s_student);
               break;
         }
         printf("Records updated successfully");
      }
   }
