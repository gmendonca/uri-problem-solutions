#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <math.h>

int main(){

    int n, x, y, totalx, totaly, count;
    count = 0;

    while(1){
        scanf("%d\n", &n);
        if(n == 0) break;
        if(count != 0) printf("\n");
        totalx = totaly = 0;
        std::map<int,int> Resident;

        for(int i = 0; i < n; i++){
            scanf("%d %d\n", &x, &y);
            totalx += x;
            totaly += y;
            std::pair<std::map<int,int>::iterator,bool> ret;
            ret = Resident.insert(std::pair<int,int>(y/x,x));
            if (ret.second==false){
                Resident[y/x] += x;
            }
        }
        count++;

        printf("Cidade# %d:\n", count);

        std::map<int,int>::const_iterator final_iter = Resident.end();
        --final_iter;
        for(std::map<int,int>::const_iterator it = Resident.begin(); it != Resident.end(); ++it){
            if(it == final_iter) printf("%d-%d\n", it->second, it->first);
            else printf("%d-%d ", it->second, it->first);
        }
        printf("Consumo medio: %.2f m3.\n", floor(100 * (float)totaly/totalx) / 100);

    }

    return 0;
}
