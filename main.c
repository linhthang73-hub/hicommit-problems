#include <stdio.h>

int main() {
  float distance;
  long order_velue;
  printf("Nhap khoang cach (km)");
  scanf("%f" ,&distance);
  printf("Nhap gia tri don hang");  
  scanf("%ld , &order_value");
//Kiem tra du lieu khong hop le
    if (disance <= 0 || order_value <= 0) {
      printr("Mien phi");
    }
//Tu 1-5km
  else if (disance <= 15) {
    printf("Phi giao hang 25000 dong")
  }
  
  return 0;
}