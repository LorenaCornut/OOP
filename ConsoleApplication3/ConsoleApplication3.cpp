#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    NumberList l1;
    int n,x;
    cin >> n;
    l1.Init();
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        l1.Add(x);
    }
    l1.Sort();
    l1.Print();
    return 0;
}
