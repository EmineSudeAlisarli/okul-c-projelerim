#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*int main()
{
    char Kelime[50];

    printf("Buyuk ve kucuk harf iceren bir kelime giriniz(en fazla 20 harf): ");
    scanf("%s",&Kelime);

    for(int i=0;Kelime[i]!='\0';i++)
    {
        if(islower(Kelime[i])==0)
        {
            Kelime[i]=tolower(Kelime[i]);
        }
        else
        {
            Kelime[i]=toupper(Kelime[i]);
        }
    }*/

    //////////////////////////////////////////////////////
    /*int boyut=0;

    while (Kelime!='\0')
    {
        boyut++;
    }

    for(int i=0; i<=boyut; i++)
    {
        if(islower(Kelime[i]))
        {
            Kelime[i]=tolower(Kelime[i]);
        }
        else
        {
            Kelime[i]=toupper(Kelime[i]);
        }
    }*/

    /*printf("\nKelimenin yeni hali: %s", Kelime);

    return 0;
}*/

//Metinler ayni mi farkli mi?

/*int main()
{
    char metin1[20];
    char metin2[20];

    printf("1. kelimeyi giriniz: ");
    scanf("%s", &metin1);

    printf("2. kelimeyi giriniz: ");
    scanf("%s", &metin2);

    int a=strcmp(metin1,metin2);

    if (a==0)
    {
        printf("metinler aynidir.");
    }
    else
    {
        printf("Metinler farklidir.");
    }
    return 0;
}*/

int main()
{
    int Disk_sayisi

    printf("Hanoi kuleleri icin disk sayisini giriniz: ");
    scanf(" %d", &Disk_sayisi);

    return 0;
}
