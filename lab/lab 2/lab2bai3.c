#include<stdio.h>
 
int main(){
	//dien tich va chu vi hinh tron
	const float Pi = 3.14;
	float R;
	printf("nhap ban kinh duong tron: ");
	scanf("%f",&R);
	// dien tich
	printf ("dien tich hinh tron la %0.2f\n",R*R*Pi);
	//chu vi
	printf ("chu vi hinh tron la %0.2f",R*2*Pi);
}
