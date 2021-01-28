/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

// algorithm idea - https://code.iamkate.com/articles/hakmem-item-175/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long N, lowestBit, leftBits, changedBits, rightBits;
    cin>>T;
    for(int t = 1; t <= T; t++)
    {
        cin>>N;
        lowestBit = N & -N;
        leftBits = N + lowestBit;
        changedBits = N ^ leftBits;
        rightBits = (changedBits / lowestBit) >> 2;
        N = leftBits | rightBits;
        cout<<"Case "<<t<<": "<<N<<endl;
    }

    return 0;
}
