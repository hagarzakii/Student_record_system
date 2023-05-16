#ifndef STUDENTRECORDSYSTEM_STUDENT_H
#define STUDENTRECORDSYSTEM_STUDENT_H
void addstudent();
void delete_student();
void edit_student();
void id_number();
 struct student
{
    char firstName[20];
   char lastName[20];
   int id_number;
   float GPA;
   int phone_number;
} st[500];

#endif //STUDENTRECORDSYSTEM_STUDENT_H
