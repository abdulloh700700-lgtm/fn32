#include <stdio.h>

int main() {
    float narx, foiz, chegirma, yangiNarx;

    printf("Mahsulot narxini kiriting: ");
    scanf("%f", &narx);

    printf("Chegirma foizini kiriting: ");
    scanf("%f", &foiz);

    chegirma = narx * foiz / 100;
    yangiNarx = narx - chegirma;

    printf("Chegirma summasi: %.2f\n", chegirma);
    printf("Chegirmadan keyingi narx: %.2f\n", yangiNarx);

    return 0;
}