#include <stdio.h>

int main() {
    int a;
    printf("Hos Geldiniz! Lutfen Yapmak Istediginiz Islem Turunu Istediginiz Sekli Seciniz.\n");
    printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");
    scanf_s("%d", &a);

    if (a == 1) {  //Toplama işlemi için tanımlamalar yapılıyor
        float deger1, deger2, sonuc;
        printf("Birinci sayiyi giriniz : \n ");
        scanf_s("%f", &deger1);
        printf("Ikinci sayiyi giriniz : \n ");
        scanf_s("%f", &deger2);
        sonuc = deger1 + deger2;
        printf("Girdiginiz islemin sonucu %f Seklindedir", sonuc);
    }

    if (a == 2) { //Çıkarma alanı için tanımlamalar yapılıyor
        float deger1, deger2, sonuc;
        printf("Birinci sayiyi giriniz : \n ");
        scanf_s("%f", &deger1);
        printf("Ikinci sayiyi giriniz : \n ");
        scanf_s("%f", &deger2);
        sonuc = deger1 + deger2;
        printf("Girdiginiz islemin sonucu %f Seklindedir", sonuc);
    }

    if (a == 3) { //Çarpma alanı için tanımlamalar yapılıyor
        float deger1, deger2, sonuc;
        printf("Birinci sayiyi giriniz : \n ");
        scanf_s("%f", &deger1);
        printf("Ikinci sayiyi giriniz : \n ");
        scanf_s("%f", &deger2);
        sonuc = deger1 + deger2;
        printf("Girdiginiz islemin sonucu %f Seklindedir", sonuc);
    }

    if (a == 4) { //Bölme alanı için tanımlamalar yapılıyor
        float deger1, deger2, sonuc;
        printf("Birinci sayiyi giriniz : \n ");
        scanf_s("%f", &deger1);
        printf("Ikinci sayiyi giriniz : \n ");
        scanf_s("%f", &deger2);
        sonuc = deger1 + deger2;
        printf("Girdiginiz islemin sonucu %f Seklindedir", sonuc);
    }
}
