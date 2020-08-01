#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
    int n;
    int x;
    vector<int> v;
    cout<<"enter the size of an interger"<<endl;
    cin>>n;
    cout<<"enter the no of  element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto elem :v)
        cout<<elem<<endl;
    return 0;    
}