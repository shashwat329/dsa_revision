#include<iostream>
#include<vector>
using namespace std;

 void reverseString(vector<char>& s) {
        int a=0 ; 
        int e = s.size()-1;
        while(a<e){
            swap(s[e],s[a]);
            a++;e--;
        }
    }
int main(){
   vector<char> s;
   s.push_back('s');
   s.push_back('h');
   s.push_back('a');
   s.push_back('s');
   s.push_back('h');
   s.push_back('w');
   s.push_back('a');
   s.push_back('t');


    reverseString(s);

    
    for(int i =0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}