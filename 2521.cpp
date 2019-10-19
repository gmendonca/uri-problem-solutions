#include <bits/stdc++.h>

using namespace std;

#define PI acos(-1)

double to_rad(int x) {

    return (x * PI) / 180;

}

int main() {

    int r, lo, la;

    while (scanf("%d%d%d", &r, &la, &lo) != EOF) {
        
        double lo_rad = to_rad(lo);
        double la_rad = to_rad(la);

        double x = abs(r * cos(la_rad) * sin(lo_rad));
        double y = abs(r * sin(la_rad));
        double z = abs(r * cos(la_rad) * cos(lo_rad));

        if (lo < 0 && int(1000 * x) >= 5) x *= -1;
        if (la < 0 && int(1000 * y) >= 5) y *= -1;
        if (abs(lo) < 90 && int(1000 * z) >= 5) z *= -1;

        printf("%.2lf %.2lf %.2lf\n", x, y, z);

    }
    

}
