//
#include<stdio.h>

int main ()
{
int firstNum, secondNum, thirdNum, fouthNum;
printf("Nhap so nguyen thu nhat:");
scanf("%d", &firstNum);
printf("Nhap so nguyen thu hai:");
scanf("%d", &secondNum);
printf("Nhap so nguyen thu ba:");
scanf("%d", &thirdNum);
printf("Nhap so nguyen thu tu:");
scanf("%d", &fouthNum);

int max = firstNum;
if(firstNum == secondNum && secondNum == thirdNum &&  thirdNum == fouthNum){
	printf("Khong co so lon nhat!");
	exit(0);
	}
if(secondNum>max){
	max = secondNum;
	}	
else{
	max = max;
	}
if(thirdNum>max){
	max = thirdNum;
	}
else{
	max = max;
	}
if(fouthNum>max){
	max = fouthNum;
	printf("max =%d", max);
	}
else{
	max = max;
	printf ("max = %d", max);
	}
return 0;
}
