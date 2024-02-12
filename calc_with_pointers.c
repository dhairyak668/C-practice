#include <stdio.h>

float add(float i, float j) {return (i+j);}
float sub(float i, float j) {return (i-j);}
float mult(float i, float j) {return (i*j);}
float div(float i, float j) {return (i/j);}

int main(){
    float (*pCalc[4])(float,float)={add,sub,mult,div};
    int choice;
    float a,b;
    printf("Enter your calc choice 0=add,1,sub,2,mult,3=div\n");
    scanf("%d",&choice);
    printf("Enter the the values to be operated on\n");
    scanf("%f %f",&a,&b);
    printf("result: %f",pCalc[choice](a,b));

   return 0;
}
