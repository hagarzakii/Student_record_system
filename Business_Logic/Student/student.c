#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void edit_student();
void id_number();
int i = 0;
 
void viewRecord()
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
	  return ;
 }
void edit_yourDetail()
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
                "6. password\n");
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
           case 6:
               printf("Enter the updated password : ");
               scanf("%d", st[j].s_student);
               break;
         }
         printf("Records updated successfully");
      }
   }
   return ;
}
