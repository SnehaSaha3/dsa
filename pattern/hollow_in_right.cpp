#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i ;
    int j;
    int k;
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++)
        {
            
            cout << " ";
        }

         for(k=i;k>=1;k--){
            if(i==n || k==1 || i==k){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
    
           cout << endl;
    }
    
}
   
