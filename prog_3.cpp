#include <bits/stdc++.h>
using namespace std;

double sol(double *s, double *a, double *b, double *c){
    return sqrt(*s*(*s-*a)*(*s-*b)*(*s-*c));
}
int main() {
    
    double a=4;
    double b=3;
    double c=2;
    double s=(a+b+c)/2;
    cout<<sol(&s,&a,&b,&c);
    
    return 0;
}