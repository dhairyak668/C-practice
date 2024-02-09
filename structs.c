#include <stdio.h>
#include <string.h>
// kind of like objects but without methods only variables(members).
// struct members can be accessed
struct Player
{
    char name[12];
    int score;
};

int main()
{

    struct Player p1;
    struct Player p2;

    strcpy(p1.name,"Dhairya");
    p1.score = 100;
    printf("%s: ",p1.name);
    printf("%d",p1.score);
    return 0;
}
