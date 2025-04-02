#include<stdio.h>
int main()
   {

    int hora, min, seg;

    printf("Digite a hora, minuto e segundo: ") ;
    scanf("%d %d %d", &hora, &min, &seg);

    //se hora maior que 1 e minuto maior que 15
    if (hora > 1 && min> 15)
    {
        float sgds = ((hora * 3600)+(min*60)+(seg));
        printf("quantidade de segundos: %f\n", sgds);
    }
    else
    {
        //caso contrario
         float mnts = ((hora * 3600)+(min*60)+(seg/60.0));
        printf("quantidade de minutos: %f\n", mnts);

    }
    printf("horario: %02d:%02d:%02d\n", hora, min, seg);
    return 0;
    }
