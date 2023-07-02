#include <iostream>
#include <string>
using namespace std;
class TBook {
private:
    string Na;
    string Au;
    string Co;

public:
    TBook() {
        Na = "";
        Au = "";
        Co = "";
    }
    TBook(string n, string a, string c) {
        Na = n;
        Au = a;
        Co = c;
    }
    void SNa(string n) {
        Na = n;
    }
    void SAu(string a) {
        Au = a;
    }
    void SCo(string c) {
        Co = c;
    }
    string GNa() const {
        return Na;
    }
    string GAu() const {
        return Au;
    }
    string GCo() const {
        return Co;
    }
};

int main()
{
    TBook book1;
    book1.SNa("A certain book. Story 1");
    book1.SAu("Unknown");
    book1.SCo("Appear out of thin air");
    TBook book2("A certain book. Story 2", "Unknown", "appears after reading 1 book");
    cout << "First Book: " << book1.GNa() << ", " << book1.GAu() << ", " << book1.GCo() << endl;
    cout << "Second Book: " << book2.GNa() << ", " << book2.GAu() << ", " << book2.GCo() << endl;

    return 0;
}
