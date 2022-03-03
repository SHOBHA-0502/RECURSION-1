#include<bits/stdc++.h>
using namespace std;

void replacepihelper(char input[],int start){
  if(input[start] ='\0' || input[start+1] =='\0'){
      return;
  }  
    replacepihelper(input,start+1);
        if(input[0] == 'p' && input[1] =='i'){
    input[0] = '3';
    input[1] = '.';
    for(int i = strlen(input) +2; i>2;i--){
        input[i] = input[i-2];
    }
    input[2] = '1';
    input[3] ='4';
}

    }

void replacePi(char input[]) {
	replacepihelper( input, 0);

}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
