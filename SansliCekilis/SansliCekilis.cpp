#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
	char isim[10], soyisim[10];
int secim;
int sayi;
printf("SANSLI CEKILIS UYGULAMAMIZA HOSGELDINIZ \n Lutfen Kullanici Adinizi Giriniz:");
scanf("%s",&isim);
printf("\n Lutfen Soyisminizi Giriniz:");
scanf("%s",&soyisim);
printf("Asagidaki Islemlerden Biri Icin Secim Yapiniz\n[1]-Sansli Cekilisi Dene\n[2]-Kullanici Bilgilerinizi Kontrol Ediniz");
printf("\nLutfen Birini Seciniz:");
scanf("%d",&secim);

if(secim==1){
	printf("Su An Sansli Cekilis Uygulamasindasiniz Lutfen 1 ile 5 Arasinda Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	srand(time(NULL)); 
	int randomSayi=1+rand()%5;
		
	if(sayi==randomSayi){
		
		printf("Girdiginiz Sayi:%d\nCekilisteki Sayi:%d",sayi,randomSayi);
		printf("\nKAZANDINIZ");
	}
	
	else{
		printf("Girdiginiz Sayi:%d\nCekilisteki Sayi:%d",sayi,randomSayi);
		printf("\nBIR DAHAKI SEFERE");
	}
	
	
}

else if(secim==2){
	printf("Kullanici Adiniz:%s\n Kullanici Soyadiniz:%s",isim,soyisim);
	
}

return 0;
}
