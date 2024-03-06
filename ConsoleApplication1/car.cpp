#include "car.h"
#include <iostream>

using namespace std;

void masina::set_firma(char* name)
{
    if (this->firma == 0)
        this->firma = new char[100];

    int sz = strlen(name);
    for (int i = 0; i < sz; i++)
    {
        this->firma[i] = name[i];
    }
}

char* masina::get_firma()
{
    return this->firma;
}

bool masina::set_consum(double x)
{
    if (x < 0) return false;
    else
    {
        this->consum = x;
        return true;
    }
}

bool masina::set_kilometraj(double x)
{
    if (x < 0) return false;
    else
    {
        this->kilometraj = x;
        return true;
    }
}

bool masina::set_litri(double x)
{
    if (x < 0) return false;
    else
    {
        this->litri = x;
        return true;
    }
}

double masina::get_litri()
{
    return this->litri;
}

double masina::get_consum()
{
    return this->consum;
}

double masina::get_kilometraj()
{
    return this->kilometraj;
}

void masina::bisnitar()
{
    if (this->kilometraj <= 1000) this->kilometraj = 0;
    else this->kilometraj -= 1000;
}

void masina::cursa(double distanta)
{
    this->kilometraj += distanta;
    double x;
    x = distanta * this->consum / 100;
    this->litri -= x;
}