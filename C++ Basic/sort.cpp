#include <iostream>
#include <vector>
#include <algorithm>  // Add this header for sort function
using namespace std;

int main() {
    vector<int> v = {1,8,3,4,5};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}