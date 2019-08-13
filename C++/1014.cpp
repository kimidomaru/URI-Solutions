#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int distancia;
    double litros,total;
    cin>>distancia>>litros;
    total=distancia/litros;
    printf("%.3lf km/l\n",total);
    return 0;
}
