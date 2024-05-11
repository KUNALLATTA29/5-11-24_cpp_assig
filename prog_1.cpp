#include <bits/stdc++.h>
using namespace std;

typedef int (*operation) (int, int, int );

int sum(int a, int b, int c){
    return a+b+c;
}

int sub(int a, int b, int c){
    return a-b-c;
}

int mul(int a, int b, int c){
    return a*b*c;
}

int cal(int a, int b, int c, operation op){
    return op(a,b,c);
}

int main() {
    int a=10;
    int b=5;
    int c=2;
    
    cout<<cal(a,b,c,sum)<<endl;
    cout<<cal(a,b,c,sub)<<endl;
    cout<<cal(a,b,c,mul)<<endl;
    
    
    
    return 0;
}