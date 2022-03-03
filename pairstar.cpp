//    if(input[0] =='\0' && input[1] =='\0'){
//         return;
//     }
//     replacePi(input+1);
//      int count =0 ;
//     for(int i =0 ; input[i]!='\0' ;i++){
//         count ++;
//     }
//     if(input[0] =='p' && input[1] =='i'){
//         for(int i = count ; i>=2; i--){
//             input[i+2] = input[i];
//         }
//         input[0] ='3';
//         input[1] = '.';
//         input[2] ='1';
//         input[3] ='4';

//     }
// Change in the given string itself. So no need to return or print the changed string.
#include<iostream>
using namespace std;
void pairStar(char input[]) {
    if(input[0] =='\0' && input[1] =='\0'){
        return;
    }
   pairStar(input +1);
    int count =0 ;
    for(int i =0 ; input[i]!='\0' ;i++){
        count = count +1;
    }
    if(input[0] ==input[1]){
        for(int i =count ; i>=1; i--){
            input[i+1] = input[i];
        }
        input[1] = '*';
    }

}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
