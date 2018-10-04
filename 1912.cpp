#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

double BS(int vetor[], double inicio, double fim, int area, int numTiras){
    double meio, soma = 0;
    meio = (inicio + fim)/2.0;

    for(int i=0;i<numTiras;i++) {
      if((double)vetor[i]>meio) {
         soma += (double)vetor[i] - meio;
      }
    }

    if(abs(soma - (double)area) < 0.0001) return meio;
    else if(soma > (double)area) return BS(vetor, meio, fim, area, numTiras);
    else if(soma < (double)area) return BS(vetor, inicio, meio, area, numTiras);
    return meio;
}

int main(){
    int N, A;

    cin >> N >> A;
    while((N > 0) and (A > 0)){
        int tiras[N];
        double total = 0.0, bigger = 0;
        for(int i=0;i<N;i++){
            cin >> tiras[i];
            total += tiras[i];
            if (bigger < (double)tiras[i]) bigger = (double)tiras[i];
        }
        if(total < A) cout << "-.-" << endl;
        else if(total == A) cout << ":D" << endl;
        else{
            sort(tiras, tiras+N);
            cout << fixed << setprecision(4) << BS(tiras, 0, bigger, A, N) << endl;
        }

        cin >> N >> A;
    }

    return 0;
}
