#include<bits/stdc++.h>

using namespace std;
#define vi vector<int> ;
#define vii vector<vector<int> > ; 

int bs(int *arr ,int n ,int element ){
	int s =0,e=n;
	while(s<e){
	int mid = (s+e)/2;
	if(element == arr[mid]){
      	return mid; 
	}
	else if(arr[mid]<element){
		s = mid+1;
    }
    else{
    	e =mid-1;
    }
}
    return s ;

}


void solve(){
 int n , k;
 cin>>n >> k;
 int arr[n];
 for(int i=0;i<n;i++) cin>>arr[i];
 	cout << bs(arr,k,n) << endl;
}


int main()
{
	int t;
	cin>> t;
	while(t--){
		solve();
	}

return 0;
}