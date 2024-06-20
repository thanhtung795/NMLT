#include <stdio.h> 

void anRoiBao(int n,int mang[]){
	
	printf ("nhap gia tri n vao: ");
	scanf ("%d",&n);
	for (int i = 0; i < n; i++){
		printf ("[%d] = ",i+1);
		scanf ("%d",&mang[i]);
	}
	
	int min = mang[0], max =  mang[0];
for (int i = 0; i < n; i++){
	if (min > mang[i]){
		min = mang [i];
	}
	if (max < mang[i]){
		max = mang[i];
		}
	}	printf ("min la %d\n",min);
	printf ("max la %d ",max);

}

int main (){
		int mang[30];
		int n;
		anRoiBao(n,mang);
	
}
