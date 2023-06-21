#include <iostream>
using namespace std;

int climbing_ladder(int n){
    if(n<0){
        return 0;
    }
    //Base case
    if(n==0){
        return 1;
    }
    // Recursive Case
    return climbing_ladder(n-1)+climbing_ladder(n-2)+ climbing_ladder(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<climbing_ladder(n)<<endl;
    return 0;
}
