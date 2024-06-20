#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c,x1,x2,delta;
	printf ("phuong trinh bac hai la  ax^2 +bx + c = 0  \n");
	printf ("nhap vao so a = ");
	scanf ("%f",&a);
	printf ("nhap vao so b = ");
	scanf ("%f",&b);
	printf ("nhap vao so c = ");
	scanf ("%f",&c);
	if (a==0){
		float x = -c/b;
		printf ("phuong trinh thanh bx + c = 0: x = %0.2f",x);

	}else {
		delta = b*b - (4*a*c);
		if (delta < 0){
			printf("phuong trinh vo nghiem");
		} else if (delta==0){
			printf ("phuong trinh co hai nghiem kep x = %f",-b/2*a);
		}else if (delta >0){
			x1 = (-b-sqrt(delta)/2*a);
			x2 = (-b+sqrt(delta)/2*a);
			printf ("phuong trinh co hai nghiem phan biet\n");
			printf ("x1 = %0.2f\n",x1);
			printf ("x2 = %0.2f",x2);
		}
	}
	return 0;
}

