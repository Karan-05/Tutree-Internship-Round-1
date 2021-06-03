#include<iostream>
using namespace std;
void solve(int a[], int size)
{
    int x,y,dist,min=INT_MAX;
    cin>>x>>y;
    for(int i=0;i<size;i++)
    {
       for(int j=i ;j<size;j++)
        {
                if(a[i]==x && a[j]==y || a[j]==x && a[i]==y)
                {
                    dist = abs(j-i);
                    if(dist < min)
                    {
                        min = dist;
                    }
                }
            
        }

    }

    cout<<"Minimum Distance : "<<dist;
    
}

int main()
{
    
    int a[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int size = sizeof(a)/sizeof(a[0]);
    solve(a,size);



}
