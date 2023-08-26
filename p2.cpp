#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void pattern(int n){
      for(int i= 0 ; i<n ; i++ ){
        for (int j = 0; j < i ; j++){
            cout << "* " ;
        }
        cout<< endl;
    }
}

int main(){
    int t;
    cout<<" enter the number of testcases you want to run" << endl;
    cin>> t;

    for(int i=0 ; i<t ; i++ ){
        int n;
        cout<< "enter the number " << endl;
        cin >> n ;
        pattern(n);
        cout<< endl;
    }

  
    return 0;
}