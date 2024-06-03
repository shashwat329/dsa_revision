#include<iostream>
using namespace std;
int numSteps(string s) {
    int count =0;
    while(s != "1"){
        if (s[s.size()-1]=='0'){
            s.pop_back();
            count++;
        }
        else{
            int last = s.size()-1;
            while (s[last]!='0')
            {
                s[last] ='0';
                last--;
                if(last == -1){
                    s.insert(0,1,'1');
                    break;
                }
            }
            if(s[last]=='0'){
                s[last]='1';
            }
            count++;
        }

    }
    return count;
}
int main(){
    string s1 = "1101";
    string s = "000";
    s.insert(0,1,'1');
    cout<<s<<endl;
    cout<<numSteps(s1)<<endl;

    return 0;

}
