#include <stdio.h>
#include <string.h>

void nhap(char s[][20]){
	for (int i = 0; i < 5; i++){
		printf ("nhap chuoi ky tu %d: ",i+1);
		gets(s[i]);
	}
}
void xuat(char s[][20]){
	for (int i = 0; i < 5; i++){
		printf ("\n%s",s[i]);
	}
}
void sapXep(char s[][20]){
	int i,j;
	for (i = 0; i < 4; i++ )
	{	
		for (j = i + 1;j < 5 ; j++)
		{
			if (strcmp(s[i],s[j])>0)
			{
				char tmp[20];
				strcpy(tmp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],tmp);
			}
		}
	}
}
int main (){
	char s[5][20];
	nhap(s);
	xuat(s);
	printf ("\n\nchuoi ki tu sau khi sap xep la\n");
	sapXep(s);
	xuat(s);
	
	return 0;
}
