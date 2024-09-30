#include<iostream>
using namespace std;
void reverse(char *str){
    if (*str){
        reverse(str+1);
        cout<<*str;

    }
}
int main(){
    char s[50];
    cout<<"Enter a string:";
    cin>>s;
    cout<<"Reversed string is:";
    reverse(s);
    cout<<endl;
    return 0 ;
}