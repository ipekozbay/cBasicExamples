#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int giris,i,j;
	
//	printf("kac giris yapacaksiniz?");
	scanf("%d",&giris);
	
	int year[giris];
	
	if (giris >=1 && giris<=100)
	{
		
     	for(i=0;i<giris;i++)
     	{
   	     	scanf("%d",&year[i]);
        }
    
    }
    
	for(j=0;j<giris;j++) 	
	{
	
		if (year[j]>=1000 && year[j]<=100000)	
		{
			if(year[j]%4==0)
		    {
			  printf("yes\n");
			}
			
			else
			{
				printf("no");
			}
		}	
    }
	return 0;
}
