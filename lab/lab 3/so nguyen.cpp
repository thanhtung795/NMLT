#include <stdio.h>

int main (){
	float  x;
	while (true){
	printf ("chuong trinh tim so nguyen\n");
	printf ("moi nhap vao x = ");
	scanf ("%f",&x);
	if (x == (int)x){
		
	printf("%.2f la so nguyen\n\n",x);
	}	
	else {
	printf ("%.2f khong la so nguyen\n\n",x);
	}
	
	}
		return 0;
}
