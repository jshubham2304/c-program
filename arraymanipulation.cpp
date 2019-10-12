#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    long long int arr[n]={0};
    long long int max=0;
    for(int i=0;i<m;i++)
    {
        long long int aa,bb;
        long long int kk;
        cin>>aa;
        cin>>bb;
        cin>>kk;
        for(int j=aa-1;j<bb;j++)
        {
            arr[j]+=kk;
            if(max<arr[j])
            {
                max=arr[j];
            }
        }
        
    }
   
    cout<<max;
}
