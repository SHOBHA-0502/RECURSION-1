// #include <bits/stdc++.h>
// using namespace std;
// void replacePi(char input[]){
// if(strlen(input)== 1){
//     return;
// }
// if(input[0] == 'p' && input[1] =='i'){
//     input[0] = '3';
//     input[1] = '.';
//     for(int i = strlen(input) +2; i>2;i--){
//         input[i] = input[i-2];
//     }
//     input[2] = '1';
//     input[3] ='4';
// }

	
//  void small_replcepi = replacePi(input +1);



// }

// int main() {
//     char input[10000];
//     cin.getline(input, 10000);
//     replacePi(input);
//     cout << input << endl;
// }

#include <bits/stdc++.h>
using namespace std;

void replacePiHelper(char str[], int start)
{
    if (str[start] == '\0' || str[start + 1] == '\0') {
        return;
    }
    replacePiHelper(str, start + 1);
    if (str[start] == 'p' && str[start + 1] == 'i') {
        for (int i = strlen(str); i >= start + 2; i--) {
            str[i + 2] = str[i];
        }
        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}
void replacePi(char str[])
{
    replacePiHelper(str, 0);
}
 
    int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    replacePi(str);
    cout << str;
}



