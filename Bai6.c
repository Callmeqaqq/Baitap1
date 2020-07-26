//
#include<stdio.h>

int main ()
{float chieuDai, chieuNgan;//De bai khong phai so Nguyen nen dung float cho ca truong hop so thuc
printf("Nhap vao chieu dai:");
scanf("%f", &chieuDai);
printf("nhap vao chieu ngan:");
scanf("%f", &chieuNgan);

printf("chu vi la:%f * %f = %f", chieuDai, chieuNgan, chieuDai * chieuNgan);

return 0;
}

