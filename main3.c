#include <stdio.h>
#include <stdlib.h>

int yas_araligi[6] = { 65, 50, 40, 25, 18, 10 };
int oncelik_sirasi_getir(int yas);
int sira_no_getir(int oncelik_sirasi);
int kayit_gir();
int asilama_yap();

int main (int argc, char *argv[])
{
    kayit_gir();
  	
    asilama_yap();
    
    return 0;
}

kayit_gir(){
	int a = 1;
    while (a == 1){
      char ad[44], soyad[50], adres[200];
      int tc, yas;
      printf ("\nHastanin Adi: ");
      scanf ("%s", &ad);
      printf ("Hastanin Soyadi: ");
      scanf ("%s", &soyad);
      printf ("Hastanin TC Kimlik Numarasi: ");
      scanf ("%d", &tc);
      printf ("Hastanin Yasi: ");
      scanf ("%d", &yas);
      printf ("Hastanin Adresi: ");
      scanf ("%s", &adres);
      
      int oncelik_sirasi = oncelik_sirasi_getir(yas);
      int sira_no = sira_no_getir(oncelik_sirasi);
      
      printf("\n Oncelik sirasi: %d", oncelik_sirasi);
      printf("\n Sira numarasi: %d", sira_no);
      
      printf ("\n Kayit girmeye devam etmek istiyor musunuz (Evet(1), Hayir(0))?:");
      scanf ("%d", &a);
    }
}

asilama_yap(){
	int b = 1;
    while (b == 1){
	  int tc, sira_no, doz;
	  float vucut_sicakligi;
      printf ("Hastanin TC Kimlik Numarasi: ");
      scanf ("%d", &tc);
      printf ("Hastanin sira numarasi: ");
      scanf ("%d", &sira_no);
      printf ("Hastanin kacinci_dozu: ");
      scanf ("%d", &doz);
      printf ("Hastanin vucut sicakligi: ");
      scanf ("%f", &vucut_sicakligi);
      
      
      printf ("\n Asilamaya devam etmek istiyor musunuz (Evet(1), Hayir(0))?:");
      scanf ("%d", &b);
    }
}

oncelik_sirasi_getir(int yas){
    int oncelik_sirasi;
    if(yas >= yas_araligi[0]){
        oncelik_sirasi = 1;
    } else if(yas < yas_araligi[0] && yas >= yas_araligi[1]){
        oncelik_sirasi = 2;
    } else if(yas < yas_araligi[1] && yas >= yas_araligi[2]){
        oncelik_sirasi = 3;
    } else if(yas < yas_araligi[2] && yas >= yas_araligi[3]){
        oncelik_sirasi = 4;
    } else if(yas < yas_araligi[3] && yas >= yas_araligi[4]){
        oncelik_sirasi = 5;
    } else if(yas < yas_araligi[4] && yas >= yas_araligi[5]){
        oncelik_sirasi = 6;
    } else{
        oncelik_sirasi = 7;
    }
    return oncelik_sirasi;
}

sira_no_getir(int oncelik_sirasi){
    int sira_no = 1;
    if(oncelik_sirasi == 1){
        sira_no = 1;
    } else if(oncelik_sirasi == 2){
        sira_no = (sira_no * 2) + 20;
    } else if(oncelik_sirasi == 3){
        sira_no = (sira_no * 3) + 50;
    } else if(oncelik_sirasi == 4){
        sira_no = (sira_no * 4) + 100;
    } else if(oncelik_sirasi == 5){
        sira_no = (sira_no * 5) + 150;
    } else if(oncelik_sirasi == 6){
        sira_no = (sira_no * 6) + 250;
    } else{
        sira_no = (sira_no * 7) + 300;
    }
    return sira_no;
}

