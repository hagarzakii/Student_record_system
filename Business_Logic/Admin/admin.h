#ifndef STUDENTRECORDSYSTEM_ADMIN_H
#define STUDENTRECORDSYSTEM_ADMIN_H
//#include "input_output.h"
#include <stdio.h>
#include <string.h>
#define MAX_PASSWORD_LENGTH 50
#define MAX_PASSWORD_LENGTH 3

char admin_password[MAX_PASSWORD_LENGTH] = "1234";
char current_password[MAX_PASSWORD_LENGTH];
char new_password[MAX_PASSWORD_LENGTH];
struct node {
    // Define the node structure here.
};

extern char admin_password[20];

void change_admin_password();


#endif //STUDENTRECORDSYSTEM_ADMIN_H
