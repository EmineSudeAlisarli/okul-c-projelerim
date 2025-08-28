#include <stdio.h>
#include <stdlib.h>

typedef struct Ogrenci
{
    int ogr_no;
    double vize_notu;
    double final_notu;
    double ort;
}OGR;
typedef struct Ders
{
    char ad[20];
    int ogrSayisi;
    double gecme_notu;
    OGR *Ogrenciler
}DR;

DR* bilgi_al(int dersSayisi);
void basarili_ogrbul(DR *dersler, int dersSayisi);
void basarili_dersbul(DR *dersler, int dersSayisi);

int main()
{
    int dersSayisi;
    printf("Ders sayisini giriniz: ");
    scanf("%d", &dersSayisi);
    DR *dersler;
    dersler=bilgi_al(dersSayisi);

    return 0;
}
DR* bilgi_al(int dersSayisi)
{
    DR dersler=malloc(sizeof(DR) * dersSayisi);
    int i, j, dersSayisi;

    printf("Kac adet ders girilecek: ");
    scanf("%d", &dersSayisi);

    DR* dersler
    dersler=bilgi_al(dersSayisi);
    printf("---------------------------\n");
    printf("Dersler ve ogrenciler\n");
    for(i=0;i<dersSayisi;i++)
    {
        printf("%d. Ders adi:",i+1);
        scanf("%s", (dersler+i)->ad);
        printf("%d. Ders ogrenci sayisi:",i+1);
        scanf("%d", &(dersler+i)->ogrSayisi);
        printf("%d. Ders gecme notu:",i+1);
        scanf("%lf", &(dersler+i)->gecme_notu);

        printf("%s dersinin ogrencileri:\n", (dersler+i)->ad);
        for(j=0;j<(dersler+i)->ogrSayisi;j++)
        {
            printf("%d. Ogrenci No:", i+1, j+1);
            scanf("%d", &((dersler+i)->Ogrenciler+j)->ogr_no);
            printf("%d. Ders icin %d. Vize Notu:", i+1, j+1);
            scanf("%lf", &((dersler+i)->Ogrenciler+j)->vize_notu);
            printf("%d. Ders icin %d. Final Notu:", i+1, j+1);
            scanf("%lf", &((dersler+i)->Ogrenciler+j)->final_notu);
            ((dersler+i)->Ogrenciler+j)->ort=(((dersler+i)->Ogrenciler+j)->vize_notu+((dersler+i)->Ogrenciler+j)->final_notu)/2
        }
    }
    return dersler
}

void basarili_ogrbul(DR *dersler, int dersSayisi)
{
    int i, j, max_indis;
    double max_ort=0.00;
    for(i=0;i<dersSayisi;i++)
    {
        for(j=0;j<(dersler+i)->ogrSayisi;j++)
        {
            if(((dersler+i)->Ogrenciler+j)->ort>max_ort)
            {
                max_ort=((dersler+i)->Ogrenciler+j)->ort;
                max_indis=j
            }
        }
        printf("Ders: %s, En iyi ogrenci No: %d, En iyi ogrenci ortalamasi:%lf\n", (dersler+i)->ad, (dersler+i)->Ogrenciler->);
        max_ort=0.0;
        max_indis=-1;
    }
}
