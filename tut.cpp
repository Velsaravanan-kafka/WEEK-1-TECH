#include<bits/stdc++.h>
using namespace std;
int main(){
    int xorr=0;
    vector<int> c={1,2,3,1,1,1,3,1};
    for(int i=0;i<c.size()-1;i++){
        xorr=xorr^c[i];

    }
    cout<<xorr;
    return 0;
}