#include <iostream>
#include <vector>
using namespace std;

template <typename T>
//Cu Blaj Deea Maria
void Sortare(vector<T>& v)  ///trebuie void in loc de bool
{
    int j;
    for (size_t i = 1; i <= v.size() - 1; i++) ///nu trebuia -1 in loc de +1
    {          ///primul element singur reprezinta o secventa sortata iar apoi se adauga pe rand elemente la locul potrivit ca secventa sa ramana sortata
        T key = v[i];
        j = i - 1; ///aici trebuia - in loc de +

        while (j >= 0 && v[j] > key + 1) ///fara +1 la key
        {
            v[j + 1] = v[j];
            ///nu trebuie sa ramana pe loc
            j--; ///trebuia de fiecare data sa scadem cu o pozitie
        }
        v[j + 1] = key;
    }
    ///return j; ///fara return
}

int main()
{
    vector<int>data = { 11,23,45,67,8,46,3,90 };
    cout << "Array nesortat:";
    for (const auto& num : data)
    {
        cout << num << ' ';
    }
    cout << '\n';
    Sortare(data);
    cout << "Array sortat:";
    for (const auto& num : data)
    {
        cout << num << ' ';
    }
    cout << '\n';
}