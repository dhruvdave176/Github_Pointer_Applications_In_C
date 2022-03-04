//
//  main.c
//  Github_pointers_applications_in_C
//
//  Created by Dhruv Dave on 05/03/22.
//

#include <stdio.h>

//structure pointer is a pointer which points to the address of the memory block that stores the structure. This memory block is nothing but structure variable
struct student{
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    struct student student1_var = {1,"Dhruv",90};    //student_var is a variable that contain the base address of 1st element i.e. roll_no here
        //student_var will also have an address. So this student_var is an internal pointer variable
    
    struct student *ptr = &student1_var;    //structure members are linked with the structure object
    printf("Student1 information::\n");
    printf("Roll no is %d, \n",student1_var.roll_no);
    printf("Roll no is %d, \n",ptr->roll_no);  //accessing the member variable differently
    printf("Roll no is %d, \n",(*ptr).roll_no);
    printf("Student Name is %s, \n",student1_var.name);
    printf("Student Name is %s, \n",ptr->name);
    printf("Marks is %f, \n",ptr->marks);

    struct student student2_var;
    struct student *ptr2 = & student2_var;
    printf("Enter marks of student2\n");
    printf("Enter roll no, name and marks:\n");
    scanf("%d",&student2_var.roll_no);
    scanf("%s",ptr2->name);
    scanf("%f",&student2_var.marks);
    printf("Student2 details are : %d %s %f\n",ptr2->roll_no,ptr2->name,ptr2->marks);
    
    return 0;
}

