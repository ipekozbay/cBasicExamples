#include <stdio.h>
#include <stdlib.h>

int main() {

 int satir,sutun,sayi,sayi2,k,n;

 printf("satir degerini giriniz: ");
 scanf("%d",&satir);

 printf("sutun degerini giriniz:");
 scanf("%d",&sutun);

 int matris [satir][sutun];

	for(sayi=0;sayi<satir;sayi++){
		
		for(sayi2=0;sayi2<sutun;sayi2++){
			printf("\n [%d][%d]------->",sayi+1,sayi2+1);
			scanf("%d",&matris[sayi][sayi2]);
    	}	
	}
    
	printf("\n\n olusan matris \n");
	
	for(k=0;k<satir;k++){
		
		for(n=0;n<sutun;n++){
			printf(" %d ",matris[k][n]);
		}
		
	printf("\n\n");
	}
	
	return 0;
}
