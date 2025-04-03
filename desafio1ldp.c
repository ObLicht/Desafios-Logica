#include <stdio.h>

char *checkxp(float xp)
{
    char *classify = " ";
    if (xp < 1.000)
        classify = "Ferro";
    if (xp > 1.001 && xp < 2.000)
        classify = "Bronze";
    if (xp > 2.001 && xp < 5.000)
        classify = "Prata";
    if (xp > 5.001 && xp < 7.000)
        classify = "Ouro";
    if (xp > 7.001 && xp < 8.000)
        classify = "Platina";
    if (xp > 8.001 && xp < 9.000)
        classify = "Ascendente";
    if (xp > 9.001 && xp < 10.000)
        classify = "Imortal";
    if (xp > 10.001)
        classify = "Radiante";

    return classify;
}

int main()
{
    char name[15];
    float xp;
    printf("Qual o nome do herói?\n");
    fgets (name, sizeof(name), stdin);
    
    printf("Qual a experiência do herói?\n");
    scanf("%f", &xp);

    char *newclassify;
    newclassify = checkxp(xp);
    printf("O Herói de nome %s está no nível de %p", name, newclassify);
    return 0;
};