#ifndef STUDENTRECORDSYSTEM_ADMIN_H
#define STUDENTRECORDSYSTEM_ADMIN_H

#include <stdio.h>
#include <string.h>

struct node {
    // Define the node structure here
};

extern char admin_password[50];

void change_admin_password(char current_password[], char new_password[]);


#endif //STUDENTRECORDSYSTEM_ADMIN_H
