#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanicidan bir karakter aliniz ve bu karakterin ASCII degerini ve kendisini ekrana yazdiriniz.
    /*char c;

    printf("bir karakter giriniz: ");
    scanf("%c",&c);

    printf("ASCII value: %d, Character:%c\n",c,c);*/

    //Kullanicidan ad, soyad, yas ve boy(cm) bilgilerini alip aþagidaki formatlarda ekrana yazdiriniz.
    /*char ad[50],soyad[50];
    int yas;
    float boy;

    printf("Adinizi giriniz: ");
    scanf("%s",ad);

    printf("Soyadinizi giriniz: ");
    scanf("%s",soyad);

    printf("yasinizi giriniz: ");
    scanf("%d",&yas);

    printf("boyunuzu giriniz: ");
    scanf("%f",&boy);

    printf("Bilgileriniz:\n");
    printf("Ad Soyad: %s %s\n",ad,soyad);
    printf("Yas: %d\n",yas);
    printf("Boy: %.2f\n",boy);*/

    //Bilgisayar muhendisi ise alim.
    /*char bilmuh,cdersi,ucyilc;

    printf("Bilgisayar muhendisi misiniz(E/H): ");
    scanf(" %c", &bilmuh);

    if(bilmuh== 'E')
    {
       printf("C dersi aldiniz mi?(E/H): ");
       scanf(" %c", &cdersi);
       if(cdersi=='E')
       {
           printf("Is mulakatina cagrildiniz:");
       }
       else
           printf("Is mulakatina cagrilmadiniz: ");
    }
    else if (bilmuh=='H')
    {
       printf("3 yillik C deneyiminiz var mi?(E/H): ");
       scanf(" %c", &ucyilc);
       if(ucyilc=='E')
       {
           printf("Is mulakatina cagrildiniz");
       }
       else
           printf("Is mulakatina cagrilmadiniz");
    }
    else
    {
       printf("Hatali Giris yaptiniz");
    }*/

    //Uc sayi karsilastirma
    /*int birincisayi,ikincisayi,ucuncusayi,enbuyuk,enkucuk,ortanca;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &birincisayi);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &ikincisayi);

    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d", &ucuncusayi);

    if(birincisayi>ikincisayi && birincisayi>ucuncusayi)
    {
        if(ikincisayi>ucuncusayi)
        {
            enbuyuk=birincisayi;
            ortanca=ikincisayi;
            enkucuk=ucuncusayi;
        }
        else(ucuncusayi>ikincisayi);
        {
            enbuyuk=birincisayi;
            ortanca=ucuncusayi;
            enkucuk=ikincisayi;
        }
    }
    else if(ikincisayi>birincisayi && ikincisayi>ucuncusayi)
    {
        if(birincisayi>ucuncusayi)
        {
            enbuyuk=ikincisayi;
            ortanca=birincisayi;
            enkucuk=ucuncusayi;
        }
        else(ucuncusayi>birincisayi);
        {
            enbuyuk=ikincisayi;
            ortanca=ucuncusayi;
            enkucuk=birincisayi;
        }
    }
    else(ucuncusayi>birincisayi && ucuncusayi>ikincisayi);
    {
        if(birincisayi>ikincisayi)
        {
            enbuyuk=ucuncusayi;
            ortanca=birincisayi;
            enkucuk=ikincisayi;
        }
        else(ikincisayi>birincisayi);
        {
            enbuyuk=ucuncusayi;
            ortanca=ikincisayi;
            enkucuk=birincisayi;
        }
    }

    printf("Enbuyuk: %d, ortanca: %d, enkucuk: %d");*/

    return 0;
}
