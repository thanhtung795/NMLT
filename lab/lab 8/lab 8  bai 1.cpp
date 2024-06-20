#include <stdio.h>
#include <string.h>

	struct sinhVien{
	char MSSV[50];
	char tenSV[50];
	char nganhHoc[50];
	int tuoi;
	float diemTB;
	};

void sinhVien(int n,struct sinhVien nhomFPT[]){	
				for (int i = 0; i < n; i++){
					printf ("Nhap ma so sinh vien: ");
					fflush (stdin);	
					gets (nhomFPT[i].MSSV);
					printf ("Nhap ten sinh vien: ");
					fflush (stdin);
					gets (nhomFPT[i].tenSV);
					do{
					printf("nhap tuoi sinh vien: ");
					scanf("%d",&nhomFPT[i].tuoi);						
					}while(nhomFPT[i].tuoi<0);
					printf ("Nhap nganh hoc sinh vien: ");
					fflush (stdin);
					gets (nhomFPT[i].nganhHoc);
					do{
					printf ("diem trung binh cua sinh vien: ");
					scanf ("%f",&nhomFPT[i].diemTB);	
					}while(nhomFPT[i].diemTB<0 || nhomFPT[i].diemTB>10); 
					
				}
}
void sapXep(int n, struct sinhVien nhomFPT[]){
	  for (int i = 0; i < n; i++)
	  {
        for (int j = n; j > i; j--)
		{
            if(nhomFPT[j].diemTB > nhomFPT[j - 1].diemTB)
			{
                struct sinhVien dstamthoi = nhomFPT[j];
                nhomFPT[j] = nhomFPT[j - 1];
                nhomFPT[j - 1] = dstamthoi;
				}             
            }
        }

}
void xuat(int n, struct sinhVien nhomFPT[]){   
		for (int i = 0; i < n; i++){
		printf ("STT:%d\nMSSV: %s\nten sinh vien: %s\ntuoi sinh vien: %d\nnganh hoc: %s\ndiem trung binh: %g\n\n", (i + 1), nhomFPT[i].MSSV, nhomFPT[i].tenSV,nhomFPT[i].tuoi,nhomFPT[i].nganhHoc,nhomFPT[i].diemTB);
		}            
}
void timSV(int n, struct sinhVien nhomFPT[]){
	char MSSV[10];
	printf ("\nchuc nang tim sinh vien muon\n");
	printf ("\n");
	printf ("nhap MSSV muon tim: ");
	fflush (stdin);	
	gets(MSSV);

	for (int i = 0; i < n; i++){
		if (strcmp (nhomFPT[i].MSSV,MSSV)== 0){
			printf ("STT:%d\nMSSV: %s\nten sinh vien: %s\ntuoi sinh vien: %d\nnganh hoc: %s\ndiem trung binh: %g\n\n", (i + 1), nhomFPT[i].MSSV, nhomFPT[i].tenSV,nhomFPT[i].tuoi,nhomFPT[i].nganhHoc,nhomFPT[i].diemTB);
		}
	}

}
void lab8(int n, struct sinhVien nhomFPT[]){
	sinhVien(n,nhomFPT);
 	sapXep(n,nhomFPT);
	xuat(n,nhomFPT);
	timSV(n, nhomFPT);
			
}
int main(){
	char MSSV[10];
	int n; 
	struct sinhVien nhomFPT[100];
	printf ("nhap so luong sinh vien: ");
	scanf ("%d",&n);
	lab8(n,nhomFPT);	
}
 `