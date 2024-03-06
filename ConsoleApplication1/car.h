#include <iostream>

class masina
{
private:
    char* firma=0;
    double litri;
    double consum;
    double kilometraj;
public:
    void set_firma(char text[]);
    char* get_firma();
    bool set_litri(double x);
    double get_litri();
    bool set_consum(double x);
    double get_consum();
    bool set_kilometraj(double x);
    double get_kilometraj();
    void bisnitar();
    void cursa(double distanta);
};