#include<iostream>
#include<string>
using namespace std;
    bool is palindrome ( string str){
    int left=0;
    int right = str.lemgth()-1;
    while (left<right){
        if(str [left]! = str [right])
        return flase;
        left++;
        right--;
    }
  }
     return true;
     int main(){
    string str;
    cout<<"enter a string ";
    cin>>str;
    if( palindrome [str])
    cout<<str<<" is a palindrome";
    else
    cout<<str <<" is not a palindrome";
    return 0;
  }