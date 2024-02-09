#include <stdio.h>
#include <string.h>

/*
typedef is a reserved keyword that gives a particular datatype a "nickname"
so that you dont repeat it.
char user1[25] ... a nickname for char arrays of 25 bytes
can also be done for stucts
*/

typedef char user[25];

typedef struct 
{
    char name[20];
    int number;
}Player;   //the name of the typedef is placed here for structs



int main(){
    user user1 = "Dhairya";
    user user2 = "kevin";
    Player p1 = {"dhairya",1324142};
    return 0;
}