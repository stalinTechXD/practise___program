#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,10,11,9,100};
    int n = sizeof(arr)/sizeof(int)
    int key;
    cin>>key;
    auto it = find(arr,arr+n );
    cout<<it<<endl;

    return 0;

}