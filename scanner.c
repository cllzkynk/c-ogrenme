#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
 /*	char kitapad[30];
	printf("Lutfen Kitabin adini giriniz : ");
	scanf("%s", kitapad);
	 printf("Girmis oldugunuz kitap : %s" , kitapad);      */
	 
	 
	 
	 
	 char  ad[10], soyad[10], Yas[2], sehir [13],meslek[10]; 
	 printf("Adiniz :  ");
	 scanf("%s",ad);
	 
	 printf("Soyadiniz : ");
	 scanf("%s",soyad);
	 
	 printf("Yasiniz : ");
	 scanf("%s",Yas);
	 
	 printf("Sehriniz :");
	 scanf("%s", sehir);
	 
	 printf("Mesleginiz : ");
	 scanf("%s",meslek);
	  
	 printf("\n***************Kullanici Bilgiler*********************\n");
	 printf("Adi: %s - Soyadi %s\n",ad,soyad);
	 printf("Yas: %s\n",Yas);
	 printf("Sehir : %s\n",sehir);
	 printf("Meslek: %s",meslek);
	 
	 
	 
	return 0;
}
