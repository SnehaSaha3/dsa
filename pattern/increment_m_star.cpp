#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int i ;
    for(i=0;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=1; k<=i; k++ ){
                cout << "*";
            }
        }
        cout << endl;
    }
   
}