#ifndef STUDENTRECORDSYSTEM_STUDENT_H
#define STUDENTRECORDSYSTEM_STUDENT_H
void edit_yourDetail();
void viewRecord();
 struct student
{
    char firstName[20];
   char lastName[20];
   int id_number;
   float GPA;
   int phone_number;
  int s_pass;
} st[500];

#endif //STUDENTRECORDSYSTEM_STUDENT_H
