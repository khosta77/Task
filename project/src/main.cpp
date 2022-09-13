#include <iostream>
#include "../lib/StepanPlot/project/include/StepanPlot.h"
#include <math.h>

int main(int argc, char** argv) {
    StepanPlot plt(argc, argv);
    {  // Тест 1
        vector<double> X;
        vector<double> Y1, Y2;
        for (double i = -1000.0; i <= 1000.1; i+=0.1) {
            X.push_back(i);
            Y1.push_back(cos(i/20));
            Y2.push_back(sin(i/20));
        }

        plt.plot(X, Y1, "sin and cos", df::Brush(1.0, 0.0, 0.0));
        plt.hold(true);
        plt.plot(X, Y2);
        plt.brush(df::Brush(0.0, 0.0, 1.0));
        plt.hold(false);
        plt.xlim(-50.0, 50.0);
        plt.grid(true);
    }
    return 0;
}