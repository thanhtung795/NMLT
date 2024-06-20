#include <stdio.h>

int main (){
	float a,b;// khai bao bien a va b
	printf ("chuong trinh tich va thuong cua a va b\n");//xuat ra man hinh dong chu chuong trinh
	printf ("nhap vao so a = "); //xuat ra  nhap vao so a
	scanf ("%f",&a);//nhap so a
	printf ("nhap vao so b = ");// xuat ra nhap vao so b
	scanf ("%f",&b);//nhap vao so b
	printf ("tich cua a va b la %.2f\n",a*b);// xu  li du lieu a * b 
	printf ("thuong cua a va b la %.2f\n",a/b); // xu li du lieu a / b
return 0;
} 
