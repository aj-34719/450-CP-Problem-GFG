
//....... replace "pi" with "3.14" in a string ........

#include<bits/stdc++.h>
using namespace std;


void replacePi(string s){
    if(s.length()==0)
      return;

    if(s[0]=='p' && s[1] == 'i'){
        cout << "3.14";
        replacePi(s.substr(2));
    }  
    else {
        cout << s[0];
        replacePi(s.substr(1));
    }
}



int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);

       string s;
       getline(cin, s);
      
      replacePi(s);

    return 0;
}