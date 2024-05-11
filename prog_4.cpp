#include <bits/stdc++.h>
using namespace std;

double change(double *tem){
    return (*tem * 9/5)+32;
}
int main() {
    
    double tem=38;
    cout<<change(&tem);
    
    return 0;
}