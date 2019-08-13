#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int tempo,velocidade;
    double total;
    cin>>tempo>>velocidade;
    total=(tempo*velocidade);
    total=total/12;
    printf("%.3f\n",total);
    return 0;
}
