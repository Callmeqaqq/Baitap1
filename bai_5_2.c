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
if(secondNum>max){
	max = secondNum;
	}	
if(thirdNum>max){
	max = thirdNum;
	}
if(fouthNum>max){
	max = fouthNum;
	}
if(firstNum == secondNum && Max == thirdNum && Max == fouthNum){
	printf("Khong co so lon nhat!");
	}
else{
	max = max;
	printf ("max = %d", max);
	}
return 0;
}
