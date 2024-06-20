#include <stdio.h>

int main(){
	int min, max;//khai boa bien mim, max
	printf ("nhap so min max co chia het cho 2 la\n");
	printf ("nhap min = ");//nhap min
	scanf ("%d",&min);
	printf ("nhap max = "); //nhap max
	scanf ("%d",&max);
	//vong lap chay tu max den i 
	float  tong = 0,n,diemTB = 0; //bien, n
	int i = min;//khai bao i = min
	while (i <= max){
	if (i%2==0){
		tong+=i; //tong =  tong + i
		n++;//n la dong vai tro  1 bien diem
	}i++; //i + th	em 1 s
	}
	 diemTB =  tong/n;// xu li du lieu  trung binh
	printf ("TRUNG BINH TONG CHIA HET CHO 2 LA %.1f",diemTB);
	return 0;
}
