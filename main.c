#include <stdio.h>

int main(void){
   int scores[5];
   int temp;

   for(int i = 0; i < 5; i++){
      printf("Введите число: ");
      scanf("%d", &scores[i]);
   }

   for(int i = 0; i < 5 - 1; i++){
      for(int j = i + 1; j < 5; j++){
         if(scores[i] > scores[j]){
            temp = scores[j];
            scores[j] = scores[i];
            scores[i] = temp;
           
         }
      }
   }
   for(int k = 0; k < 5; k++){
      printf("%d\n", scores[k]);
   }
   return 0;
}