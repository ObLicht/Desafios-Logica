#include <stdio.h>

int main()
{
    char name[50];
    float xp;
    char *classify[] = {"Ferro","Bronze","Prata","Ouro","Platina","Ascendente","Imortal","Radiante"};
    char* newxp;

    printf("Qual o nome do herói?\n");
    fgets (name, sizeof(name), stdin);
    
    printf("Qual a experiência do herói?\n");
    scanf("%f", &xp);

    if (xp < 1.000) newxp = classify[0];
    if (xp > 1.001 && xp < 2.000) newxp = classify[1];
    if (xp > 2.001 && xp < 5.000) newxp = classify[2];
    if (xp > 5.001 && xp < 7.000) newxp = classify[3];
    if (xp > 7.001 && xp < 8.000) newxp = classify[4];
    if (xp > 8.001 && xp < 9.000) newxp = classify[5];
    if (xp > 9.001 && xp < 10.000) newxp = classify[6];
    if (xp > 10.001) newxp = classify[7];

    printf("O Herói de nome %s está no nível de %s\n", name, newxp);

    return 0;
}