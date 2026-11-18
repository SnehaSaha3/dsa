#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i ;
    int m;
    cin >> m;

    for(i=1;i<=n;i++){
        for(int k=1;k<=m;k++){
           
      
        if(i==1 || i==n || k==1 || k==m){
            cout << "*";
        }
        else{
            cout << " ";
         }
          }
           cout << endl;
    }
    
}
   
