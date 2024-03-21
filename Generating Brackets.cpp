#include <iostream>
// #include <vector>
using namespace std;

void generate_brackets(string output,int n,int open, int close,int i){
    // cout<<i<<endl;
    if(i==2*n){
        // cout<<"hei"<<endl;
        cout<<output<<endl;
        return;
    }
    // opening bracket
    if(open<n){
        // cout<<"hello"<<endl;
        generate_brackets(output+'(',n,open+1,close,i+1);
    }

    // closing bracket
    if(close<open){
        generate_brackets(output+')',n,open,close+1,i+1);
    }
}

int main(){
    string output="";
    int n;
    cin>>n;
    generate_brackets(output,n,0,0,0);
    return 0;
}
