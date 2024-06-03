#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5,20);
    for(vector<int>::iterator it = v.begin();it <v.end();it++){
        cout<<*(it)<<endl;
    }
    for(int it = 0;it<v.size();it++){
        cout<<v[it]<<" ";
    }
    return 0;
}