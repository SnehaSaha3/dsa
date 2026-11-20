#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i ;
    int j;
    int k;
    int l;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout << " ";

        }
            for(k=1;k<=2*i-1;k++){
            cout << "*";
            
        }
        cout << endl;
     
    }
}