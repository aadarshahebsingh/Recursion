#include <iostream>
#include <vector>
using namespace std;

int subset_sum(vector<int> arr,int target,int n,int i){
    //base case
    if(i==n or target<=0){
        if(target==0)
            return 1;
        else
            return 0;
    }
    // recursive case
    int inc=subset_sum(arr,target-arr[i],n,i+1);
    int exc=subset_sum(arr,target,n,i+1);
    return inc + exc;
}

int main(){
    vector<int> arr{1,2,3,4,5};
    int target=6;
    cout<<subset_sum(arr,target,arr.size(),0)<<endl;
    return 0;
}
