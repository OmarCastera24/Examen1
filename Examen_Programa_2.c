#include <stdio.h>
#include <math.h>

int main () {
    int e , o;
    printf("Bienvenido \n Ingrese su edad: ");
    scanf("%d" , &e);

    if (e<5) {
        printf ("Usted entra gratis");}

    if (4<e<17) {
        printf("Si usted cuenta con credencial de Estudiante, escriba 1 \n Si no, escriba 2 \n Escriba: ");
        scanf("%d" , &o);
        if (o = 1) {
            printf ("Recibio un descuento de el 10%\n Su entrada cuesta $45"); }

        else {
            printf ("Su entrada cuesta $50\n");} }

    }
    if (e>16) {
        printf ("Su entrada cuesta $100\n");
        printf("Si usted cuenta con credencial de: \n a) Estudiante escriba 1 \n b) Docente, escriba 2 \n c)INAPAM, escriba 3 \n Escriba: ");
        scanf("%d" , &o);
        if (o = 1) {
        printf ("Recibio un descuento de el 10%\n Su entrada cuesta $90");}

        if (o = 2) {
        printf ("Recibio un descuento de el 30%\n Su entrada cuesta $70");}

        if (o = 3) {
        printf ("Recibio un descuento de el 50%\n Su entrada cuesta $50");}

    }
}
