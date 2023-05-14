#include "admin.h"

char admin_password[30] = "1234";  // default admin password "1234"

void change_admin_password(char current_password[], char new_password[]) {
    if (strcmp(current_password, admin_password) != 0) {
        printf("Incorrect current password. Password not changed.\n");
        return;
    }
    strcpy(admin_password, new_password);
    printf("Admin password changed successfully!\n");
}
