#include <bits/stdc++.h>
using namespace std;

string check(int &num){
    if(num>0){
        return "positive";
    }else if(num<0){
        return "negative";
    }else{
        return "zero";
    }
}
int main() {
    
    int n;
    cin>>n;
    cout<<check(n);
    
    return 0;
}