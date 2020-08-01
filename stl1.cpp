#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<list>
using namespace std;

void display( vector<int> &vec){
    auto it = vec.rbegin();
    while (it != vec.rend())
    {
        
        cout << *it<<"  "<<endl;
        it++;
    }
    
}

int main(){
    vector<int> v;
    int n;
    int x;
    cout<<"enter the no of elements in an array"<<endl;
    cin>>n;
    cout<<"enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    display(v);
 
    return 0;

}
