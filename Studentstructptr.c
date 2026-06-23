#include <stdio.h>
#include <string.h>
struct Student{
    char name[50];
    int id;
    char grade[25];
    int grdc;
};
void calc(struct Student *stud){
    char a[strlen(stud->grade)];
    strcpy(a,stud->grade);
    float sum=0.0,tot=0.0;
    for(int i=0;i<strlen(stud->grade);i++){
        switch(a[i]){
            case 'S':
            sum+=10;
            tot+=1;
            break;
            case 'A':
            sum+=9;
            tot+=1;
            break;
            case 'B':
            sum+=8;
            tot+=1;
            break;
            case 'C':
            sum+=7;
            tot+=1;
            break;
            case 'D':
            tot+=1;
            sum+=6;
            break;
        }
    }
    printf("Average grade= %f",sum/tot);
}
int main(){
    struct Student stud1;
    strcpy(stud1.name,"Anish");
    stud1.id=10;
    strcpy(stud1.grade,"ABCDA");
    stud1.grdc=5;
    calc(&stud1);
}
