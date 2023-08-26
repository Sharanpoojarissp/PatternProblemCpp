#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n = 14;

    // for(int i= 1 ; i<=n ; i++ ){
    //     for (int j = 1; j <= i ; j++){
    //         cout << j <<" "  ;
    //     }
    //     cout<< endl;
    // }
        for(int i=0  ; i<= ((n/2) - 1) ; i++ ){
        for(int j=0 ; j< n-i+1 ; i++){
            cout<< "* " ;
        }
        cout<< endl;

    }
    return 0;
}