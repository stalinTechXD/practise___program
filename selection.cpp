#include<bits/stdc++.h>
#include<vector>
#include <time.h>
using namespace std;

void selection(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
                swap(v[i],v[j]);
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
    cout<<"enter the size of the vector\n"<<endl;
    cin>>n;
    int x;
    cout<<"enter the intergeres"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    t = clock();
    selection(v);
    t = clock() - t;
    display(v);
    cout << "time taken: " << ((float)t) / CLOCKS_PER_SEC << "seconds" << endl;
    return 0;
}


//selection sort bestcase omega(n^2)
//selection sort averagecase theta(n ^ 2)
//seletion sort bestcase(n ^2)
