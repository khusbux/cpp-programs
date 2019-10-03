#include<iostream>

using namespace std;
int n=5;
int val(int (&arr)[3][3],int i,int j)
{
if(i<0||i>n-1||j<0||j>n-1)
return 0;
else if(arr[i][j]!=1)
    return 0;
else if(arr[i][j]==1)
{
arr[i][j]=2;
return 1+val(arr,i+1,j)+val(arr,i+1,j+1)+val(arr,i+1,j-1)+val(arr,i,j+1)+val(arr,i-1,j+1)+val(arr,i-1,j-1)+val(arr,i,j-1)+val(arr,i-1,j);

}
}
int main()
{

int arr[3][3]={{1,1,0},
               {0,1,0},
               {1,0,0}};
int a,b,i,j,k;
int max=-1,count;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{
if(arr[i][j]==1)
{
count =val(arr,i,j);
}
if(count>max)
{max=count;
}}

}
cout<<max;
}
