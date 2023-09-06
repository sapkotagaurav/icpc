#include <bits/stdc++.h>

using namespace std;

int main()
{
    float ax, ay, bx, by, cx, cy, x, y, m1x, m2x, m1y, m2y, G1, G2, g1, g2, r, c, d, e, r_t;
    char x_sign, y_sign, x2_sign, y2_sign, e_sign;
    while (scanf("%f %f %f %f %f %f", &ax, &ay, &bx, &by, &cx, &cy) != EOF)
    {
        m1x = (ax + bx) / 2;
        m2x = (bx + cx) / 2;
        m1y = (ay + by) / 2;
        m2y = (by + cy) / 2;
        G1 = (by - ay) / (bx - ax);
        G2 = (cy - by) / (cx - bx);
        g1 = -1 / G1;
        g2 = -1 / G2;
        x = (m2y - m1y + g1 * m1x - g2 * m2x) / (g1 - g2);
        y = (g1 * (x - m1x)) + m1y;
        cout << setprecision(3);
        x_sign = x > 0 ? '-' : '+';
        y_sign = y > 0 ? '-' : '+';
        r_t = (ax - x) * (ax - x) + (ay - y) * (ay - y);
        r = sqrt(r_t);
        c = -2 * x;
        d = -2 * y;
        e = r_t - pow(x, 2) - pow(y, 2);
        x2_sign = c > 0 ? '+' : '-';
        y2_sign = d > 0 ? '+' : '-';
        e_sign = e < 0 ? '+' : '-';

        cout << fixed << setprecision(3) << "(x " << x_sign << " " << abs(x) << ")^2 + (y " << y_sign << " " << abs(y) << ")^2 = " << r << "^2";
        cout << endl;
        cout << fixed << setprecision(3) << "x^2 + y^2 " << x2_sign << " " << abs(c) << "x " << y2_sign << " " << abs(d) << "y " << e_sign << " " << abs(e) << " = 0";
        cout << endl
             << endl;
    }
}