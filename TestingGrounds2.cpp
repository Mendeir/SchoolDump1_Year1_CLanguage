#include <iostream>

using namespace std;

int main(){
     char t;
     cin>>t;
     if (t>='A' && t<='Z') cout<<"UPPER";
     else if(t>='a' && t<='z') cout<<"LOWER";
     else cout<<"ERROR";
     return 0;
     }
