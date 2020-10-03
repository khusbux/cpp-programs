#include<bits/stdc++.h>
using namespace std;
void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num,count=0,temp, i,j;
    vector<int> a;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(i=0;i<num;i++)
    {
        if(a[i]==i+1)
            continue;
        else
        {
            swap(a[i],a[a[i]-1]);
            count++;
            i--;
        }      
    }
    
    cout<<count;
    return 0;
}
