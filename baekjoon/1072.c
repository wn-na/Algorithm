#ifdef SHORTCODE
x,y;main(z){scanf("%d%d",&x,&y);z=99-y*100l/x;printf("%.f",z<1?-1:.49+1e2*(x-y)/z-x);}
#endif
#ifndef SHORTCODE
#include <stdio.h>

int main(){
    long x, y;
    int z, result;

    scanf("%d%d", &x, &y);
    z=y * 100l / x;
    /*
      z + 1 = (y + k) * 100 / (x + k)
      => xz + x + kz + k = 100y + 100k
      => 99k - kz = xz + x - 100y
      => (99 - z) * k = x * (z + 1) - 100y
      => k = (x * (z + 1) - 100y) / (99 - z)
	# 99 - z = t, z = 99 - t
	=> k = (x * (100 - t) - 100y) / t
	=> k = (100 * (x - y) - x * t) / t
	=> k = 100 * (x - y) / t - x
      => k = 100 * (x - y) / (99 - z) - x
    */
    result = z > 98? -1: 1e2 * (x - y) / (99 - z) - x + 0.99;
    printf("%d", result);
}
#endif
