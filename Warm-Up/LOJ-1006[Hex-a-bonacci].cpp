/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;


int a, b, c, d, e, f;
int arr[10001];

int fn( int n ) {
    if( n == 0 )  return arr[0]=a % 10000007;
    if( n == 1 )  return arr[1]=b % 10000007;
    if( n == 2 )  return arr[2]=c % 10000007;
    if( n == 3 )  return arr[3]=d % 10000007;
    if( n == 4 )  return arr[4]=e % 10000007;
    if( n == 5 )  return arr[5]=f % 10000007;
    if(arr[n]!=-1){
    	return arr[n];
	}
    else{
    	return arr[n] =  (fn(n-1) % 10000007 + fn(n-2) % 10000007+ fn(n-3) % 10000007+ fn(n-4) % 10000007+ fn(n-5) % 10000007+ fn(n-6) % 10000007 ) % 10000007;
	}
}
int main() {
    int n, caseno = 0, cases;
    
    scanf("%d", &cases);
    while( cases-- ) {
    	memset(arr,-1,sizeof(arr));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) );
    }
    
    return 0;
}
