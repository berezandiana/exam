#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a[10]; randomize();
    for (int I = 0; I < 10; I++)  a[I] = random(100) - 50;
    int s = 0;
    for (I = 0; I < 10; I++)
        if (a[I] < 0) s += a[i];
    cout << ”s = ” << s << ”\n”;
    getch();
    return 0;
}
{
    int a[10]; randomize();
    for (int I = 0; I < 10; I++)  a[I] = random(100) - 50;
    int min, max, L, k; min = max = a[0]; L = k = 0;
    for (I = 0; I < 10; I++)
        if (a[I] > max) { max = a[I]; k = I; };
        else
            if (a[I] < min) { min = a[I]; L = I; };
    if (L > k) { int t = L; L = k; k = t; }
    for (int p = 1; I = L + 1; I < k - 1; p *= a[I]; I++);
    cout << ”p = ” << p << ”\n”;
    getch();
    return 0;
}
float temp = 0;
for (int j = 0; j < N; j++)
{
    for (int i = 0; i < N - 1; i++)
    {
        if (fabs(p[i]) > fabs(p[i + 1]))
        {
            temp = p[i];
            p[i] = p[i + 1];
            p[i + 1] = temp;
        }
    }
