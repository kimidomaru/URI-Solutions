#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,quant;
    double sal;
    cin>>n>>quant>>sal;
    sal*=quant;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",sal);
    return 0;
}