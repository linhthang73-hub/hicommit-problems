#include <stdio.h>

int main() {
  float dtb;
  float drl;
  scanf("%f %f" , &dtb ,&drl );
  int hoc_luc = 0;
  if (dtb >= 9.0) {
    hoc_luc = 3;
  } else if (dtb >= 8.0) {
    hoc_luc = 2; 
  } else if (dtb >= 7.0) {
    hoc_luc = 1;
  } else {
    hoc_luc = 0;
  }
  int ren_luyen = 0 
  if (drl >= 90) {
    ren_luyen = 3;
  } else if (drl >= 80) {
    ren_luyen = 2; 
  } else if (drl >= 7.0) {
    ren_luyen = 1;
  } else {
    ren_luyen = 0;
  }
   
      return 0;
}