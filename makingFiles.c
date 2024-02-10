#include <stdio.h>

int main(){
    /*
    w = write
    a = append
    r = read
    */
    FILE *pF = fopen("testFile.txt","a");  
    fprintf(pF, "spongieeeee\n"); //not dereferenced
    fclose(pF); //not dereferenced
    return 0;
}