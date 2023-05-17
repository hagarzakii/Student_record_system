#include "admin.h"

char admin_password[30] = "1234";  // default admin password "1234"

void view_all_records() {
printf("\nAll Student Records:\n");
for (int i = 0; i < numstudents; i++) {
    printf("Student %d:\n", i + 1);
    printf("First Name: %s\n", st[i].firstName);
    printf("Last Name: %s\n", st[i].lastName);
    printf("ID: %d\n", st[i].id_number);
    printf("GPA: %f\n", st[i].GPA);
	
    printf("Phone Number: %d\n", st[i].phone_number);
void change_admin_password(char current_password[], char new_password[]) {
    if (strcmp(current_password, admin_password) != 0) {
        printf("Incorrect current password. Password not changed.\n");
        return;
    }
    strcpy(admin_password, new_password);
    printf("Admin password changed successfully!\n");
}
