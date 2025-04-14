#include <stdio.h>


int main() {
    // carta 01;
    char Estado;
    char codigo [50];
    char cidade [50];
    float Área;
    float PIB;
    int pontos;
    int população;
    
    printf("Estado de A a H:\n");
    scanf9("%s", &Estado);

    printf("Código da carta: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &população);

    printf("Área: \n");
    scanf("&f", &Área);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos);

    printf("Estado: %s - codigo: %s\n - cidade: %s\n",Estado, codigo, cidade);
    printf("Área: %f - PIB: %f\n", Área, PIB);
    printf("população: %d - pontos: %d\n", população, pontos);


    return 0;

















    return 0;
}
