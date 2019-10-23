#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    double xFirstOld, yFirstOld;
    double xSecondOld, ySecondOld;
    double xFirstNew, yFirstNew;
    double xSecondNew, ySecondNew;

    for (int i = 1; i <= n; i++) {
       
        scanf("%lf%lf", &xFirstOld, &yFirstOld);
        scanf("%lf%lf", &xSecondOld, &ySecondOld);
        scanf("%lf%lf", &xFirstNew, &yFirstNew);
        scanf("%lf%lf", &xSecondNew, &ySecondNew);

        double xHole, yHole;

        bool isFirst = false, isSecond = false;
        bool xDef = false, yDef = false;

        double dxFirst = xFirstNew - xFirstOld;
        double dyFirst = yFirstNew - yFirstOld;

        double aFirst, bFirst;
        
        if (dxFirst == 0 && dyFirst == 0) {

            yHole = (yFirstNew + yFirstOld) / 2;
            yDef = true;

            xHole = (xFirstNew + xFirstOld) / 2;
            xDef = true;

        } else if (dxFirst == 0) {

            yHole = (yFirstNew + yFirstOld) / 2;
            yDef = true;

        } else if (dyFirst == 0) {

            xHole = (xFirstNew + xFirstOld) / 2;
            xDef = true;

        } else {

            aFirst = -(dxFirst / dyFirst);
            double midX = (xFirstNew + xFirstOld) / 2;
            double midY = (yFirstNew + yFirstOld) / 2;
            bFirst = midY - aFirst * midX;
            isFirst = true;

        }
        
        double dxSecond = xSecondNew - xSecondOld;
        double dySecond = ySecondNew - ySecondOld;

        double aSecond, bSecond;

        if (dxSecond == 0 && dySecond == 0) {

            yHole = (ySecondNew + ySecondOld) / 2;
            yDef = true;

            xHole = (xSecondNew + xSecondOld) / 2;
            xDef = true;

        } else if (dxSecond == 0) {

            yHole = (ySecondNew + ySecondOld) / 2;
            yDef = true;

        } else if (dySecond == 0) {

            xHole = (xSecondNew + xSecondOld) / 2;
            xDef = true;

        } else {

            aSecond = -(dxSecond / dySecond);
            double midX = (xSecondNew + xSecondOld) / 2;
            double midY = (ySecondNew + ySecondOld) / 2;
            bSecond = midY - aSecond * midX;
            isSecond = true;

        }

        if (isFirst && isSecond) {

            yHole = (aFirst*bSecond - aSecond*bFirst) / (aFirst - aSecond);
            xHole = (yHole - bFirst) / aFirst;

        } else if (isFirst) {

            if (xDef) {
                
                yHole = aFirst * xHole + bFirst;

            } else if (yDef) {

                xHole = (yHole - bFirst) / aFirst;

            }
            
        } else if (isSecond) {

            if (xDef) {
                
                yHole = aSecond * xHole + bSecond;

            } else if (yDef) {

                xHole = (yHole - bSecond) / aSecond;

            }

        }

        printf("Caso #%d: %.2lf %.2lf\n", i, xHole, yHole);

    }
    

}
