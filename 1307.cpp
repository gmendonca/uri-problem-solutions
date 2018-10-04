#include <iostream>
#include <cstdlib>

using namespace std;

int GCD(int u, int v){
    if(v > 0){
        return GCD(v, u%v);
    }
    else return u;
}

int main(){

    int n, x1, x2;
    string s1, s2;

    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> s1 >> s2;
        x1 = strtol(s1.c_str(),NULL,2);
        x2 = strtol(s2.c_str(),NULL,2);
        if (x2 > x1) swap(x1,x2);
        cout << "Pair #" << i << ": ";
        if (GCD(x1,x2)>1) cout <<  "All you need is love!" << endl;
        else cout << "Love is not all you need!" << endl;

    }

    return 0;
}
