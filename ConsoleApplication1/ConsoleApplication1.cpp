#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    masina m1;
    bool x;
    char text[100];
    cin >> text;
    m1.set_firma(text);
    ///cout << m1.get_firma() << "\n";
    double l;
    cin >> l;
    x = m1.set_litri(l);
    cout << m1.get_litri() << "\n";
    double km;
    cin >> km;
    x = m1.set_kilometraj(km);
    cout << m1.get_kilometraj() << "\n";
    double c;
    cin >> c;
    x = m1.set_consum(c);
    cout << m1.get_consum() << "\n";
    m1.bisnitar();
    cout << m1.get_kilometraj() << "\n";
    double dist;
    cin >> dist;
    m1.cursa(dist);
    cout << m1.get_litri() << " " << m1.get_kilometraj();
    return 0;
}
