#include <stdio.h>
  int main() {
  int code;
  scanf("%d , &code");

  switch (code) {
    case 1 :
      printf("XEP LOAI XUAT SAC\n");
      break;
      case 2 :
      printf("XEP LOAI GIOI\n");
      break;
      case 3 :
      printf("XEP LOAI KHA\n");
      break;
      case 4 :
      printf("XEP LOAI TRUNG BINH\n");
      break;
    default:
      printf("KHONG HOP LE\n");
  }
  return 0;
}