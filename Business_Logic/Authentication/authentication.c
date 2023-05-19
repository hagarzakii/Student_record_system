#include "authentication.h"
#include <string.h>
#include <stdio.h>
#include "student.h"
// Check the username and password entered by the user and determine whether the user is an admin or a student.

char adminPassword[] = "1234";
int attempts = 3;
extern int numstudents;

void is_admin(){
	    char password[20];
		
        while (attempts >0) {
        printf("Enter admin password: ");
        scanf("%s", password);
          if (strcmp(password, adminPassword) == 0) {
            printf("Access granted!\n");
            break;
        } else {
            printf("Incorrect password. %d attempts remaining.\n", attempts -1);
            attempts--;
        }
    }
        if (attempts == 0) {
        printf("Maximum attempts reached.\n Exiting");
        return;
    }
	}
    void check_user() {
		//we need counter for number of students
	int id;
    char password[20];
	
	printf("\nEnter your ID: ");
    scanf("%d", &id);

   struct student* user = NULL;
    for (int i = 0; i < numstudents; i++) {
        if (st[i]->id_number == id) {
            user =& st[i];
            break;
        }
    }
        if (user == NULL) {
        printf("User not found\n");
        return;
    }
    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(password, user->s_pass) != 0) {
        printf("Incorrect password\n");
        return;
    }
    