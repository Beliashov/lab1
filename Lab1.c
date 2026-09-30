#include <stdio.h>
#include <math.h>

int main() {
  float y0 = 1, y1 = 2, x0 = 0, x1 = 1, hx = 0.4, hy = 0.3;
  
  for (float xn = x0; xn <= x1; xn += hx) {
    for (float yn = y0; yn <= y1; yn += hy) {
      printf("x = %f; y = %f; ", xn, yn);
      if (xn*yn <= -1) {
        float u1 = pow(M_E, 2.0) * sqrt(log(pow(xn, 4) + 2));
        float u2 = xn * acos(xn/yn);
        if (u1 >= u2) {
        printf("U = %f\n", u1);
    } else {
        printf("U = %f\n", u2);
    }
}
else if (xn * yn > -1 && xn * yn < 2) {
printf("U = 0\n");
}
else if (xn * yn >= 2) {
float u1 = sqrt(fabs(xn * xn - yn));
float u2 = cos(xn * pow(yn - 1, 1.0 / 3.0));
        if (u1 <= u2) {
        printf("U = %f\n", u1);
    } else {
        printf("U = %f\n", u2);
        }
      }
    }
  }
  return 0;
  }
