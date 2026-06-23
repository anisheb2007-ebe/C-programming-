#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void display(struct Student *s)
{
    printf("Roll No : %d\n", s->rollno);
    printf("Name    : %s\n", s->name);
    printf("Marks   : %.2f\n", s->marks);
}

int main()
{
    struct Student s1 = {101, "Anish", 95.5};

    display(&s1);   // Passing address of structure

    return 0;
}
