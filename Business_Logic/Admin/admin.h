#ifndef STUDENTRECORDSYSTEM_ADMIN_H
#define STUDENTRECORDSYSTEM_ADMIN_H
//#include "input_output.h"
#include <stdio.h>
#include <string.h>
<<<<<<< HEAD
#define MAX_PASSWORD_LENGTH 50
#define MAX_PASSWORD_LENGTH 3
=======
void addstudent();
void delete_student();
void edit_student();
void id_number();
>>>>>>> f27831b06d6b928eccc52548a4e9e20f97c0cfc2

char admin_password[MAX_PASSWORD_LENGTH] = "1234";
char current_password[MAX_PASSWORD_LENGTH];
char new_password[MAX_PASSWORD_LENGTH];
struct node {
    // Define the node structure here.
};

extern char admin_password[20];

<<<<<<< HEAD
void change_admin_password();

=======
void change_admin_password(char current_password[], char new_password[]);
void view_all_records();
>>>>>>> f27831b06d6b928eccc52548a4e9e20f97c0cfc2

#endif //STUDENTRECORDSYSTEM_ADMIN_H
