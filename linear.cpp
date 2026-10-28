#include<iostream>
using namespace std;
int linear_search(int a[], int n, int x)
{
    for (int i=0;i<n;i++)

{
     if (a[i]==x)
 {
    return i;    
 }   
} 
return -1;
}
int main()
{
int n;
int a[20];
cout<<"Enter the size of array:";
cin>>n;

cout<<"Enter"<<n<<" integers:"<<endl;
for (int i=0;i<n;i++)
{
cin>>a[i];    
}
int x;
cout<<"Enter the target element to search for:";
cin>>x;
int location = linear_search (a,n,x);
if(location !=-1)
{
cout<<"Element" <<x<< "Found in the araay." <<endl;
}
else    
{
cout<<"Element" <<x<< "not Found in the array." <<endl;    
}
return 0;
}

output:

PS D:\samruddhikatore> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'linear.exe'
Enter the size of array:5
Enter5 integers:
10 20 30 40 50
Enter the target element to search for:20
Element20Found in the araay.
PS D:\samruddhikatore\output> 




