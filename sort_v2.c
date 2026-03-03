#include <stdio.h>

void print_array(int arr[], int size) {
    printf("Изначальный список: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}   

void sort_array(int arr[], int size){
    int temp;
    for(int i = 0; i < size - 1; i ++){
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Отсортированный список готов: ");
    for(int k = 0; k < size; k ++){
        printf("%d ", arr[k]);
    }
    printf("\n");
}

int main(void){

    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++){
        printf("Введите число: ");
        scanf("%d", &array[i]);
    }
    print_array(array, n);
    sort_array(array, n);
    return 0;
}
