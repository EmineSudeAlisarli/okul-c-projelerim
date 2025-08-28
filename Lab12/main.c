#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Ornek1
/*int main()
{
    srand(time(NULL));
    int dizi_uzunlugu, temp, ortanca;
    int *p, toplam=0, ortalama;

    printf("Olusturucaginiz dizinin uzunlugunu giriniz: ");
    scanf(" %d", &dizi_uzunlugu);

    if(dizi_uzunlugu%2==0)
    {
        dizi_uzunlugu=dizi_uzunlugu+1;
    }
    int dizi[dizi_uzunlugu];
    p=dizi;

    for(int i=0; i<dizi_uzunlugu; i++)
    {
        *(p+i)=rand()%20;
        toplam=toplam+*(p+i);
    }
    for(int i=0; i<dizi_uzunlugu; i++)
    {
        printf("%d\t", *(p+i));
    }

    ortalama=toplam/dizi_uzunlugu;
    printf("\n\n\nDizinin ortalamasi: %d\n", ortalama);

    for(int i=0;i<dizi_uzunlugu;i++)
    {
        for(int j=i+1;j<dizi_uzunlugu;j++)
        {
            if(*(p+i)<*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
        printf("%d\t", *(p+i));
    }
    printf("\n\n");

    ortanca=(dizi_uzunlugu/2);
    printf("Dizinin ortanca elemani: %d", *(p+ortanca));

    return 0;
}*/


//Ornek2

//MALLOC
//p=(int*)malloc(boyut*sizeof(int));
int main()
{
    int *p, boyut, i, boyut2;

    printf("Tahsis edilicek bellek bolgesini boyutunu giriniz: ");
    scanf(" %d", &boyut);

    //Ilk ayirdigi yerin adresini donduruyorCALLOC
    p=(int*)calloc(boyut, sizeof(int));

    if(p==NULL)
    {
        printf("Bellek tahsis edilemedi!!!\n\n\n");
        exit(0);
    }
    printf("\nIlk adresler ve Icerikleri: \n\n\n");
    for(i=0;i<boyut;i++)
    {
        printf("%d : %d\n", (p+i), *(p+i));
    }
     for(i=0;i<boyut;i++)
    {
        printf("Eleman giriniz: ");
        scanf("%d", (p+i));
    }
    printf("\nGuncel adresler ve Icerikleri: \n\n\n");
    for(i=0;i<boyut;i++)
    {
        printf("%d : %d\n", (p+i), *(p+i));
    }

    printf("Yeni boyutu giriniz: ");
    scanf(" %d", &boyut2);

    p=realloc(p,boyut2*sizeof(int));

    printf("\nYeni adresler ve Icerikleri: \n\n\n");
    for(i=0;i<boyut2;i++)
    {
        printf("%d : %d\n", (p+i), *(p+i));
    }

    return 0;
}
