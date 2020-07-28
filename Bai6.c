//
#include<stdio.h>

int main (){
  float chieuDai, chieuNgan;
printf("Nhap vao chieu dai:");
scanf("%f", &chieuDai);
printf("nhap vao chieu ngan:");
scanf("%f", &chieuNgan);

  printf("dien tich la:%f * %f = %f", chieuDai, chieuNgan, chieuDai * chieuNgan);
  printf("\nchu vi la:(%f + %f) *2 = %f", chieuDai, chieuNgan,(chieuDai+chieuNgan)*2);
return 0;
}
