#include <stdio.h>

int main (){
	int a[10] = {2,3,1,7,8,9,0,6,11,13};
	printf ("cac so chua sap xep\n 2,\t3,\t1,\t7,\t8,\t9,\t0,\t6,\t,11,\t13\n");
	int i,j,tmp;	
	for (i=0;i< 10;i++){
		for(j = 0 ;j <10-i-1;j ++){
			if (a[j] > a[j+1]){
			 tmp = a[j];
			a[j] = a[j+1];
			a[j+1] = tmp;
			}
			
		}
	}		
	printf ("cac so da sap xep la \n");		
		for (i=0;i<10;i++){
			printf ("%d\t",a[i]);
		}	
				return 0;
		}
		
	

