#include<stdio.h>
#include<limits.h>

void solve(int a[], int size)
{
    int i,f,s;
    if(size < 2)
    {
        printf("#### --- Invalid Input --- ####");
    }
    f=s=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(a[i]<f)
        {
            s=f;
            f=a[i];
        }

        else if( a[i]<s && a[i] != f)
        {
            s=a[i];
        }
    }

    if(s==INT_MAX)
    {
        printf(" NO Second Smallest");
    }
    else{
        printf(" Smallest = %d \n Second Smallest = %d", f,s);

    }


}

int main()
{
    int a[1000],f=0;
    printf("Enter The Array : \n(Enter an Non Integeral Value To Terminate Input)\n";
    while (scanf("%d", &a[f]))
    {
        f++;
    }
    solve(a,f);

    return 0;

}
