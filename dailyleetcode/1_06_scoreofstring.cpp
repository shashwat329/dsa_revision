#include<iostream>
using namespace std;
int scoreOfString(string s) {
        int count = 0;
        for(int i =0;i<s.size()-1;i++){
           if(int(s[i])>int(s[i+1])){
            count=count+(int(s[i])-int(s[i+1]));
            cout<<count<<endl;
           }
           else{
            count=count+(int(s[i+1])-int(s[i]));
            cout<<count<<endl;
           }
        }
        return count;
    }
int main(){
    string s = "hello";
    cout<<scoreOfString(s)<<endl;
    return 0;
}