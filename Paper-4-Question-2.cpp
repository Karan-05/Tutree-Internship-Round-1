#include<iostream>
#include<vector>
#include<set>
using namespace std;
void solve(int a[], int size)
{
    cout<<"The Repeating Elements are : \n";
    for(int i=0;i<size;i++)
    {
        if(a[abs(a[i])] >= 0)
        {
            a[abs(a[i])] = -a[abs(a[i])];
        }
        else{
            cout<<abs(a[i])<<" ";
        }
    }

}

int main()
{
    int n;
    int v[1000];

    cout<<"Enter Size : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    solve(v,n);
 
}
