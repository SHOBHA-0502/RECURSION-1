#include<bits/stdc++.h>
using namespace std ;
int main(){
int t ;
cin >> t;
int p =t;
while(t--){
string s ;
cin >>s ;
int l = s.size();
if(s[l-1]=='y'){
      cout <<"Case"<< " #" <<p-t<<": " << s <<" is ruled by nobody."<<endl;

}
else if(s[l-1]=='a'||s[l-1]=='e'||s[l-1]=='i'||s[l-1]=='o'||s[l-1]=='u'){
        cout <<"Case"<< " #" <<p-t<<": " << s <<" is ruled by Alice."<<endl;
}
else if(s[l-1]<=122 && s[l-1]>=97){
    cout<<"Case"<< " #" <<p-t<<": " << s <<" is ruled by Bob."<<endl;
    
}
}

}
