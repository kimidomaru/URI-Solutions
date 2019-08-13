#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int cod,n;
    double total,valor;
    cin>>cod>>n>>valor;
    total=n*valor;
    cin>>cod>>n>>valor;
    total+=n*valor;
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}
