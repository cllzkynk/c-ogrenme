#include"stdio.h" 
#include"math.h" 
#include"conio.h"



int main() {
	
	/*

	float  sayi1,topla,carp,fark;
	float sayi2,bol ; 
	
	sayi1= 10;
	sayi2=3;
	topla=sayi1+sayi2 ; 
	carp=sayi1*sayi2 ;
	fark=sayi1-sayi2 ;
	bol=sayi1/sayi2 ;
	
	printf("Toplam :  %d" , topla);
	printf("\nCarpim :  %d" , carp);
	printf("\nFark   :  %d" , fark);
	printf("\nBolum  :  %d" , bol);  
	
	*/  
	
	/*
	int kenar,cevre;
    float Alan ,u;
    printf("Ucgenin alanini hesaplama programi.\n");

    printf("Lutfen ucgenin kenarini giriniz:");
    scanf("%d",&kenar); // a kenarinin degerini gir
   
    u=(kenar+kenar+kenar)/2; // 3 kenari toplayip 2 e böl ve degeri u ya ata
    Alan=sqrt(3)*((kenar*kenar))/4; // ucgenin alanini hesaplama için genel formül
    cevre=(3)*kenar ;
    printf("ucgenin alani : %.2f",Alan); //ucgenin alanini ekrana yaz
    printf("\n\nucgenin cevresi : %d",cevre);
    getch(); // bir deger girilene kadar bekletir
    */
    
    /*
    int sinav1 , sinav2 , sinav3 , proje;
    float ortalama ;
    
    printf("Lutfen 1.sinavizin notunu giriniz\n");
    scanf("%d",&sinav1);
    
    printf("\nLutfen 2.sinavizin notunu giriniz\n");
    scanf("%d",&sinav2);
    
    printf("\nLutfen 3.sinavizin notunu giriniz\n");
    scanf("%d",&sinav3);
    
    printf("\nLutfen proje notunu giriniz\n");
    scanf("%d",&proje);
    
    ortalama=(sinav1+sinav2+sinav3+proje)/4;
    
    printf("\nOrtalamaniz : %.2f" , ortalama  ); */
    
    
    int bagaj , el , asimBgj,asimEl , ceza; 
    printf("Lutfen bagaja vereceginiz kargonun agirligini giriniz : ");
    scanf("%d" , &bagaj);
    
    printf("\n\nLutfen kabine yaniniza alacaginiz kargonun agirligini giriniz : ");
    scanf("%d", &el);
     
    asimBgj=bagaj-15;
    
    asimEl=el-8;
    
    ceza =(asimBgj+asimEl)*5;
     
     printf(" \n\n Odemeniz gereken bagaj asim tutari : %d", ceza);
    
    
    
    
    
    
    return 0;
	
	
	
	

	
	

}
