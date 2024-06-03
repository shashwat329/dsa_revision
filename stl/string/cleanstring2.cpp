// u are given a task to clean a string and remove all the specail char from the and also lowercase the cap 

#include<iostream>
using namespace std;
string cleanString(string s) {
    string result;  
    for(int i =0;i<s.size();i++){
        s[i] = tolower(s[i]);
    }
    for(int i =0;i<s.size();i++){
        if(!isalnum(s[i])){
            s.erase(i,1);
        }
    }  
    return s;
}
int main(){
    string s = "shashwatISMynamenotshashWAt23@!gmail.com";
    cout<<s<<endl;
    s = cleanString(s);
   cout<<s<<"\n";
    return 0;
}
