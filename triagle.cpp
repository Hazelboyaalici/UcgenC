#include<stdio.h>
#include<math.h>
int main(){
	
	int a,b,c;
	
	printf("uc adet tamsayi giriniz: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(b+c> a && a > abs(b-c)){
	
	if(a+c> b && b > abs(a-c))
	if(a+b> c && c > abs(a-b))
	 printf("bu bir ucgendir\n");
	 

	if(a==b && a!=c) printf("ikizkenar bir ucgendir\n");
	if(a==c && a!=b) printf("ikizkenar bir ucgendir");	
	if(a==c && c==b) printf("eskenar bir ucgendir\n");
	if(a!=c && a!=b) printf("cesitkenar bir ucgendir\n");
	if( a*a + b*b== c*c) printf("dik bir ucgendir\n");
	}
	
	else printf ("girilen degerlerden ucgen elde edilemez!\n");
	
	
	
	return 0;
}
