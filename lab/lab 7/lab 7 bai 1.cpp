#include <stdio.h>
#include <string.h>
void anroibao(int mang,int n){
 char s[100];
 printf ("xin ban nhap vao chuoi ky tu: ");
 gets (s);
 printf ("do dai cua ki tu: %d\n",strlen(s));
 int i = 0;
 int dem = 0;
 int phu = 0;
 while (s[i]!='\0')	{
 	if (s[i]== 'a' || s[i]=='i' || s[i]=='e' || s[i]=='o'||s[i] =='u' || s[i]== 'A' || s[i]=='I' || s[i]=='E' || s[i]=='O'||s[i] =='U')
{
	dem++;	
 }else {
 	phu++;
 }i++; 
  }

printf ("chuoi ky tu '%s'\n co chua: %d nguyen am va %d phu am",s,dem,phu);
}
int main (){
	int dem, phu;
	anroibao(dem,phu);
}
