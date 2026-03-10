#include <stdio.h>

int main(){
    int arr[5] = {1, 7, 10, 9, 6};

    int *max_ptr = arr;
    int *ptr = arr;
    int *end = arr + 5;

    for(; ptr < end; ptr++){
        if(*ptr > *max_ptr){
            *max_ptr = *ptr;
        }
    }

    printf("Максимум: %d\n", *max_ptr);

}