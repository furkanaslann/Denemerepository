#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float vki (int kilo, float boy);
void vki_zayif ();
void vki_normal ();
void vki_kilolu ();

int main(int argc, char *argv[]) 
{
	char ad[25], soyad[25];
	int kilo, yas;
	float boy;
	printf("Adinizi giriniz: ");
	scanf("%s", &ad);
    printf("Soyadinizi giriniz: ");
    scanf("%s", &soyad);
    printf("Boyunuzu giriniz(m): ");
    scanf("%f", &boy);
    printf("Kilonuzu giriniz: ");
    scanf("%d", &kilo);
    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);
    
    
    printf("\n adiniz: %s", ad);
    printf("\n soyadiniz: %s", soyad);
    printf("\n boyunuz: %.2f", boy);
    printf("\n kilonuz: %d", kilo);
    printf("\n yasiniz: %d", yas);
    
    float vki_sonuc;
    vki_sonuc=vki(kilo, boy);
    printf("\n VKI sonucunuz: %f", vki_sonuc);
    
    if (vki_sonuc<18 && vki_sonuc>=1 )
	{
		vki_zayif();
	}
	else if ( vki_sonuc>18 && vki_sonuc<25 )
	{
		vki_normal();
	}
	else if ( vki_sonuc>25 )
	{
		vki_kilolu();
	}

	
	return 0;
}

float vki (int kilo, float boy)
{
	float sonuc;
	sonuc = kilo / (boy*boy);
	return sonuc;
}

void vki_zayif ()
{
	printf("\n Kisi zayiftir!\n\n");
	
	int agirlik_sayisi=0, yakilan_kalori=0;
	for (agirlik_sayisi=1; agirlik_sayisi<=50; agirlik_sayisi++)
	{
		printf("5kg lik dambil kaldir(5x10)(%d/50 tamamlandi).\n", agirlik_sayisi);
		yakilan_kalori+=10;
	}
	
	int a=1;
	int sinav_sayisi=1; 
	
	do{	
		printf("\nPrograma devam etmek istiyor musunuz (Evet(1), Hayir(0))?:");
		scanf("%d", &a);
	}while(a==0);
	
	while (a ==1 && sinav_sayisi<21)
	{
		printf("\nSinav cekiniz(%d/20).\n", sinav_sayisi);
		sinav_sayisi++;
		yakilan_kalori+=20;
	}
	printf("\nToplam yakilan kalori: %d", yakilan_kalori);
}

void vki_normal ()
{
	printf("\n Kisi normal seviyededir.\n\n");
	
	int kosu_sayisi=0, yakilan_kalori=0;
	for (kosu_sayisi=1; kosu_sayisi<=20; kosu_sayisi++)
	{
		printf("500m lik parkurda 1 tur kosunuz(%d/20 tamamlandi).\n", kosu_sayisi);
		yakilan_kalori+=10;
	}
	
	int a=0;
	int agirlik_sayisi=1; 
	
	while(a==0){	
		printf("\nPrograma devam etmek istiyor musunuz (Evet(1), Hayir(0))?:");
		scanf("%d", &a);
	}
	
	while (a ==1 && agirlik_sayisi<21)
	{
		printf("\n5kg lik dambil kaldiriniz(%d/20).\n", agirlik_sayisi);
		agirlik_sayisi++;
		yakilan_kalori+=20;
	}
	printf("\nToplam yakilan kalori: %d", yakilan_kalori);
}

void vki_kilolu ()
{
	printf("\n Kisinin kilosu fazladir!\n\n");
	
	int kosu_sayisi=0, yakilan_kalori=0;
	for (kosu_sayisi=1; kosu_sayisi<=30; kosu_sayisi++)
	{
		printf("500m lik parkurda 1 tur kosunuz(%d/30 tamamlandi).\n", kosu_sayisi);
		yakilan_kalori+=10;
	}
	
	int a=0;
	int sinav_sayisi=1; 
	
	while(a==0){	
		printf("\nPrograma devam etmek istiyor musunuz (Evet(1), Hayir(0))?:");
		scanf("%d", &a);
	}
	
	while (a ==1 && sinav_sayisi<11)
	{
		printf("\nSinav cekiniz(%d/10).\n", sinav_sayisi);
		sinav_sayisi++;
		yakilan_kalori+=20;
	}
	printf("\nToplam yakilan kalori: %d", yakilan_kalori);
}


