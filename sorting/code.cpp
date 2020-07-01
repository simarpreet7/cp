#include<iostream>
using namespace std;
bool compare(int a,int b){
 return a>b;
}
//a>b asc
//a<b desc
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
void selection_sort(int arr[],int n,bool (&compare)(int a,int b)){
	int m_index;
     for(int i=0;i<n-1;++i)
     {   m_index=i;
     	for(int j=i+1;j<n;++j)//min or max
     	{
           if(compare(arr[m_index],arr[j]))
           {
            m_index=j;
           }
           
     	}
     	swap(arr[m_index],arr[i]);
     }
}
void bubble_sort(int arr[],int n,bool (&compare)(int a,int b)){
     int is_swap=0;
     for(int i=0;i<n-1;++i)
     {  is_swap=0;
     	for(int j=0;j<n-i-1;++j)
     	{
           if(compare(arr[j],arr[j+1]))
           {
           swap(arr[j],arr[j+1]);
            is_swap=1;
           }
           
     	}
     	if(is_swap==0){return;}//efficient bubble sort
     	
     }
}
void insertion_sort(int arr[],int n,bool (&compare)(int a,int b)){
     int temp=-1;
     int j=-1;
     for(int i=1;i<n;++i)
     {  
       j=i-1;
       temp=arr[i];
       while(j>=0&&compare(arr[j],temp))
       {
       	arr[j+1]=arr[j];
       	j--;
       }
       arr[j+1]=temp;
     }
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
      const int SIZE=10;
      int arr[SIZE];
      /* test functions */

	return 0;
}
// reference for theory
// https://www.geeksforgeeks.org/selection-sort/
// https://www.geeksforgeeks.org/insertion-sort/
// https://www.geeksforgeeks.org/bubble-sort/