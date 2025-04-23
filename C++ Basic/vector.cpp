#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  int n;
  cout<<"Enter the size of vector: ";
  cin>>n;
  
  // Use a regular for loop to input n elements
  cout<<"Enter " << n << " elements: ";
  for(int i=0; i<n; i++){
    int element;
    cin>>element;
    v.push_back(element);
  }
  
  // Print the vector elements
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" "; 
  }
  cout<<endl;
  return 0;
}