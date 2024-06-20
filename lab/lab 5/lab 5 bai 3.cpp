#include <stdio.h>

void hoanVi(){//ham goi
	int a,b;//khai bao bien
	int swap;//bien phu dung de hoan vi
	printf ("nhap vao cac so sau day \n");
	printf ("\nnhap vao so a: ");
	scanf ("%d",&a);
	printf ("\nnhap vao so b: ");
	scanf ("%d",&b);
	swap = a;//neu swap = a thi swap la so a 
	a = b ;//a = b se hoan vi thanh swap
	b = swap;//b = swap thi so b la swap
	printf ("cac so da bi hoan vi hien tai %d la so a , %d la so b",a,b);
}
int main (){//ham chay chinh
	hoanVi();//goi ham 
}
