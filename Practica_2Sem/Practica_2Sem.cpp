#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

double funcion(double a, double b) {
    double r=0;
    r = ((b + a) * (b - a)) / pow(a, b);
    return r;
}
int main()
{
    double m, n;
    cout << "Digite un numero: ";
    cin >> m;
    cout << "Digite un numero: ";
    cin >> n;

    cout << "\n\t EL RESULTADO ES: " << funcion(m, n) << endl;
    system("pause");
    return 0;
}
