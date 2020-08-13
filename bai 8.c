//
#include<stdio.h>

int main ()
{float a, b, x;
	printf("nhap so a, b:");
	scanf("%f%f", &a, &b);
	if(a == 0 && b != 0){
		printf("PT vo nghiem!");
	exit(0);
	}
	if(a == 0 && b == 0){
		printf("PT co vo so nghiem!");
		}
		else {	
		x = -b / a;
			printf("Nghiem pt la: %f",x);
		}

return 0;
}

