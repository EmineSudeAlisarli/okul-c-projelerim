#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faktoriyel hesaplama
    /*long sayi,faktoriyel=1,i;

    printf("Bir Sayi Giriniz: ");
    scanf("%ld", &sayi);

    int i=1;

    while(sayi>=i){
        faktoriyel=faktoriyel*i;
        i++;
    }
    printf("Faktoriyel: %ld ",faktoriyel );*/

    //Armstrong sayi hesaplama
    /*int basSayisi,kalan,i,sayi,sayi2,carpim=1,toplam=0,sayi3;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    sayi2=sayi;
    sayi3=sayi;

    while(sayi>0)
    {
        kalan=sayi%10;
        sayi=sayi-kalan;
        sayi=sayi/10;
        basSayisi++;
    }
    printf("Basamak sayisi:%d\n", basSayisi);
    while(sayi2>0)
    {
        kalan=sayi2%10;
        sayi2=sayi2-kalan;
        sayi2=sayi2/10;
        carpim=1;
        for(i=0; i<basSayisi; i++)
        {
            carpim=carpim*kalan;
        }
        toplam=toplam+carpim;
        printf("Toplam: %d \n",toplam);
    }

    if(toplam==sayi3)
    {
        printf("%d Armstrong sayidir",sayi3);
    }
    else
    {
        printf("%d Armstrong sayi degildir", sayi3);
    }*/

    //Araliktaki asallari bulma

    /*int aralik1, aralik2 , kontrol, i, j;

    printf("1.Araligi Giriniz: ");
    scanf("%d", &aralik1);
    printf("2.Araligi Giriniz: ");
    scanf("%d", &aralik2);

    for(i=aralik1;i<aralik2;i++)
    {
        //asal mi
        kontrol=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                kontrol=1;
                //asal degildir
            }
        }
        if(kontrol==0){
            printf("Sayi asaldir %d\n",i);
        }
        else{
            printf("Sayi asal degildir %d\n",i);
        }

    }*/

    return 0;
}
