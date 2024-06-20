#include<stdio.h>

int main (){
	const float bac1 = 1678;
	const float bac2 = 1734;
	const float bac3 = 2014;
	const float bac4 = 2556;
	const float bac5 = 2834;
	const float bac6 = 2927;
	int kwh;
	printf("so kwh tieu thu hang thang: ");
	scanf("%d",&kwh);
	float tienDien = 0;
	if (tienDien <50){
		tienDien = kwh*bac1;
	}else if (tienDien<100){
		tienDien = 50*bac1 + (kwh - 50)*bac2;
	}else if (tienDien<200){
		tienDien = 50*bac1 + 50*bac2 + (kwh - 100)*bac3;
	}else if (tienDien<300){
		tienDien = 50*bac1 + 50*bac2 +100*bac3+(kwh - 200)*bac4;
	}else if (tienDien<400){
		tienDien = 50*bac1 + 50*bac2 +100*bac3+100*bac4+(kwh - 300)*bac5;
	}else {
		tienDien = 50*bac1 + 50*bac2 +100*bac3+100*bac4+ 100*bac5+(kwh - 400)*bac6;
	}
	printf ("tong tien dien tieu thu trong thang la %d\t - %f\t",kwh,tienDien);
		return 0;
}
