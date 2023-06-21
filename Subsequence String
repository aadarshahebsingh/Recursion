#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void subsequence(string s,vector<string> &v,string o){
    // base case
    if(s.size()==0){
        v.push_back(o);
        return;
    }
    // recursive case
    char ch=s[0];
    string reduced_input=s.substr(1);
    // includes
    subsequence(reduced_input,v,o+ch);
    //excludes
    subsequence(reduced_input,v,o);
}
bool compare(string s1,string s2){
    if(s1.length()==s2.length()){
        return s1<s2;
    }
    return s1.length()<s2.length();
}
int main(){
    string str;
    cin>>str;
    string o="";
    vector<string> ans;
    subsequence(str,ans,o);
    sort(ans.begin(),ans.end(),compare);
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
