#include <stdio.h>

int main (){
int x;					
	int count;// la bien dem 
	printf ("tim so tim so chinh phuong\n");
	printf ("nhap vao x = ");
	scanf ("%d",&x);
	int i;
	for (i=2;i<x;i++){//neu x chay den i ma nhan voi 1 so chinh no ma = x
		if (i*i==x){
		count++;//count se tang len 1 
		break;// khi da thoa man dieu kien break se thoat chuong trinh
		}
	}
	if (count == 0){//neu count  0 thi khong chinh phuong
		printf("x khong phai la so chinh phuong ");
	}
	else 
	{
		printf ("x la so chinh phuong");
	}
	return 0;	
}
