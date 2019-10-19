#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    //freopen("arvire.in", "r", stdin);
    map <string, int> arvere;
    map <string, int>::iterator it;

    int n, qtd;
    string lenha = "";
    double percente;

    cin >> n;
    cin.get();
    for(int i=0;i<=n;i++){
        qtd = 0;
        arvere.clear();
        if(i > 1) cout << endl;
        while(getline(cin, lenha)){
            if(lenha == "") break;
            arvere[lenha]++;
            qtd++;
        }
        cout << fixed << setprecision(4);
        for (it=arvere.begin();it!=arvere.end();it++) {
            percente = (it->second * 100.00)/qtd;
            cout << it->first <<" " << percente << endl;
        }
    }

    return 0;
}
