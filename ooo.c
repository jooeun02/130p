#include <stdio.h>

 main() {
         int i, j;
         printf("1에서 9까지의 숫자를 입력하세요Wn");
         scanf("%d" , &i);

         j=1;
         while(j<10){
                 printf("%d * %d = %dWn , i, j, i*j");
                 j++;
         }
 }