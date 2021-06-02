#include <iostream>
using namespace std;

void solve(int a[] , int a1 , int b[], int b1)
{
    int uni[a1+b1];
    int intersection[(a1<b1)?a1:b1];

    int i=0,j=0,k=0,h=0;
    while( i<a1 && j<b1)
    {
        if(a[i]<b[j])
        {
            uni[k++]=a[i++];
        }
        else if (b[j] < a[i])
        {
            uni[k++]=b[j++];
        }
        else{
            uni[k++]=a[i++];
            intersection[h++]=a[i++];
            j++;
        }

    }

    while(i<a1)
    {
        uni[k++] = a[i++];
    }
    while(j<b1)
    {
        uni[k++] = b[j++];
    }

    cout<<"\n Union : ";
    for(int i=0;i<k;i++)
    {
        cout<<uni[i]<<" ";
    }
    cout<<"\n Intersection : ";
    for(int i=0;i<h;i++)
    {
        cout<<intersection[i]<<" ";
    }


}
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 3, 5, 7};

    int c = sizeof(a) / sizeof(a[0]);
    int d = sizeof(b) / sizeof(b[0]);

    solve(a,c,b,d);
}