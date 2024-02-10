#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Day{Sun=1,Mon=2,Tue=3,Wed=4,Thur=5,Fri=6,Sat=7};

//enum
void enums(){
    enum Day today= Sat;
    printf("%s",(today == Sat|| today ==Sun ? "Its the weekend":"Its a weekday"));
}

void randoms(){
    srand(time(0));
    //rand() number between 0 and 32767
    int number1 = rand()%6 +1; //this is to generate between 1-6 
    printf("%d",number1);
}

void memorys(){
    char a;
    short b;
    int c;
    double c1;
    short d[2];
    double e[2];

    printf("%d bytes\n",sizeof(a));
    printf("%p\n", &a);
    
    printf("%d bytes\n",sizeof(b));
    printf("%p\n", &b);
    printf("%d bytes\n",sizeof(c));
    printf("%p\n", &c);
    printf("%d bytes\n",sizeof(c1));
    printf("%p\n", &c1);
    printf("%d bytes\n",sizeof(d));
    printf("%p\n", &d);
    printf("%d bytes\n",sizeof(e));
    printf("%p\n", &e);
    long long g;
    printf("%d bytes for long long\n",sizeof(g));
    printf("%p\n", &g);
    float h;
    printf("%d bytes for float\n",sizeof(h));
    printf("%p\n", &h);

}
int main(){
    memorys();
    return 0;
}