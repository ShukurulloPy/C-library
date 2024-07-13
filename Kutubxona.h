#include <math.h>
int Kvadratini_hisoblash(int x) {
    return x * x;
}

int Kubini_hisoblash(int x) {
    return x * x * x;
}

int Faktorialni_hisoblash(int x) {
    if (x == 0 || x == 1)
        return 1;
    else
        return x * Faktorialni_hisoblash(x - 1);
}

int Darajaga_oshirish(int b, int e) {
    int r = 1;
    for (int i = 0; i < e; ++i) {
        r *= b;
    }
    return r;
}

int Sondan_tub_yoki_emasligini_aniqlash(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

double Kvadrat_ildizni_hisoblash(double x) {
    return sqrt(x);
}

double Logarifmni_hisoblash(double x) {
    return log(x);
}

int Modul_hisoblash(int x) {
    return abs(x);
}

int Kattasini aniqlash(int a, int b) {
    return (a > b) ? a : b;
}

int Kichigini_aniqlash(int a, int b) {
    return (a < b) ? a : b;
}
