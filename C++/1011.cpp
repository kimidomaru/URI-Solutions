#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double raio,volume;
    cin>>raio;
    volume=(raio*raio*raio*3.14159)*4.0/3;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
