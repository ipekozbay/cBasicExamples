#include <stdio.h>
#include <stdlib.h>

int main() {
	
// ygs1 puan türü hesaplama
// türke:1.999
// mat: 3,998
//fen:2.999
//sos:1

	float mat,turkce,fen,sos,puan,taban;
	taban=100.160;

	printf("***ygs1 ouan hesaplama***");
	printf("\n\n");

	printf("turkce netinizi girin: ");
	scanf("%f",&turkce);

	printf("mat netini gir: ");
	scanf("%f",&mat);

	printf("fen netini gir: ");
	scanf("%f",&fen);

	printf("sos netini gir:");
        scanf("%f",&sos);

	puan=mat*3.998+turkce*1.999+sos*1+fen*2.999+taban;

	printf("puaniniz: %f",puan);
	
	return 0;
}
