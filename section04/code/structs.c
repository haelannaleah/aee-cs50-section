/******************************************************************************
 * structs.c
 * 
 * A program demonstrating the syntax of structs
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 4
 * 9/26/2016
 *****************************************************************************/
 #include <stdio.h>
 #include <cs50.h>

#define SECTION_SIZE 10

// define a structure
struct student
{
    int id;
    string name;
};

// define a structure **as a new type**
typedef struct
{
    string course;
    string name;
    float q_score;
    struct student students[SECTION_SIZE];
} tf;

int main(void)
{
    // since we didn't typedef, we have to remind the computer we want a struct
    struct student stu_1;
    stu_1.id = 8;
    stu_1.name = "John Smith";
    printf("stu_1.id: %i\n", stu_1.id);
    printf("stu_1.name: %s\n", stu_1.name);
    
    // tf is a new type, so we don't have to use the struct identifier
    tf a_tf;
    a_tf.name = "Jane Doe";
    a_tf.course = "CS50";
    a_tf.q_score = 4.3;
    a_tf.students[0] = stu_1;
    printf("a_tf.name: %s\n", a_tf.name);
    printf("a_tf.course: %s\n", a_tf.course);
    printf("a_tf.q_score: %f\n", a_tf.q_score);
    printf("a_tf.students[0].name: %s\n", a_tf.students[0].name);
    
    
}