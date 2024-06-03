#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
    string cleanString(string s) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        for (int i = 0; i < s.size(); i++) {
            if (int(s[i]) < 97 || int(s[i]) >= 123) {
                if(s[i]<47||s[i]>57){
                    s.erase(i, 1);
                i = i - 1;
                }
            }
        }
        return s;
    }
    bool isPalindrome(string s) {
        s = cleanString(s);
        for(int i =0,j = s.size()-1;i<j;i++,j--){
            if(s[i]!=s[j]){
                return false;
            }
        }
    
            return true;
    }
int main(){

    string st = "Marge, let's \"[went].\" I await {news} telegram.";
    cout<<cleanString(st)<<endl;
    cout<<isPalindrome(st)<<endl;
    return 0;
}