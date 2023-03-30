#include <stdio.h>

int main() {
   int numeroInteiro;
   printf("Digite um número Inteiro: ");
   scanf("%d", &numeroInteiro);
   if (numeroInteiro % 2 == 0) {
      printf("O número: %d é par!\n", numeroInteiro);
   } else {
      printf("O número: %d é ímpar!\n", numeroInteiro);
   }
   return 0;
}
