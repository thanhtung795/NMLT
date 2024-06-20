#include <stdio.h>
int main (){
	float diemChuyen,diemGiua,diemCuoi,diemTong;
	while (true){
	printf("\n---------------------\n");
	printf ("\ndiem mon hoc tren co so 3 dau diem\n");
	printf ("nhap diem chuyen can = ");
	scanf("%f",&diemChuyen);
	printf ("nhap diem giua ki = ");
	scanf("%f",&diemGiua);
	printf ("nhap diem cuoi ki = ");
	scanf("%f",&diemCuoi);
 	if (diemChuyen <0 || diemChuyen >10){
 		printf ("hay nhap lai so diem ");
	}else if (diemGiua<0 || diemGiua >10){
		printf ("hay nhap lai so diem ");
	}else if (diemCuoi<0||diemCuoi >10){
		printf ("hay nhpa lai so diem ");
	}else {
		diemChuyen*10/100;
		diemGiua*30/100;
		diemCuoi*60/100;
		diemTong = (diemChuyen+diemGiua+diemCuoi)/3;
		printf ("diem tong cua mon hoc: %.2f",diemTong);
		return 0;		
	}
 	} 
	 return 0;
	 
}
