/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n, m, Case = 0;
	int arr[101];
	cin>>T;
	while(T--){
		memset(arr,0,sizeof(arr));
		cin>>n>>m;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		while(m--){
			char c;
			cin>>c;
			if(c=='S'){
				int sum;
				cin>>sum;
				for(int i=0; i<n; i++){
					arr[i] += sum;
				}
			}
			else if(c=='M'){
				int mul;
				cin>>mul;
				for(int i=0; i<n; i++){
					arr[i] *= mul;
				}
			}
			else if(c=='D'){
				int div;
				cin>>div;
				for(int i=0; i<n; i++){
					arr[i] /= div;
				}
			}
			else if(c=='P'){
				int y, z;
				cin>>y>>z;
				swap(arr[y],arr[z]);
			}
			else if(c=='R'){
				reverse(arr, arr+n);
			}
		}
		cout<<"Case "<<++Case<<":"<<endl;
		for(int i=0; i<n; i++){
			i == 0 ? cout <<arr[i] : cout<<" "<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}
