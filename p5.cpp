#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n = 4;

    for(int i= 1 ; i<=n ; i++ ){
        // for (int j = i; j <= n ; j++){
        for (int j = 0 ; j < n-i+1 ; j++){
            cout << "*" <<" "  ; 
        }
        cout<< endl;
    }
    return 0;
}