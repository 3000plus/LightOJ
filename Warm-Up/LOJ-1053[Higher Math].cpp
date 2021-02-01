/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, Case=0, arr[3];
	cin>>T;
	while(T--){
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);
		if(pow(arr[0],2)+pow(arr[1],2)==pow(arr[2],2)){
			cout<<"Case "<<++Case<<": yes"<<endl;
		}
		else{
			cout<<"Case "<<++Case<<": no"<<endl;
		}
	}
	return 0;
}
