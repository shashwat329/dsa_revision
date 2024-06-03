//insert element in the starting,middle and end of a vector
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void  begininsert(vector<int> &v,int n)
{
    v.push_back(n);
    int last = v.size()-1;
    for(int i =0;i<v.size()-1;i++){
        swap(v[i],v[last]);
    }
    v.insert(v.begin(),8);
}
void endinsert(vector<int> &v,int n){
    v.push_back(n);
}
void middleinsert(vector<int> &v,int n){
    v.insert(v.begin()+v.size()/2,n);
}
int main(){
    vector<int> v;
    v = {1,2,4,6,2,12,343,123};

    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    // begininsert(v,4);
    // endinsert(v,111);
    middleinsert(v,55);
 for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}