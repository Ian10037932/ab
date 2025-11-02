#include <stdio.h>
#include <math.h>
int main(){
	int result_1=2+10/8*3;
	printf("%d\n",result_1);
	double result_2=2+10/8.0*3;
	printf("%lf\n",result_2);
	float a=-1;
	float b=2;
	float c=3;
	float x_1=(-b+sqrt(pow(b,2))+4*a*c)/2/a;
	float x_2=(-b+sqrt(pow(b,2))-4*a*c)/2/a;
	printf("%lf\n",x_1);
	printf("%lf\n",x_2);
	return 0;
}
