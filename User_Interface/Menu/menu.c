#include "menu.h"
#include <stdio.h>
#include "authentication.h"
#include "input_output.h"
int main(){
int na;
int a=0;  int t;
printf("Please select number to choise you are admin or student\n" 
       "1: for admin\n"
       "2: for student\n");
          scanf("%d",&na);

switch(na){
   case 1:  printf("Welcome in admin mode !\n");
            is_admin();
			chooseAdminTask();
   //check admin function   
    break;

      case 2:
	  check_user();
	  chooseStudentTask();
     // check student function
      break;

     default: break;
}


