#include <stdio.h>
#include <string.h>


int* find_max(int *arr, int size){
    if(size <= 0){
        return 0;
    }
    int *max_ptr = arr;
    int *ptr = arr;
    int *end = arr + size;
    for(; ptr < end; ptr++){
        if(*ptr > *max_ptr){
            max_ptr = ptr;
        }
    }
    return max_ptr;

}
int main(){
    int arr[8] = {1, 7, 10, 9, 6, -9, 20, 78};

    int *result_ptr;
    result_ptr = find_max(arr, 8);

    printf("Максимум: %d\n", *result_ptr);
    return 0;

}