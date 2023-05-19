#include "menu.h"
#include <stdio.h>
int main(){
int na;
int a=0;  int t;
printf("Please select number to choise you are admin or student\n" 
       "1: for admin\n"
       "2: for student\n");
          scanf("%d",&na);

switch(na){
   case 1:  printf("Welcome in admin mode !\n");
    printf("please put your user_name :\n");
    scanf("%s",st[a].user_name);
    printf("please put your password :\n");
    scanf("%d",&st[a].pass);
    break;

      case 2:
     printf("Enter the task that you want to perform\n");
      printf("1. Find the details of a student using ID number\n");
      printf("2. Update the details of an student\n");
      printf("3. Exit\n");
      scanf("%d", &t);
      break;

     default: break;
}


