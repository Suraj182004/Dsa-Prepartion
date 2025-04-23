//Used for problems involving sorted arrays, linked lists, and palindrome checking.

//Example: Checking if a string is a palindrome.

#include <iostream>
using namespace std;

bool isPalindrome(string s){
    int left=0;
    int right=s.size()-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if(isPalindrome(s)){
        cout<<"The string is a palindrome."<<endl;
    } 
}