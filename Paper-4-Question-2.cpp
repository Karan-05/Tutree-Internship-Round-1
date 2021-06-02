#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
bool eval(int a,int b)
{
    return abs(a) < abs(b);
}
void solve(int a[], int size)
{
    sort(a,a+size,eval);
    int min=INT_MAX, save;
    for(int i=1;i<size;i++)
    {
        if(abs(a[i-1]+a[i]) <= min)
        {
            min = abs(a[i - 1] + a[i]);
            save=i;
        }
    }

    cout<<"The Smallest Sum :\n"<<a[save-1]<<" + "<<a[save]<<" = "<<min;

}

int main()
{


    //int a[] = {1, 2, 4, 5, 6};
    int a[] = {1, 60, -10, 70, -80, 85};

    int c = sizeof(a) / sizeof(a[0]);
    solve(a,c);

}