#include <stdio.h>
#include <math.h>

int main () {
    int p , j, e = 2000 , ex = 200;
    printf("Numero de payasos que desea comprar:");
    scanf("%d", &p);
    printf("Numero de juegos de mesa que desea comprar:");
    scanf("%d", &j);

    int vp = p * 150 , vj = j * 130 , vt = vp + vj;
    float w = 8.00 , wp = p * .12 , wj = j * .15 , wt = wp + wj , wa = (ceil(wt - w));
    float ea = e + (wa * ex);

    printf("Costo total de los payasos: $ %d\n", vp);
    printf("Costo total de los juegos de mesa: $ %d\n", vj);
    printf("Costo total de los productos: $ %d\n", vt);
    printf("Peso total de los productos: %.2f Kg\n", wt);
    if (wa>0){
        printf("Costo de el envio: $%.0f\n" , ea);
        printf("Total a pagar: $ %.2f\n", vt + ea);
    }
    else {
        printf("Costo de el envio: $%.0f\n" , e);
        printf("Total a pagar: $ %.2f\n", vt + e);
    }

}
