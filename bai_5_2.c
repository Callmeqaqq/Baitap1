//
#include<stdio.h>
// làm thiếu yêu cầu đề bài, đề bài yêu cầu nhập số vào chứ không phải khai báo số sẵn,
int main ()
{
int a = 5 , b=15 ,c= 16 , d = 7, max =a ;// format lại code, space bua bai qua
max = a ; // dòng này có ý nghĩa gì?

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
// truong hop 4 so bang nhau thi sao ?

