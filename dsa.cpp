#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i ;
    for(i=n;i>=1;i--){
        for(int j=0;j<=n-i;j++){
            cout << " ";
        }
        for(int k=i; k>=1; k--){
                
                cout << "*";
                
        }
        
         cout << endl;
    }
       
    }
   
