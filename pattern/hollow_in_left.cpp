#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i ;
    int j;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i || i==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
           cout << endl;
    }
    
}
   
