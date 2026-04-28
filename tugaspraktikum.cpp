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

public:
    void input();
    double luas();
    double keliling();

    friend class BelahKetupat;
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

double BelahKetupat::keliling() {
    return 4 * sisi;
}

int main() {
    LayangLayang l;
    BelahKetupat b;

    l.input();
    b.input();

cout << "Luas Layang-Layang: " << l.luas() << endl;
cout << "Keliling Layang-Layang: " << l.keliling() << endl;
cout << "Keliling Belah Ketupat: " << b.keliling() << endl;


    return 0;
}