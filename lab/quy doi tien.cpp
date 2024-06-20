#include <stdio.h>

int main (){
	unsigned long long tienDo;
	printf ("moi nhap so tien muon doi qua tien viet: ");
	scanf ("%f",&tienDo);
	printf ("so tien ban da nhap do-la %.3llf\n",tienDo);
	printf ("so tien da quy doi qua tien viet: %.3llfVND",tienDo*23.655);
	return 0;
}
