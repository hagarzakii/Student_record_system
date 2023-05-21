
#include <stdio.h>
<<<<<<< HEAD
#include "../../Business_Logic/Authentication/authentication.h"
#include "../Input_Output/input_output.h"
=======
>>>>>>> 47d11467b587faacef8757282bf71d59f56dd4ab
int main(){
int na;
int a=0;  int t;
while(1){
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
	  printf("Welcome in student mode !\n");
	  check_user();
	  chooseStudentTask();
     // check student function
      break;

     default: break;
}
}
}


