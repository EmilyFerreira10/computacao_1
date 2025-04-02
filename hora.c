#include<stdio.h>
int main()
{

   int hora, min, seg;

   printf("Digite a hora, minuto e segundo:") ;
   scanf("%d %d %d", &hora, &min, &seg);

   //se hora maior que 1 e minuto maior que 15
   if (hora > 1 && min> 15){
   printf("quantidade de segundos: %d\n", (hora * 3600)+(min*60)+seg);
   } else {
   //caso contrario
   printf("quantidade de segundos: ");


   printf("horario: %02d:%02d:%02d\n", hora, min, seg);
}
   return 0;
}
