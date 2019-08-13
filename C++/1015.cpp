#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,total;
    cin>>x1>>y1;
    cin>>x2>>y2;
    total=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    total=sqrt(total);
    printf("%.4f\n",total);
    return 0;
}
