#include <stdio.h>
#include <stdlib.h>

// struct birbiriyle baglantili fakat farkli degiskenlerle tanimlanan verileri yazdirir.

 struct kitapbilgi
   {
   	char kitapad[20];
   	char yazar[10];
   	int puan;
   	float fiyat;
   };

 int main() {
	
 struct kitapbilgi kb={"inci","steinbeck",10,6};
 
   printf("kitapad : %s\n",kb.kitapad);	
   printf("yazar: %s\n",kb.yazar);
   printf("puan: %d\n",kb.puan);
   printf("fiyat:%f  ",kb.fiyat);

	return 0;
}
