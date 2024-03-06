#include "NumberList.h"
#include <iostream>
using namespace std;

void NumberList::Init()
{
    this->count = 0;
}
void NumberList::Add(int x)
{
    int size = 10;
    if (this->count >= size)
    {
        size *= 2;
        int* aux = (int*)realloc(numbers, size * sizeof(int));
        numbers = aux;
        numbers[this->count] = x;
        this->count++;
    }
    else
    {
        this->numbers[this->count] = x;
        this->count++;
    }

}
void NumberList::Sort()
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 0; i < this->count - 1; i++)
        {
            if (this->numbers[i] > this->numbers[i + 1])
            {
                int aux = this->numbers[i];
                this->numbers[i] = this->numbers[i + 1];
                this->numbers[i + 1] = aux;
                sorted = false;
            }
        }
    }
}

void NumberList::Print()
{
    for (int i = 0; i < this->count; i++)
        printf("%d ", this->numbers[i]);
    printf("\n");
}