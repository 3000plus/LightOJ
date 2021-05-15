/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n, P, Q, gm, Case = 0;
	vector<int>v;
	cin>>T;
	while(T--){
		v.clear();
		int count = 0, sum = 0;
		cin>>n>>P>>Q;
		for(int i=0; i<n; i++){
			cin>>gm;
			v.push_back(gm);
		}
		sort(v.begin(), v.end());
		for(int i=0; i<P; i++){
			sum += v[i];
			if(sum <= Q && i < v.size()){
				++count;
			}
		}
		cout<<"Case "<<++Case<<": "<<count<<endl;
	}
	return 0;
}
