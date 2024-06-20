#include <stdio.h>	

int main() {
	// chuong trinh tong hieu 2 so nguyem
	int a,b;//khai bao bien 
	//tinh tong, hieu hai so a va b 
	printf ("nhap vao so thu nhat = "); scanf("%d",&a);//nhap so a
	printf ("nhap vao so thu hai = "); scanf("%d",&b); //nhap so b
	//tong cua hai so
	printf ("tong cua hai so a va b la :%d + %d = %d \n",a,b,a+b);
	//hieu cua hai so
	printf ("hieu cua hai so a va b la :%d - %d = %d \n",a,b,a-b);
return 0;
}
