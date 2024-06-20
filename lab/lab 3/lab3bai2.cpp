#include <stdio.h>

int main (){
	float a,b,x; //pt bac 1
	printf ("nhap he so cua phuong trinh ax + b = c\n");
	printf ("nhap he so a = ");
	scanf("%f",&a);
	printf ("nhap he so b = ");
	scanf("%f",&b);
	if (a==0 &&b==0){
		printf("phuong trinh co vo so nghiem");
	}
	else if (a==0 && b!=0){
		printf ("phuong trinh vo nghiem");
	}
	else {
		x = -b/a; 
		printf ("phuong trinh co nghiem la %0.2f" ,x );
	}
	return 0;
}
