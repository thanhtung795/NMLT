#include<stdio.h>

int main(){
	float diemToan,diemLy,diemHoa,diemTrungBinh;
	printf ("nhap diem toan: ");scanf("%f",&diemToan);
	printf ("nhap diem ly: ");scanf("%f",&diemLy);
	printf ("nhap diem hoa: ");scanf("%f",&diemHoa);
	if (diemToan<0||diemToan>10){
		printf ("xin hay nhap lai so diem");
	}
	else if (diemLy <0 || diemLy>10){
		printf ("xin hay nhap lai so diem");
	}
	else if(diemHoa <0 ||diemHoa>10){
		printf ("xin hay nhap lai so diem");} 
	else {
		diemTrungBinh = ((diemToan)*3+(diemLy)*2+diemHoa)/6;
	printf("diem trung binh cua toan ly hoa: %0.1f",diemTrungBinh);
	}
	
		
return 0;
}
