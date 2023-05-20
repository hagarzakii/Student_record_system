#include "admin.h"
#include "memory_management.h"

void change_admin_password() {
    printf("Enter current password : ");
    scanf("%s",current_password);
  printf("Enter the new password : ");
    scanf("%s",new_password);
    if (strlen(new_password) < MIN_PASSWORD_LENGTH) {
        printf("Error: password must be at least %d characters long.\n", MIN_PASSWORD_LENGTH);
        return;
    }

/* i think this func is better
void add_byadmin(){
    int c;
    printf("enter number of students you need to add\n");
    scanf("%d",&c);
    struct student *s;
    s=(struct student *) malloc (sizeof(struct student));

    printf("now you enter the details of new students:\n");

    for(int i=0;i<c;++i)
    {
        printf("enter the first name:");
        scanf("%s",s[i].name);
         printf("enter the last name:");
        scanf("%s",s[i].last_name);
        printf("enter ID number:");
        scanf("%d",&s[i].id_number);
        printf("enter student GPA:");
        scanf("%f",&s[i].gpa);
         printf("enter student's new password:");
        scanf("%u",&s[i].pass);
         printf("\n");
    }
        printf("\n details of all the new students are:\n");

    for(i=0;i<c;++i)
    {
        printf("the student frist name is :%s\n",s[i].name);
        printf("the student last name is :%s\n",s[i].last_name);
        printf("the student ID number is:%d\n",s[i].id_number);
        printf("the student GPA is:%.2f\n",s[i].gpa);
        printf("the student phone number is:%d\n",s[i].s_pass);
        printf("\n");
    }
    return 0;
}*/

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
   free_student (Student[temp]);
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


void view_all_records() {
printf("\nAll Student Records:\n");
for (int i = 0; i < numstudents; i++) {
    printf("Student %d:\n", i + 1);
    printf("First Name: %s\n", st[i].firstName);
    printf("Last Name: %s\n", st[i].lastName);
    printf("ID: %d\n", st[i].id_number);
    printf("GPA: %f\n", st[i].GPA);

    printf("Phone Number: %d\n", st[i].phone_number);}

}
