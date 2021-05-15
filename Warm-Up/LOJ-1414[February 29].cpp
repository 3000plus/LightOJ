/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long T, res, n, n1, n2, n3, n4;
	string a, b;
	map<string,int>m;
	char c;
	
	m["January"] = 1;
    m["February"] = 2;
    m["March"] = 3;
    m["April"] = 4;
    m["May"] = 5;
    m["June"] = 6;
    m["July"] = 7;
    m["August"] = 8;
    m["September"] = 9;
    m["October"] = 10;
    m["November"] = 11;
    m["December"] = 12;
    
    cin>>T;
    
    for(int i = 1; i <= T; i++){
    	cin>>a>>n1>>c>>n2;
        cin>>b>>n3>>c>>n4;

        if(m[a] > 2) n2++;
        if(m[b]<2 || (m[b]==2 && n3<29)){
            n4--;
        }

        long long leap, leap4, leap100, leap400;
        leap4 = (n4/4-((n2-1)/4));
        leap100 =  (n4/100-((n2-1)/100));
        leap400 =  (n4/400-((n2-1)/400)) ;

        leap = leap4 + leap400 - leap100;
       printf("Case %lld: %lld\n",i,leap);
	}
	return 0;
}
