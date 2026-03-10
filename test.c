#include <stdio.h>
#include <string.h>

void swap(char *start, char *end){
   char temp;
   temp = *start;
   *start = *end;
   *end = temp;

}
int main(){
    char str[] = "Hello";

    char *start = str;
    char *end = &str[strlen(str) - 1];

    while(start < end){
        swap(start, end);
        start++;
        end--;
    }

    printf("Результат: %s\n", str);
    return 0;
}