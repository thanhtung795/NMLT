#include <stdio.h>
void nhap(int n,int m){
	
	int a[n][m];
	int i,j;
	for (i = 0;i<n;i++){
		for (j=0;j<m;j++){
		printf ("moi ban nhap  du lieu hang [%d] va cot [%d]: ", (i+1),(i+1));
		scanf ("%d",&a[i][j]);
		}
	}
}
void xuat(int n,int m){
	int i,j;
	int a[i][j];
	for (i = 0;i < n;i++){
		for (j=0;j < m;j++){
			printf ("mang binh phuong: %d\n ",a[i][j]*a[i][j]);
			}
		}
		printf ("\n");

}
int main (){
	int n,m;
	printf("moi nhap mang n,m \n");
	printf ("nhap hang vao:  ");
	scanf ("%d",&n);	
	printf ("nhap cot vao: ");
	scanf ("%d",&m);
		nhap(n,m);
		xuat(n,m);
	return 0;
}
