#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void delatstart(vector<int> &v){
    for(int i =0;i<v.size()-1;i++){
        v[i]=v[i+1];
    }
    v.pop_back();
}

int main(){
    vector<int> v = {10,21,14,5,7,1,2};
    for(auto it: v){
        cout<<it<<" ";
    }cout<<endl;
    delatstart(v);
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin());
     for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
}