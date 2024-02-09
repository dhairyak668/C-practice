#include <stdio.h>

void sort(int array[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0; j<size-i-1;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
void charSort(char array[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0; j<size-i-1;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void printCharArray(char array[],int size){
    for(int i = 0; i<size;i++){
        printf("%c ",array[i]);
    }
}


void printArray(int array[],int size){
    for(int i = 0; i<size;i++){
        printf("%d ",array[i]);
    }
}


int main(){
    int array[] = {9,3,4,1,8,5,6,7,2};
    char array2[] = {'H','A','E','I','b'};
    int size = sizeof(array2)/sizeof(array2[0]);
    charSort(array2,size);
    printCharArray(array2,size);
    return 0;
}
