#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string,int> m;
    m["abc"]=1;
    m["def"]=2;
    cout<<m["abc"]<<endl;
    return 0;

}