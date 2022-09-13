#include <iostream>
#include "../lib/StepanPlot/project/include/StepanPlot.h"
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    StepanPlot plt(argc, argv);
    vector<double> X;
    vector<double> Y1, Y2;
    for (double i = -100.0; i < 100.0; i+=0.01) {
        X.push_back(i);
    }
    for (double i = X[0]; i <= X[X.size() - 1]; i+=0.01) {
        Y1.push_back((i*i) - 300.0);
    }
    for (double i = X[0]; i <= X[X.size() - 1]; i+=0.01) {
        if (i > 0.0) {
            Y2.push_back(-(pow((i - 10), 2)) + 200.0);
        } else {
            Y2.push_back(-(pow((i + 10), 2)) + 200.0);
        }
    }
    plt.plot(X, Y1, "heart", df::Brush(1.0, 0.0, 0.0));
    plt.hold(true);
    plt.plot(X, Y2);
    plt.brush(df::Brush(1.0, 0.0, 0.0));
    plt.xlim(-19.9, 19.9);
    plt.ylim(-300.0, 200.0);
    return 0;
}