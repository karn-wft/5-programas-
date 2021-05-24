/*DEP3_Prog:basico*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\n escribe el valor a: ");
    scanf("&a", &a);
    printf("\n Escribe el valor b: ");
    scanf("&b",&b);
    printf("\n Escribe el valor c: ");
    scanf("&c", &c);

    a = a + 1;
    b = b * 2;
    c = c * c;

    print("\n\n Ahora el valor de a es %d",a);
    print("\n\n Ahora el valor de b es %d",b);
    print("\n\n Ahora el valor de c es %d",c);
}