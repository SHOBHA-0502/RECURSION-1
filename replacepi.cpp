#include <bits/stdc++.h>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
    for(int i =0; input[i]!= '\0'; i++){
        if(input[i] =='p' && input[i+1] =='i'){
            input[i] = '3';
            input[i+1] ='.';
            for(int j = strlen(input)+2; j>i+1 ; j--){
                input[j] =input[j-2];
            }
            input[i+2] = '1';
            input[i+3] ='4';       
        
    }
}
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
