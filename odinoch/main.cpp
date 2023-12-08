using namespace std;
#include <QCoreApplication>
#include <cstring>
#include <iostream>

class Odinoch {
public:
    static Odinoch* getInstance() {
        static Odinoch instance;
        return &instance;
    }
    void test() {
        cout << "The pattern works!" << endl;
    }

private:
    Odinoch() { }
};

int main() {
    Odinoch::getInstance()->test();
    return 0;
}
