#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char nome[20];
    double sal,vendas,total;
    cin>>nome>>sal>>vendas;
    total=sal+(vendas*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
