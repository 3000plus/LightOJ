/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, N, p, cas=1;
    cin>>T;
    while(T--){
        int sum=0;
        cin>>N;
        for(int i=0; i<N; i++){
            cin>>p;
            if(p>0){
                sum+=p;
            }
        }
        cout<<"Case "<<cas++<<": "<<sum<<endl;
    }
	return 0;
}
