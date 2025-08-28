#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


buyuk_bulma(int buyuk_sayi, int kucuk_sayi);
{
    if(birinci_sayi>ikinci_sayi)
    {
        return birinci_sayi;
    }
    else (ikinci_sayi>birinci_sayi)
    {
        return ikinci_sayi;
    }
}

int main()
{
    int sayi1, sayi2;
    printf("Birinci sayiyi giriniz: ");
    scanf(" %d", &birinci_sayi);
    printf("Ikinci sayiyi giriniz: ");
    scanf(" %d", &ikinci_sayi);
    if(buyuk_bulma(buyuk_sayi, kucuk_sayi)==1)
    {
        printf(" %d buyuk, %d kucuktur", buyuk_sayi, kucuk_sayi);
    }
    return 0;
}

int buyuk_bulma(int buyuk_sayi, int kucuk_sayi)
{
    if(birinci_sayi>ikinci_sayi)
    {
        return birinci_sayi;
    }
    else (ikinci_sayi>birinci_sayi)
    {
        return ikinci_sayi;
    }
}

//ikinci ornek
/*int asal_bulma(int sayi)
{
    if(sayi<2)
        return 0;

    for(int i=2;i<sayi/2;i++)
    {
        if(sayi%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf(" %d", &sayi);

    if(asal_bulma(sayi)==0)
    {
        printf(" %d asal degildir.\n", sayi);
    }
    else if(asal_bulma(sayi)==1)
    {
        printf(" %d asaldir.\n", sayi);
    }
    return 0;
}*/

// bool

/*bool asal_bulma(int sayi)
{
    if(sayi<2)
        return false;

    for(int i=2;i<sayi;i++)
    {
        if(sayi%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf(" %d", sayi);

    if(asal_bulma(sayi))
    {
        printf(" %d asaldir.\n", sayi);
    }
    else if(asal_bulma(sayi)==1)
    {
        printf(" %d asal degildir.\n", sayi);
    }
    return 0;
}
*/

//ornek3

/*int Asal_Bulma(int sayi)
{
    for(int i=2;i<sayi/2;i++)
    {
        if(sayi<2)
        {
            return 0;
        }
        else if(sayi%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    int alt_sinir, ust_sinir, sayi;

    printf("Alt siniri giriniz: ");
    scanf(" %d", &alt_sinir);
    printf("Ust siniri giriniz: ");
    scanf(" %d", &ust_sinir);

    for(int i=alt_sinir;i<ust_sinir;i++)
    {
        sayi=i;
        if(Asal_Bulma(sayi)==0)
        {
            continue;
        }
        else
        {
            printf(" %d asal sayidir.\n", sayi);
        }
    }
    return 0;
}*/

//ornek4

int Mutlu_sayi(int sayi)
{
    int basamakT=0;
    {
        while (sayi>0)
        {
            int basamak=sayi%10;
            basamakT+=basamak*basamak;
            sayi/=10;
            if(basamakT==1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

    }
}

int main()
{
    int alt_sinir, ust_sinir, sayi;

    printf("Alt siniri giriniz: ");
    scanf(" %d", &alt_sinir);

    printf("Ust siniri giriniz: ");
    scanf(" %d", &ust_sinir);

    for(int i=alt_sinir; i<ust_sinir; i++)
    {
        sayi=i;
        if(Mutlu_sayi(sayi)==1)
        {
            printf(" %d mutlu sayidir.\n", sayi);
        }
        else
        {
            continue;
        }
    }
    return 0;
}
/*while(sayi>10)
    {
    int basamak=sayi%10;
    sayi=sayi-basamak;
    sayi=sayi/10;
    basamakT+=basamak*basamak;*/








