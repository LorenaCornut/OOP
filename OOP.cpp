#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

char cuv[100][100];
char text[100];
int n;

void Ordonare()
{
    bool ok=0;
    while (!ok)
    {
        ok=1;
        for(int j=0;j<n-1;j++)
            if (strlen(cuv[j])<strlen(cuv[j+1]))
            {
                ok=0;
                char aux[100];
                strcpy(aux,cuv[j]);
                strcpy(cuv[j],cuv[j+1]);
                strcpy(cuv[j+1],aux);
            }
            else if (strlen(cuv[j])==strlen(cuv[j+1]))
            {
                if (strcmp(cuv[j],cuv[j+1])>0)
                {
                    ok=0;
                    char aux[100];
                    strcpy(aux,cuv[j]);
                    strcpy(cuv[j],cuv[j+1]);
                    strcpy(cuv[j+1],aux);
                }
            }
    }
}
int main()
{
    ///problema 2
    scanf("%[^\n]",text);
    char* p=strtok(text," ");
    while (p!=0)
    {
        strcpy(cuv[n++],p);
        p=strtok(NULL," ");
    }
    Ordonare();
    for(int j=0;j<n;j++) printf("%s\n",cuv[j]);
    return 0;
}