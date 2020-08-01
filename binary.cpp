#include<iostream>
#include<vector>
#include<algorithm>

 

int main(){
    vector<int> v;
    int n,x;
    int key;
    int count;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    cout<<"enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {

        cin>>x;
        v.push_back(x);
    }
    cout<<"enter the key element to be searched"<<endl;
    cin>>key;

    count = 0
    while (count < v.size())
    {
        if(v[count]==key)
        {
            cout<<"element found at the location"<<count+1;
        }
        else
        {
            cout<<"failed"<<endl;
        }

        count++;
        
    }
    return 0;
    
}