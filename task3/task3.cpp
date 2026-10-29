#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int saraX, saraY;
double calDistance(int x, int y) { return sqrt(pow(x - saraX, 2) + pow(y - saraY, 2)); }
int evaluateDistance(int d1, int d2, int d3) { if (d1 <= d2 && d1 <= d3) return 1; else if (d2 <= d1 && d2 <= d3) return 2; else return 3; }
int main() {
    srand(time(0));
    saraX = rand();
    saraY = rand();

    int x1 = rand(), y1 = rand();
    int x2 = rand(), y2 = rand();
    int x3 = rand(), y3 = rand();

    int d1 = (x1 - saraX) * (x1 - saraX)
        + (y1 - saraY) * (y1 - saraY);

    int d2 = (x2 - saraX) * (x2 - saraX)
        + (y2 - saraY) * (y2 - saraY);

    int d3 = (x3 - saraX) * (x3 - saraX)
        + (y3 - saraY) * (y3 - saraY);

    int nearest = evaluateDistance(d1, d2, d3);

    cout << "Your Current Location is:" << endl;
    cout << "longitude: " << saraX << endl;
    cout << "latitude: " << saraY << endl;

    cout << "Distance to Supermarket 1: "
        << calDistance(x1, y1) << endl;
    cout << "Distance to Supermarket 2: "
        << calDistance(x2, y2) << endl;
    cout << "Distance to Supermarket 3: "
        << calDistance(x3, y3) << endl;

    cout << "Supermarket #" << nearest
        << " is the nearest one" << endl;

    return 0;
}
