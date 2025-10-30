#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	printf(" nhap a:");
	scanf("%d",a);
	printf(" nhap b:");
	scanf("%d",b);
	printf(" nhap C:");
	scanf("%d",c);
	double bt1=pow(a,2)+sqrt(pow(b,2)+4*a*c);
	double bt2=pow(b,3)/pow(c,2);
	double bt3=sqrt(abs(a-b));
	double S=bt1-bt2+bt3;
	printf("%.2lf\n",S);
	return 0;
}
