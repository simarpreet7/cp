#include<iostream>
#include<algorithm>
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
void print_subarray(int arr[],int n){//O(n^3)
	for(int i=0;i<n;++i)
	{
		for(int j=i;j<n;++j)
		{
			for(int k=i;k<=j;++k)
			{
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}
	}
}
int max_subarray_sol2(int arr[],const int n){//O(n^2)
  int sum=0,csum[n],max_sum=0;
   for(int i=0;i<n;++i)
   {
    csum[i]=arr[i]+csum[i-1];
   }

  for(int i=0;i<n;++i)
  {
    for(int j=i;j<n;++j)
    {
     
      sum=csum[j]-csum[i-1];
      if(max_sum<sum){max_sum=sum;}
    }
  }
  return max_sum;
}
int max_subarray_sol3(int arr[],int n){//O(n) kadanes algoritm
  int max_cur=arr[0],max_sum=0;
  for(int i=1;i<n;++i)
  {
   max_cur=max(arr[i],max_cur+arr[i]);
   //if(max_cur < 0)
           // max_cur = 0
    if(max_sum<max_cur){max_sum=max_cur;}
  }
  if(max_sum>=0)
  return max_sum;
  else 
  return 0;
}//https://www.youtube.com/watch?v=86CQq3pKSUw
//basically maxsubarr(a+b+c)=maxoftwo(maxsubarr(a+b)+c,c)
void xsum2elements_sol1(int arr[],int n,int x){//O(n^2)
  
  for(int i=0;i<n;++i)
  {
    for(int j=i+1;j<n;++j)
    { 
      if(arr[i]+arr[j]==x){cout<<i<<" "<<j<<endl;}

  }

}
}
int binary_search(int arr[],int n,int k)
{
  int start=0,end=n-1;
  int mid=(start+end)/2;
   while(start<=end)
   {
    mid=(start+end)/2;
    if(arr[mid]==k){return mid;}
    else if(k<arr[mid]){end=mid-1;}
    else{start=mid+1;}
   }

  return -1;

}
void xsum2elements_sol2(int arr[],int n,int x){//O(nlogn)
  //if sorted 
  int result;
  for(int i=0;i<n;++i)
  {
      result=binary_search(arr+i+1,n-i-1,x-arr[i]);
      if(result!=-1){
        cout<<i<<" "<<result+1+i<<endl;
      }

  }
}
void xsum2elements_sol3(int arr[],int n,int x){//O(n)
  //if sorted 

  for(int i=0,j=n-1;i<j;)
  {
      if(arr[i]+arr[j]==x){cout<<i<<" "<<j<<endl;i++;j--;}
      else if(arr[i]+arr[j]<x){i++;}
      else {j--;}

  }
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     
	return 0;
}
// reference for theory
