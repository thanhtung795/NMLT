#include <stdio.h>
int main (){
	float dai,cao;
	printf ("chuong trinh tinh chu vi va dien tich tam giac\n");
	printf (" nhap vao so a = ");
	scanf ("%f",&dai);
	printf (" nhap vao so b = ");
	scanf ("%f",&cao);
	float dienTich = (dai*cao)/2;
	printf ("chu vi hinh tam giac la %.2f\n",dienTich);
	float a,b,c;
	a=5;b=6,c=7;
	float chuVi = a+b+c;
	printf ("dien tich hin tam giac la %.2f",chuVi);
}
