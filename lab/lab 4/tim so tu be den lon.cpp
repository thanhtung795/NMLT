#include <stdio.h>
int main (){
	int a, b,c,min,max;
	printf ("nhap vao so a = ");
	scanf ("%d",&a);
	printf ("nhap vao so b = ");
	scanf ("%d",&b);
	printf ("nhap vao so c = ");
	scanf ("%d",&c);
	max = a;
	if (b > max){
	max = b;		
	}
	 if (c > max){
	max = c;
	}
	printf ("so tu be den lon la: %d,%d,%d so lon nhat la %d",a,b,c,max);
	return 0;
}
