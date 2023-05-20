#ifndef STUDENTRECORDSYSTEM_ADMIN_H
#define STUDENTRECORDSYSTEM_ADMIN_H
//#include "input_output.h"
#include <stdio.h>
#include <string.h>
#define MAX_PASSWORD_LENGTH 50
#define MIN_PASSWORD_LENGTH 3

void addstudent();
void delete_student();
void edit_student();
void id_number();


//char admin_password[MAX_PASSWORD_LENGTH] = "1234";
char current_password[MAX_PASSWORD_LENGTH];
char new_password[MAX_PASSWORD_LENGTH];
extern char adminPassword[] = "1234";

extern char admin_password[20];

void change_admin_password();
//void change_admin_password(char current_password[], char new_password[]);
void view_all_records();

#endif //STUDENTRECORDSYSTEM_ADMIN_H
