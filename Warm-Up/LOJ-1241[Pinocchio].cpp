/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n, a, Case = 0;
	vector<int>v;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i = 0; i < n; i++){
			cin>>a;
			v.push_back(a);
		}
		int count = 0, prev = 0;
		for(int i = 0; i < n; i++){
			if(i == 0 && v[i] <= 2){
				count = 0;
			}
			else if(i == 0 && v[i] > 2){
				count = ceil(float (v[i]-2)/5);
			}
			else if(v[i] - prev > 0){
				int value = v[i]-prev;
				count += ceil(float (value) / 5);
			}
			prev = v[i];			
		}
		cout<<"Case "<<++Case<<": "<<count<<endl;
		v.clear();
	}
	return 0;
}
