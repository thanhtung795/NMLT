#include<stdio.h>

int main (){
	float diem;
	printf ("nhap so diem sinh vien: ");
	scanf("%f",&diem);
	if (diem<0 || diem>10){
		printf (" da nhap sai so diem , xin  hay nhap lai"); //nhap thap hon 0 hoac cao hon 10
	}
	else if (diem>=9){
		printf ("hoc luc xuat sac ");
	}
	else if (diem>=8){
		printf ("hoc luc gioi ");
	}
	else if (diem>=6.5){
		printf ("hoc luc kha ");
	}
	else if (diem>=5){
		printf ("hoc luc trung binh ");
	}
	else if (diem>=3.5){
		printf ("hoc luc yeu ");
	}
	else{
		printf ("hoc luc kem ");
	}

	return 0;
}
