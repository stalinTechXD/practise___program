#include<bits/stdc++.h>
#include<vector>
#include<time.h>
using namespace std;


void bubble(vector<int> &v)
{
    for(int i = 0; i< (v.size())-1;i++)
    {
        for(int j=0;j<(v.size())-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<"\n";
}

int main(){
    vector<int> v;
    int n;
    clock_t t;
    cout<<"enter the size of the vector"<<endl;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    t = clock();
    bubble(v);
    t = clock() - t;
    display(v);
    cout << "time taken: " << ((float)t) / CLOCKS_PER_SEC << "seconds" << endl;
    return 0;
}