#include <stdio.h>
#include <stdlib.h>

/*struct personel
{
    int id;
    char ad_soyad[30];
    double maas;
    int cocuk_sayisi;
    double eski_zaam;
};
struct personel liste[]={{101,"Metin Oktay",1905,0,200},
                          {102,"George Hagi",3200,3,350},
                          {103,"Cladio Taffarel",1000,2,350}
};
void maas_hesapla(struct personel *p);

void listele(struct personel temp[]);

int main()
{
    listele(liste);
    printf("\n------------------------------------------------------\n");
    struct personel *plist;
    plist=&liste;
    maas_hesapla(plist);
    return 0;
}

void maas_hesapla(struct personel *p)
{
    struct personel *temp;
    double zam_orani, yeni_zam;
    for(temp=p;(*temp).id!=0;temp++)
    {
        if(temp->maas<2000)
        {
            zam_orani=0.20;
        }
        else if(temp->maas<3000)
        {
            zam_orani=0.15;
        }
        else
        {
            zam_orani=0.10;
        }
        yeni_zam=temp->maas*zam_orani;
        yeni_zam+=temp->cocuk_sayisi*30;
        if((*temp).eski_zaam>yeni_zam)
        {
            yeni_zam=temp->eski_zaam;
        }
        printf("\nID:%d\t Ad Soyad:%15s\t, Yeni Zam:%lf\t Yeni maas:%lf\n", temp->id, temp->ad_soyad, yeni_zam, temp->maas+yeni_zam);
    }
}

void listele(struct personel temp[])
{
    for(int i=0; i<3; i++)
    {
        if(temp[i].id==0)
        {
            break;
        }
        else
        {
            printf("\nPersonelin id'si:%d\t Adi Soyadi: %15s\t Maasi:%f", temp[i].id,temp[i].ad_soyad,temp[i].maas);
        }
    }
}*/
