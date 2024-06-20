#include <stdio.h>
#include <string.h>
struct sinhvien{
	char ten[50];
	float diem;
};
void nhap(int n, struct sinhvien mang[]){
		for(int i = 0 ; i < n; i++){
			printf ("nhap ten sinh vien: ");
			fflush (stdin);
			gets (mang[i].ten);
			printf ("nhap diem sinh vien: ");
			scanf ("%f",&mang[i].diem);
		}
}
void sapXep(int n, struct sinhvien mang[]){
	for (int i = 0; i < n ; i++){
		for (int j = n; j > i;j--){
			if(mang[j].diem > mang[j - 1].diem){
            struct sinhvien tmp = mang[j];
            mang[j] = mang[j - 1];
                mang[j - 1] = tmp ;}
				             
            }

		}
	}
void xuat(int n, struct sinhvien mang[]){
	printf ("\ncac sinh vien sau khi nhap\n");
	for (int i = 0; i < n; i++){
		printf ("STT: %d\tten sinh vien: %s",i+1,mang[i].ten);
		printf ("\tdiem sinh vien: %.1f diem \n",mang[i].diem);
	}
}

	
int main (){
	int n;
	struct sinhvien mang[40];
	printf ("nhap so luong sinh vien: ");
	scanf ("%d",&n);
	nhap(n,mang);
	sapXep(n,mang);
	xuat(n,mang);
	return 0;
}

