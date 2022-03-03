// Change in the given string itself. So no need to return or print anything
// #include<bits/stdc++.h>

// void replacePi(char input[]) {
// 	// Write your code here
//   if( input[0]=='\0' || input[1]=='\0' ){
//         return;
//     }
    
//     // pipipi
//     replacePi(input+1);
//     // pi3.143.14
//     int count=0;
//     for(int i=0;input[i]!='\0';i++){
//         count=count+1;
//     }
//     if(input[0]=='p' && input[1]=='i'){
//         for(int i=count;i>=2;i--){
//             input[i+2]=input[i];
//             // i=i+2;
//         }
//         input[0]='3';
//         input[1]='.';
//         input[2]='1';
//         input[3]='4';
//         // input[count]='\0';
//     }
// }
// Change in the given string itself. So no need to return or print anything

#include <iostream>
using namespace std;
void replacePi(char input[]) {
    // Write your code here
   
    if(input[0] =='\0' && input[1] =='\0'){
        return;
    }
    replacePi(input+1);
     int count =0 ;
    for(int i =0 ; input[i]!='\0' ;i++){
        count ++;
    }
    if(input[0] =='p' && input[1] =='i'){
        for(int i = count ; i>=2; i--){
            input[i+2] = input[i];
        }
        input[0] ='3';
        input[1] = '.';
        input[2] ='1';
        input[3] ='4';

    }
    
    
    
  
}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

