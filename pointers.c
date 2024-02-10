#include <stdio.h>

//pointers --> a variable like reference that holds the memory address  to another variable, arr, etc
//              some tasks become easier with it as it helps take actions directly on the variable its points
//              * = indirect operation (value at address)
/**advs
 * create data structures
 * return more than one value from functions
 * search sort etc
 * dynamic memory allocation
*/

void printAge(int *pAge){ //this is dereferencing
    printf("your %d years old", *pAge); //this is dereferencing
}
int main(){
    int age = 172;
    int *pAge = NULL;  //can initialize now or later
    pAge = &age;

    printf("size of age %d\n",sizeof(age));
    printf("size of pAge %d\n",sizeof(pAge));  //since pAge stores a memory address in hexa its 8 bytes

    printf("address of age %p\n",&age);
    printf("value of pAge %p\n",pAge);

    printf("value of age %d\n",age);
    printf("value stored of pAge %d\n",*pAge);
    
    printAge(pAge);
    return 0;
}