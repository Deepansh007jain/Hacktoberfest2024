#include<iostream>
using namespace std;
int main()
{
int a[50],i,n,small;
cout<<"\nEnter the number of elements :";
cin>>n;
cout << "\nInput the array elements :";
for(i=0;i<n;++i)
cin>>a[i];

small=a[0];

for(i=1;i<n;++i)
{

if(a[i]<small)
small=a[i];
}

cout<<"the smallest element is "<<small<<endl;


return 0;
}
