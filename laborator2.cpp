#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

/// Problema 1 -> implementarea si testarea clasei

/*class NumberList
{
    int numbers[10];
    int count;
public:
    void Init(); // count will be 0
    bool Add(int x); // adds X to the numbers list and increase the data member count.
    // if count is bigger or equal to 10, the function will return false
    void Sort(); // will sort the numbers vector
    void Print(); // will print the current vector
};

void NumberList::Init()
{
    this->count = 0;
}

bool NumberList::Add(int x)
{
    if (this->count >= 10) return false;
    else
    {
        this->numbers[this->count] = x; ///se incepe de la 0
        this->count++;
    }
    return true;
}

void NumberList::Sort()
{
    bool ok = 0;
    while (!ok)
    {
        ok = 1;
        for(int i=0;i<this->count-1;++i)
            if (this->numbers[i] > this->numbers[i + 1])
            {
                int aux = this->numbers[i];
                this->numbers[i] = this->numbers[i + 1];
                this->numbers[i + 1] = aux;
                ok = 0;
            }
    }
}

void NumberList::Print()
{
    for (int i = 0; i < this->count; ++i) cout << this->numbers[i] << " ";
}

int main()
{
    NumberList v;
    ///initializam vectorul numbers din v
    v.Init();///count=0;
    ///adaugam elementele
    int x;
    cin >> x;
    while (x != 0)
    {
        v.Add(x);
        cin >> x;
    }
    v.Sort();
    v.Print();
    return 0;
}*/


///Problema 2

class elev
{
private:
    char nume[10];
    double mate, eng, ist, medie;
public:
    void set_nume(char n[]);
    char* return_nume();
    bool set_mate(double nr);
    double return_mate();
    bool set_eng(double nr);
    double return_eng();
    bool set_ist(double nr);
    double return_ist();
    double return_medie();
};

void elev::set_nume(char n[])
{
    strcpy_s(nume, n);
}

char* elev::return_nume()
{
    return nume;
}

bool elev::set_mate(double nr)
{
    if (nr < 1 || nr>10) return false;
    else 
    {
        mate = nr;
        return true;
    }
}

double elev::return_mate()
{
    return mate;
}

bool elev::set_eng(double nr)
{
    if (nr < 1 || nr>10) return false;
    else
    {
        eng = nr;
        return true;
    }
}

double elev::return_eng()
{
    return eng;
}

bool elev::set_ist(double nr)
{
    if (nr < 1 || nr>10) return false;
    else
    {
        ist = nr;
        return true;
    }
}

double elev::return_ist()
{
    return ist;
}

double elev::return_medie()
{
    medie = (mate + eng + ist) / 3.0;
    return medie;
}

int compara_nume(elev e1, elev e2)
{
    if (strcmp(e1.return_nume(), e2.return_nume()) == 0) return 0;
    if (strcmp(e1.return_nume(), e2.return_nume())<0) return -1;
    if (strcmp(e1.return_nume(), e2.return_nume())>0) return 1;
}

int compara_mate(elev e1, elev e2)
{
    if (e1.return_mate() == e2.return_mate()) return 0;
    if (e1.return_mate() < e2.return_mate()) return -1;
    if (e1.return_mate() > e2.return_mate()) return 1;
}

int compara_eng(elev e1, elev e2)
{
    if (e1.return_eng() == e2.return_eng()) return 0;
    if (e1.return_eng() < e2.return_eng()) return -1;
    if (e1.return_eng() > e2.return_eng()) return 1;
}

int compara_ist(elev e1, elev e2)
{
    if (e1.return_ist() == e2.return_ist()) return 0;
    if (e1.return_ist() < e2.return_ist()) return -1;
    if (e1.return_ist() > e2.return_ist()) return 1;
}

int compara_medii(elev e1, elev e2)
{
    if (e1.return_medie() == e2.return_medie()) return 0;
    if (e1.return_medie() < e2.return_medie()) return -1;
    if (e1.return_medie() > e2.return_medie()) return 1;
}

int main()
{
    elev e1, e2;
    char nume1[10], nume2[10];
    cin >> nume1 >> nume2;
    e1.set_nume(nume1);
    e2.set_nume(nume2);
    double mate1, mate2;
    cin >> mate1 >> mate2;
    e1.set_mate(mate1);
    e2.set_mate(mate2);
    double eng1, eng2;
    cin >> eng1 >> eng2;
    e1.set_eng(eng1);
    e2.set_eng(eng2);
    double ist1, ist2;
    cin >> ist1 >> ist2;
    e1.set_ist(ist1);
    e2.set_ist(ist2);
    cout << compara_nume(e1, e2) << "\n";
    cout << compara_mate(e1, e2) << "\n";
    cout << compara_eng(e1, e2) << "\n";
    cout << compara_ist(e1,e2) << "\n";
    cout << compara_medii(e1, e2);
    return 0;
}