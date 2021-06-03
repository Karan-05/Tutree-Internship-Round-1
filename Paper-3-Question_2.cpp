#include <iostream>
using namespace std;


void solve(int size)
{
    int i,j;
    for(int i=1;i<=size;i++)
    {
        for(int j=1 ;j<=2*size;j++)
        {
            if(i<j)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }

            if(i <= (2*size)-j)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=2*size;j++)
        {
            if(i> (size-j + 1))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            if((i+size) > j)
            {
                cout<<" ";
            } 
            else {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}
int main()
{
    int a;
    cout<<"Enter The Size : ";
    cin>>a;
    solve(a);

}
