#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Day{Sun=1,Mon=2,Tue=3,Wed=4,Thur=5,Fri=6,Sat=7};


int main(){
    enum Day today= Sat;
    printf("%s",(today == Sat|| today ==Sun ? "Its the weekend":"Its a weekday"));
    return 0;
}