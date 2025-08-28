#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Sayi kontrolu
    /*int Baslangic_Sayisi, Bitis_Sayisi;
    int toplam=0;

    printf("Baslangic sayisi giriniz: ");
    scanf(" %d", &Baslangic_Sayisi);
    printf("Bitis sayisi giriniz: ");
    scanf(" %d", &Bitis_Sayisi);

    for(int i=Baslangic_Sayisi; i<=Bitis_Sayisi; i++)
    {
        if(i%2!=0)
        {
            if(i%15==0)
            {
                printf(" %d hem tek hemde uc ve besin ortak katidir.", i);
                break;
            }
            else
            {
                continue;
            }
        }
        else
        {
            printf(" %d cift sayidir\n", i);
        }
        toplam+=i;

    }
    printf(" %d cift sayilarin toplamidir.", toplam);*/

    //Girilen metni tersten yazdirma
    /*char Kelime[20];
    int i=0, sayac=0;
    printf("Bir kelime giriniz (En fazla 20 karakter)");
    scanf(" %s", Kelime);

    while(Kelime[i]!='\0')
    {
       sayac++;
       i++;
    }
    printf("Dizi boyutu: %d\n", sayac);

    printf("Ilk hali: ");
    for(i=0; i<sayac; i++)
    {
        printf(" %c", Kelime[i]);
    }

    printf("\nTersten yazimi: ");
    for(i=sayac; i>=0; i--)
    {
        printf(" %c", Kelime[i]);
    }*/

    //Klavyeden girilen metni her satirda bir karakter olucak sekilde yazdirma
    /*char Dizi[20];
    int i=0, sayac=0;
    printf("Bir kelime giriniz(en fazla 20 harf): ");
    scanf(" %s", Dizi);

    while(Dizi[i]!='\0')
    {
        sayac++;
        i++;
    }//Dizinin uzunlugunu buluyor.

    for(i=0;i<sayac;i++)
    {
        printf("%c\n", Dizi[i]);
    }*/

    //Matrisin koselerindeki sayilar
    /*int Dizi[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int Satir_Boyut=sizeof(Dizi)/sizeof(Dizi[0]);
    int Sutun_Boyut=sizeof(Dizi[0])/sizeof(Dizi[0][0]);
    int i, j,Toplam;
    int AsalToplam=0;
    int IkinciKosegen=0;
    int KosegenlerToplami=0;

    printf("Asal kosegeni: ");
    for(i=0;i<Satir_Boyut;i++)
    {
        for(j=0;j<Sutun_Boyut;j++)
        {
            if(i==j)
            {
                AsalToplam+=Dizi[i][j];
            }
        }

    }
    printf(" %d", AsalToplam);

    printf("\nIkinci kosegen toplami: ");
    for(i=0;i<Satir_Boyut;i++)
    {
        for(j=0;j<Sutun_Boyut;j++)
        {
            Toplam=i+j;
            if(Toplam==(Satir_Boyut-1))
            {
                IkinciKosegen+=Dizi[i][j];
            }
        }
    }
    printf(" %d", IkinciKosegen);

    KosegenlerToplami=IkinciKosegen+AsalToplam;
    printf("\nIki kosegen toplami: %d", KosegenlerToplami);*/

    //Rand komutu

    /*int dizi[10];
    srand(time(NULL));*/
    //time i sifirla demek(kendi kütüphanesi var #include<time.h>)

    /*for(int i=0; i<10; i++)
    {
        dizi[i]=+rand()%(50-10)+10;//dizi[i]dizinin her bir elemanina erisir//%30 otuza kadar olan elemanlari gösterir +1 o elemanida dahil eder.
        printf(" %d\n", dizi[i]);
    }*/

    /*int matris[4][4]={{10,24,13,84},{55,66,67,88},{99,10,11,12},{13,14,15,16}};
    int toplam1=0;
    int toplam2=0;
    int satir,sutun;
    int boyut;
    int j;

    satir=sizeof(matris)/sizeof(matris[0]);
    sutun=sizeof(matris[0])/sizeof(matris[0][0]);

    printf("Satir: %d\n", satir);
    printf("Sutun: %d\n", sutun);

    for(int i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            if(i==j)
            {
                toplam1+=matris[i][j];
            }
        }
        if(j==boyut-1-i)
        {
            toplam2=toplam2+matris[i][j];
        }
        printf("\n");

    }
    printf("kosegen1: %d \nkosegen2: %d", toplam1, toplam2);*/

    return 0;
}
