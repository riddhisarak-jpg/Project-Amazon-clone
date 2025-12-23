#include<iostream>
#include<string>
using namespace std;

 /*   bool isAlphaNumeric(char ch) {
     if((ch>='0' && ch<='9') ||
        (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
         return false; 
        }
      bool isvalidPalindrome(string s) {
        int st =0 , end =s.length()-1;
        while(st<=end){
        if(!isAlphaNumeric(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNumeric(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
         return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){ 
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    if(isvalidPalindrome(s)){
        cout<<"The string is a valid palindrome."<<endl;
    }
    else{
        cout<<"The string is not a valid palindrome."<<endl;
    }
    return 0;
}                                                                                       */

int main(){ 
    string s1,s2;
    cout<<"Enter the string: ";
    getline(cin,s1);
     cout<<"Enter the substring: ";
    getline(cin,s2);
    while(s1.length()>0 && s1.find(s2)<s1.length()){
 s1.erase(s1.find(s2),s2.length());//jismese erase karna hai vo s1 jo erase karna hai vo s2 and uski length bhi mention karna
    }
    cout<<"The string after removing the substring is: "<<s1<<endl;
    return 0;
}                   
