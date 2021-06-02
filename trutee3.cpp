#include<iostream>
using namespace std;

void solve(int a[], int size)
{
    int j=a[size-1];

    cout<<j<<" ";
    for(int i=size-2;i>0;i--)
    {
        if(a[i] > j)
        {
            j=a[i];
            cout<<a[i]<<" ";
        }
    }

    cout<<"\n";
}
int main()
{
    cout << "### Enter Non Integer to end Array Input ###\n";
        int a[1000],
        c = 0;
    cout <<"Enter The Array : \n ";    
    while(scanf("%d",&a[c]))
    {
        c++;
    }

    solve(a,c);

}