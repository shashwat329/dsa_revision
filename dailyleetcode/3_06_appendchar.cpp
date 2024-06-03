// question: 2486. Append Characters to String to Make Subsequence
#include<iostream>
using namespace std;
    int appendCharacters(string s, string t) {
        int s1 = 0;
        int s2 = 0;
        while(s1<s.size()&& s2<t.size()){
            if(s[s1]==t[s2]){
                s2++;
            }
            s1++;
        }
        return t.size()-s2;
    }
int main(){
    string s="a";
    string t= "a";
    cout<<appendCharacters(s,t)<<endl;
    return 0;
}