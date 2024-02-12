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

//return address values using pointers (see that the method name has a * in from of it)
int *findMid(int arr[], int len){
    return &arr[len/2];
}

//using pointers to reference the values in a parameter and make changes to it
void getMinMax(int arr[], int len, int *min, int *max){
   // *min=*max=arr[0];
    for(int i = 1; i<len;i++){
        if(arr[i]<*min){
            *min = arr[i];
        }
        if(arr[i]>*max){
            *max=arr[i];
        }
    }
}

void reverseArray(int arr[],int len){
    int *p = &arr[0];
    int *q = &arr[len-1];
    while(q>p){
        int temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}
int main(){
    // int age = 172;
    // int *pAge = NULL;  //can initialize now or later
    // pAge = &age;

    // printf("size of age %d\n",sizeof(age));
    // printf("size of pAge %d\n",sizeof(pAge));  //since pAge stores a memory address in hexa its 8 bytes

    // printf("address of age %p\n",&age);
    // printf("value of pAge %p\n",pAge);

    // printf("value of age %d\n",age);
    // printf("value stored of pAge %d\n",*pAge);
    
    // printAge(pAge);

    // int age = 10;
    // int birth = 20;
    // int *p, *q;
    // p = &age;
    // // *q=birth;
    // printf("%d", *p);

//using pointers to pass in address values as parameters
/*
        int a[] = { 23, 20, 54, 43, 96, 5, 35, 29};
        int min, max = a[0];
        int len = sizeof(a)/sizeof(a[0]);
        getMinMax(a,len,&min,&max);
        printf("%d, %d", min,max);
*/
    int a[][3] = { {1,2,3}, {20,3,5}, {54,4,5}, {43,4,7}, {9,2,7}, {5,9,2}, {35,6,1}, {29,8,3}};   
    // int len =  sizeof(a)/sizeof(a[0]);
    // int *mid = findMid(a,sizeof(a)/sizeof(a[0]));
    // //printf("%d",*mid);
    // int *p = a;
    // reverseArray(a,len);
    // while(p<=a+len-1){
    //     printf("%d ",*(p++));  
    // }

    printf("%d",(a[0][2]));
    
    return 0;
}