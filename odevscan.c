#include <stdio.h>
#include <stdlib.h>


int main() {

	char  KitapAdi[20] , Yazar[20] , SayfaSayisi[4], BasimTarihi[4] , BasimEvi[20] , Tur[20] ;
	
	 printf("Lutfen Kitap adini yaziniz : "  );
	scanf("%s", KitapAdi);
	
	 printf("Lutfen Kitabin yazarini yaziniz : " );
	 scanf("%s", Yazar);
	 
	 printf("Lutfen Kitabin sayfa sayisini yaziniz : "  );
	 scanf("%s", SayfaSayisi);
	 
	 printf("Lutfen Kitabin basim tarihini yaziniz : "  );
	 scanf("%s", BasimTarihi);
	 
	 printf("Lutfen Kitabin basimevini yaziniz : "  );
	 scanf("%s", BasimEvi);
	 
	 printf("Lutfen Kitabin turunu yaziniz : "  );
	 scanf("%s", Tur);
	 
	 
	 printf("**************************Kitabin**************************\n\n\n");
	 
	 printf("Adi \t : %s - Yazari : %s", KitapAdi , Yazar);
	 printf("\n\nBasimevi : %s  - Basim  Tarihi : %s", BasimEvi, BasimTarihi);
	 printf("\n\nTuru \t : %s - Sayfa Sayisi : %s", Tur, SayfaSayisi);
	
	
	return 0;
}
