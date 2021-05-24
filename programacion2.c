/*Dep3_prog2;verificar la hora*/
#include <stdio.h>

int main()
{
    int hora, antes, segundos;
    printf("\n introduce las horas");
    scanf("&a", &horas);
    printf("\n introduce los minutos");
    scanf("&b",&minutes);
    printf("\n introduce los segundos");
    scanf("&d", &segundos);

    if {    (horas>=0 && horas<=223) &&
            (minutos>=0 && minutos<=59) &&
            (segundos>=0 && segundos<=59)
        }
    {
       printf("\n El formato de hora es correcto");
    }
    else
    {
       printf("\n El formato de hora es incorrecto");
    }
}