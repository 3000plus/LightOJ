/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, x1, y1, x2, y2, n, x, y, Case = 0;
	cin>>T;
	while(T--){
		cout<<"Case "<<++Case<<":"<<endl;
		cin>>x1>>y1>>x2>>y2;
		cin>>n;
		while(n--){
			cin>>x>>y;
			if((x1 <= x && x2 >= x) && (y1 <= y && y2 >= y)){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}
