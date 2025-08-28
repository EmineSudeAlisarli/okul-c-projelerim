#include <stdio.h>
#include <stdlib.h>

//Ornek1

/*int main()
{
    int a=4, *ip;
    double b=3.14, *ic;
    char kelime='a', *it;

    ip=&a;
    ic=&b;
    it=&kelime;

    printf("Degiskenlerimiz:\n a=%d\n b=%.2lf\n kelime=%c\n\n\n", a, b, kelime);
    printf("Ilk adresler:\na= %d\nb= %d\nkelime=%d\n\n\n", ip,ic,it);

    ip++;
    ic++;
    it++;

    //ip=ip+5;
    //ic=ic-2;
    //it=it+3;

    printf("Adreslerin bir arttirilmis halleri:\na=%d\nb=%d\nkelime=%d\n", ip, ic, it);

    return 0;
}*/

//Ornek2

/*int main()
{
    int a, b;
    int *psayi, *qsayi;
    int temp;

    psayi=&a;
    qsayi=&b;

    printf("'a' degiskeni icin bir deger giriniz: ");
    scanf(" %d", &a);
    printf("'b' degiskeni icin bir deger giriniz: ");
    scanf("%d", &b);

    printf("\n\n1. deger:%d, 2. deger:%d\n\n", *psayi, *qsayi);
    printf("1. degerin tuttugu adres: %d, 2. degerin tuttugu adres: %d\n\n", psayi, qsayi);

    temp=*psayi;
    *psayi=*qsayi;
    *qsayi=temp;
    printf("Swap isleminden sonra:\n\n 1.deger:%d, 2.deger:%d\n\n", *psayi, *qsayi);

    //*psayi++;
    //*qsayi++;

    printf("Bir arttirilmis degerler:\n a=%d\n b=%d\n", ++*psayi, ++*qsayi);
    return 0;
}*/

//Ornek3

/*int main()
{
    int sayi, *ip, tersi, kalan;

    printf("Bir sayi giriniz: ");
    scanf(" %d", &sayi);

    ip=&sayi;

    printf("Sayinin tersi: ");

    while(*ip!=0)
    {
        tersi=(*ip)%10;
        printf("%d", tersi);
        tersi=tersi*10;
        (*ip)=(*ip) /10;
    }

    return 0;
}*/
