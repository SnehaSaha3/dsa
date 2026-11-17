#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i ;
    for(i=1;i<=n;i++){
       for(int j=0; j<=n-i;j++){
         cout << " ";
        }
        for(int k=1; k<=i; k++){
                
                cout << "*";
                
        }
        
         cout << endl;
    }
       
    }
   
