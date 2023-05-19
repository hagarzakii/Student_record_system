#include "admin.h"



void change_admin_password() {
    printf("Enter current password : ");
    scanf("%s",current_password);
  printf("Enter the new password : ");
    scanf("%s",new_password);
    if (strlen(new_password) < MIN_PASSWORD_LENGTH) {
        printf("Error: password must be at least %d characters long.\n", MIN_PASSWORD_LENGTH);
        return;
    }

    if (strcmp(current_password, admin_password) != 0) {
        printf("Incorrect current password. Password not changed.\n");
        return;
    }
    strcpy(admin_password, new_password);
    printf("Admin password changed successfully!\n");
}
