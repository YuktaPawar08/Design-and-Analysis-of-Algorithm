#include<iostream>
using namespace std;

int binarySearch(int array[],int x,int low,int up)
{
if(up>=low)
{
int mid=(low+up)/2;

if(array[mid]==x)
return mid;

if(array[mid]>x)
return binarySearch(array,x,low,mid-1);
return binarySearch(array,x,mid+1,up);
}
return -1;
}

int main()
{
int array[10];
int i,n;
cout<<"\nEnter the size of an array : ";
cin>>n;

cout<<"\nEnter the elements in an array :\n";
for(i=0;i<n;i++)
{
cin>>array[i];
}
int x;
cout<<"\nEnter the element you want to search : ";
cin>>x;

int result=binarySearch(array,x,0,n-1);
if(result==-1)
cout<<"\nThe element is not found";
else
cout<<"\nThe element is found at index : "<<result;
return 0;
}


// OUTPUT (1) :

/*

Enter the size of an array : 4

Enter the elements in an array :
12
45
67
89

Enter the element you want to search : 89

The element is found at index : 3

*/


// OUTPUT (2) :

/*

Enter the size of an array : 5

Enter the elements in an array :
46
39
26
78
98

Enter the element you want to search : 89

The element is not found

*/