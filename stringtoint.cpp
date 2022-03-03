#include <bits/stdc++.h>
using namespace std;
int stringtonumber_helper(char input[],int len){
    if(len ==0 ){
        return input[len]-'0';
    }
    int ans = stringtonumber_helper(input, len-1);
    int a = input[len] -'0';
    return ans*10 + a;
}
int stringToNumber(char input[]) {
     int len = strlen(input);
     return stringtonumber_helper(input,len-1);
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

// #include <bits/stdc++.h>
// int stringToNumber_helper(char input[], int len){
//     if(len==0)
//         return input[len]-'0';
//     //recyrsive calls
//     int ans = stringToNumber_helper(input, len-1);
//     //small work
//     int a = input[len]-'0';
//     return  ans*10+a;
    
// }
// int stringToNumber(char input[]) {
//     // Write your code here
//    int len = strlen(input);
//     return stringToNumber_helper(input, len-1);
// }