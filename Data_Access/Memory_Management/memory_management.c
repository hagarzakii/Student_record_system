#include<stdlib.h>
#include "../../Business_Logic/Student/student.h"
#include "memory_management.h"

/* Implement dynamic memory allocation to store student names and passwords (allocate memory)
 * Take care of hidden memory leaks when removing or editing student records (free memory) */
   

void free_student (struct student* Student){
	
free(Student);

}