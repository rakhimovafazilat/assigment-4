#include <iostream>
using namespace std;
int main () {
    int fazilat=1;
   
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
        fazilat*=arr[i];
    }
    cout <<fazilat;
    
    return 0;
}
