#include <iostream>
using namespace std;

class LayangLayang;

class BelahKetupat {
private:
    double sisi;

public:
    void input();
    double keliling();
};

class LayangLayang {
private:
    double d1, d2, sisi1, sisi2;
};

class LayangLayang {
    private:
    double d1, d2, sisi1, sisi2;

public:
    void input();
    double luas();
    double keliling();
};

void LayangLayang::input() {
    cout << "Input d1, d2, sisi1, sisi2: ";
    cin >> d1 >> d2 >> sisi1 >> sisi2;

}

double LayangLayang::luas() {
    return 0.5 * d1 * d2;
}

double LayangLayang::keliling() {
    return 2 * (sisi1 + sisi2);
}

void BelahKetupat::input() {
    cout << "Input sisi: ";
    cin >> sisi;
}
