#include <bits/stdc++.h>
using namespace std;

bool check(int *num){
    if(*num%2==0){
        return true;
    }else{
        return false;
    }
}
int main() {
    
    int n;
    cin>>n;
    bool k=check(&n);
    if(k){
        cout<<"even";
    }else{
        cout<<"odd";
    }
    
    return 0;
}