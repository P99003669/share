#include<iostream>
using namespace std;
#include "provident.h"
#include "professional.h"
int inhand(int n,int bonus)
{
    float prf,avg;
   prf=provfund(n);
    n=n-bonus-prof_tax()-2400;
    avg=n/12;
    return avg;
}
 