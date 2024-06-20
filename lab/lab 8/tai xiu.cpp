#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void taiXiu(){
	int tong = 0;
		srand(time(NULL));

		tong = tong +(1+rand() % 24);
	
	if (tong>=14 || tong>=24){
			printf ("xuc sac ra tai la: %d",tong);
		}
	 if (tong <0 || tong <14) {
			printf ("xuc sac ra xiu la: %d",tong);			

		}
}
int main(){
	taiXiu();
	return 0;
}
