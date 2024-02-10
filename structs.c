#include <stdio.h>
#include <string.h>
// kind of like objects but without methods only variables(members).
// struct members can be accessed
struct Player
{
    char name[12];
    int score;
};

struct Student{
    char name[12];
    float gpa;
};

int main()
{

    // struct Player p1;
    // struct Player p2;

    // strcpy(p1.name,"Dhairya");
    // p1.score = 100;
    // printf("%s: ",p1.name);
    // printf("%d",p1.score);
    // return 0;
    //-------------------
    //struct arrays

    struct Student student1= {"dhairya",3.72};
    struct Student student2= {"Daniel",4.0};
    struct Student student3= {"Ari",2.0};
    
    struct Student students[] = {student1,student2,student3};
    for(int i = 0; i < sizeof(students)/sizeof(students[0]);i++){
        printf("%-10s\t",students[i].name);
        printf("%.2f\n",students[i].gpa);
    }
}

