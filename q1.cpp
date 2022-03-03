#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin >>t ;
    int p = t;
    while(t--){
        long long int n ,m ;
        cin>>n >>m;
        long long int arr[n];
        long long count = 0 ;
        
        
        for(int i =0 ; i<n ; i++){
            cin>>arr[i];
            count += arr[i];
        }
        
        int rm;
        rm = count %m;
        
        
        
        
        cout <<"Case"<< " #" <<p-t<<": " << rm <<" "<<endl;
        count =0 ;
        
        
        
    }
    
    
}