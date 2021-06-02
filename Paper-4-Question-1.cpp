#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int __gcd(int a,int b)
{
    if(b==0) return a;
    else return __gcd(b,a%b);
}
void solve(int a[], int size, int r)
{
    r = r% size;
    int nsize = __gcd(r,size);
    for(int i=0;i < nsize;i++)
    {
        int temp = a[i];
        int j=i;
        while(true)
        {
            int k= j+r;
            if(k>=size)
            {
                k=k-size;
            }
            if(k == i)
            {
                break;
            }
            a[j]=a[k];
            j=k;
        }
        a[j]=temp;
    }


    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    solve(a,size,2);

    return 0;

}