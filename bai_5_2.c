//
#include<stdio.h>

int main ()
{
int a = 5 , b=15 ,c= 16 , d = 7, max =a ;
max = a ;

if (b>max){
	max = b ;
}
else{
	max = max;
}
if (c>max){
	max = c;
}

else {
	max = max;
}
if(d>max){
max = d;
printf("max =%d", max);
}
else{
	max = max;
	printf ("max = %d", max);
}
return 0;
}

