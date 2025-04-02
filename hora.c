#include<stdio.h>
int main()
{

   int hora, min, seg;
   float aux = 5.5;

   printf("Digite a hora, minuto e segundo:") ;
   scanf("%d %d %d", &hora, &min, &seg);

   //se hora maior que 1 e minuto maior que 15
   printf("quantidade de segundos: 59 ");
   //caso contrario
   printf("quantidade de segundos: 22");


   printf("horario: %02d:%02d:%02d\n", hora, min, seg);
   printf("float com duas casas: %.2f", aux);

   return 0;
}
