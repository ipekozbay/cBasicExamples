#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int islem,bakiye=1000,tutar,sayac=0;
  
  printf("islemler: \n 1-para cekme \n 2-para yatirma\n 3-havale\n 4-bakiye sorgulama\n 5-kart iade\n\n");
  
  printf("islemi seciniz:");
  scanf("%d",&islem);
  
  switch(islem)
  {
  	case 1 : 
  	
  	   printf("bakiyeniz: %d\n",bakiye);
  	   
  	   printf("cekilecek tutar:");
  	   scanf("%d",tutar);
  	   
  	   if (tutar > bakiye)
  	    {
  	    	printf("bakiye yetersiz");
		}
  	
  	  bakiye-=tutar;
  	  printf("kalan bakiyeniz: %d",bakiye);  	    
  	  break;
  	  
  	case 2 :
  		
  	   printf("bakiyeniz: %d\n",bakiye);
  	   
  	   printf("yatirilacak tutar:");
  	   scanf("%d",tutar);
  	
  	  bakiye+=tutar;
  	  printf("kalan bakiyeniz: %d",bakiye);  	    
  	  break;
  	  
  	case 3 :
  		
  	  printf("bakiyeniz: %d\n",bakiye);
  	   
  	   printf("havale edilecek tutar:");
  	   scanf("%d",tutar);
  	   
  	   if (tutar > bakiye)
  	    {
  	    	printf("bakiye yetersiz");
		}
  	
  	  bakiye-=tutar;
  	  printf("kalan bakiyeniz: %d",bakiye);  	    
  	  break;
  	  
  	case 4 : 
  	
	    printf("bakiyeniz: %d\n",bakiye);
  	  break;
  	  
	case 5 : 	
	
  	   printf("kart iade edildi\n");   
  	  break;
  	  
  	default :
  		
  		printf("tanimlanmayan islem girdiniz ");
  		break;
  	
  }

	return 0;
}
