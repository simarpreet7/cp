#include<iostream>
#include <algorithm>
using namespace std;
  const int SIZE=3;

void input_2d(int arr[][SIZE],int row,int col){
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			cin>>arr[i][j];
		}
	}
}
void output_2d(int arr[][SIZE],int row,int col){
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
void wave_print(int arr[][SIZE],int row,int col){
     for(int i=0;i<col;++i){
     	if(i%2==0){
             for(int j=0;j<row;++j){
             	cout<<arr[j][i]<<" ";
             }
     	}
     	else
     	{
     		  for(int j=row-1;j>=0;--j){
             	cout<<arr[j][i]<<" ";
             }
     	}
     }
}
void spiral_print(int arr[][SIZE],int row,int col){
	int sr=0,er=row-1,sc=0,ec=col-1;
     while(sr<=er&&sc<=ec){
     	for(int i=sc;i<=ec;++i){
     		cout<<arr[sr][i];
     	}//->
     	sr++;

     	for(int i=sr;i<=er;++i){
     		cout<<arr[i][ec];
     	}//->
     	ec--;
        if(sc<ec){
     	for(int i=ec;i>=sc;--i){
     		cout<<arr[er][i];
     	}//->
        er--;
        }
        if(er>sr){
     	for(int i=er;i>=sr;--i){
     		cout<<arr[i][sc];
     	}//->
     	sc++;
        }

     }
}
void rev_2d(int arr[][SIZE],int row,int col){
   for(int i=0;i<row;++i){
 	 reverse(arr[i],arr[i]+col);
      }
}
void transpose_2d(int arr[][SIZE],int row,int col){
for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			if(i<j){swap(arr[i][j],arr[j][i]);}
		}
		
	}
}
void rotate_2d_anticlock(int arr[][SIZE],int row,int col){
	rev_2d(arr,SIZE,SIZE);
    transpose_2d(arr,SIZE,SIZE);
}
//could be solved by linear search O(n^2)
//could be solved by binary search O(n^logn)
//using O(n)=2n solution
void staircase_search(int arr[][SIZE],int row,int col,int x){
    int select=arr[0][col-1];
    int i=0;
    int j=col-1;
    while(i<row&&j>=0){
    	if(select==x){cout<<i<<" "<<j<<endl;return;}
    	else if(select<x){cout<<i<<" "<<j<<endl;i++;}
    	else {cout<<i<<" "<<j<<endl;j--;}
    	select=arr[i][j];

    }
    cout<<"element not found";

}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
      int arr[SIZE][SIZE];
      /* test functions */
      input_2d(arr,SIZE,SIZE);
      
     staircase_search(arr,SIZE,SIZE,76);
    	return 0;
}