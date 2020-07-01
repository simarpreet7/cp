#include<iostream>
using namespace std;

void read_array(int arr[],int n){
	
  for(int i=0;i<n;++i)
  {
   cin>>arr[i];
  }
}
void print_array(int arr[],int n){
	
  for(int i=0;i<n;++i)
  {
   cout<<arr[i]<<",";
  }
}
void linear_search(int arr[],int n,int k){
	for(int i=0;i<n;++i)
	{
       if(arr[i]==k){cout<<"element found at position : "<<i;return;}
	}
   cout<<"element not found";
}
void binary_search(int arr[],int n,int k)
{
	int start=0,end=n-1;
	int mid=(start+end)/2;
	 while(start<=end)
	 {
	 	mid=(start+end)/2;
	 	if(arr[mid]==k){cout<<"element found at position : "<<mid+1; return;}
	 	else if(k<arr[mid]){end=mid-1;}
	 	else{start=mid+1;}
	 }

   cout<<"element not found";

}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
      const int SIZE=10;
      int arr[SIZE];
      int k;
      cin>>k;//the element needed to be searched
      read_array(arr,SIZE);
      /* test functions */
      binary_search(arr,SIZE,k);

	return 0;
}
// reference for theory
