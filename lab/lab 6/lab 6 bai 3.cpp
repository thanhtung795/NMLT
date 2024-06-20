#include <stdio.h>

void nhap(int n, int a[]){
		for (int i = 0; i < n; i++){
		printf ("[%d] = ",i+1);
		scanf ("%d",&a[i]);
		}
}
void sapXep(int n, int a[]){
	
		for (int i = 0; i < n - 1; i++){
			for (int j = n - 1; j > i;j--){
				if (a[j]<a[j-1]){
					int tmp = a[j];
					a[j] = a[j-1];
					a[j-1] = tmp;
				}
			}
		}
	}

	

void xuat(int n, int a[]){
		printf ("cac mang da nhap va sap xep tang dan");
		for (int i = 0; i < n; i++){
			printf (" %d ",a[i]);	
	}
}
int main (){
		int n;
		int a[30];
		printf ("nhap gia tri n vao: ");
		scanf ("%d",&n);	
		nhap(n,a);
		sapXep(n,a);
		xuat(n,a);
		return 0;					
}		
	

