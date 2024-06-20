#include <stdio.h>
void nhap(int n,int m){
	
	int a[n][m];
	int i,j;
	for (i = 0;i<n;i++){
		for (j=0;j<m;j++){
		printf ("hang [%d] va cot [%d]: ", (i),(j));
		scanf ("%d",&a[i][j]);
		}
	}
}
void xuat(int n,int m){
	int i,j;
	int a[i][j];
	printf ("mang vua xuat ra la: \n\n");
	for (i = 0;i < n;i++){
		for (j=0;j < m;j++){
			printf ("%d\t",a[i][j]);
			}
			printf ("\n");
		}
		

}
int main (){
	int n,m;
	printf("moi nhap mang dong,cot \n");
	printf ("nhap hang vao:  ");
	scanf ("%d",&n);	
	printf ("nhap cot vao: ");
	scanf ("%d",&m);
		nhap(n,m);
		xuat(n,m);
	return 0;
}
