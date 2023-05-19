#include "input_output.h"


void chooseAdminTask()
{
    int choice;
    printf("1- Edit Admin Password\n");
    printf("2- Add a new student detail\n");
    printf("3- Find the details of a student using ID number\n");
    printf("4- Delete the details of an student\n");
    printf("5- Update the details of an student\n");
    printf("6- Exit\n");
    printf("Enter the task number : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        change_admin_password();
        break;
     case 2:
         addstudent();
         break;
      case 3:
          id_number();
         break;
         case 4:
        delete_student();
         break;
      case 5:
         edit_student();
         break;
         case 6:
         printf("successful exit");
         break;
      default:
           printf("Invalid Input");
    }

}
void chooseStudentTask()
{
  int Studentchoice;
   printf("1- Edit your details\n");
   printf("2- View your record\n");
   printf("3- Exit\n");
   scanf("%d",&choice);
    switch(Studentchoice)
    {
    case 1:
         edit_yourDetail();
        break;
     case 2:
         viewRecord();
         break;
      case 3:
         printf("successful exit");
         break;
      default:
        printf("Invalid Input");

}
