#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "dhairya";
    char string2[] = "kachalasdswdfwefef";
    char temp[15];
    strcpy(temp,string1);
    strcpy(string1,string2);
    strcpy(string2,temp);
    //strlwr(string1); //to lower case
    // strupr(string1);
    // strcat(string1,string2);
    // strncat(string1,string2,1);
    // strrev(string1); 
    printf("%s\n",string1);
    printf("%s",string2);
    return 0;
}