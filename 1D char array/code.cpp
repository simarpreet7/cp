#include<iostream>
#include<cstring>
using namespace std;

void read_array(char arr[],int n){
	
 cin.getline(arr,n);
}
void print_array(char arr[]){
	
  
   cout<<arr;

}
bool ispallindrome(char arr[],int n){
int i=0,j=n-1;
 while(i<j){
 	if(arr[i]!=arr[j]){return false;}
 	else {i++;j--;}
 }
 return true;
}
void remove_consecutive_duplicates(char a[],int n){
if(n<2) return;//n=0 is already covered below but still..
 int j=0;

   for(int i=1;i<=n;++i){
      if(a[j]!=a[i]){
       j++;
       a[j]=a[i];
      }
   }
}
int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    const int SIZE=20;
     char arr[SIZE];
     read_array(arr,SIZE);
     //cout<<ispallindrome(arr,strlen(arr));
     remove_consecutive_duplicates(arr,strlen(arr));
     print_array(arr);
	return 0;
}
// reference for theory
