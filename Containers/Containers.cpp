#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
    // Standard Static Array
    int N1[3];
    N1[0] = 5;
    cout << N1[0] << endl;

    // Static Array Class
    array<int, 5> N2;
    N2[0] = 34;
    N2[1] = 10;
    cout << N2.size() << endl;

    // Dynamic Array
    vector<int> N3;
    cout << N3.size() << endl;
    N3.push_back(66);
    N3.push_back(35);
    N3.push_back(43);

    for (int I = 0; I < N3.size(); I++) {
        cout << N3[I] << endl;
    }

    for (auto I : N3) {
        cout << I << endl;
    }

    cout << N3[2] << endl;
    cout << N3.size() << endl;

    //N3.front();

    // Stack
    stack<float> F1;
    F1.push(34);
    F1.push(23);
    F1.push(56);
    F1.pop();
    cout << F1.top() << endl;

    // String
    string Name = "Harrison";
    Name[0] = 'B';
    cout << Name << endl;

    // C String
    const char* Str = "Wells";
    //Str[5] = 'R';
    cout << Str << endl;
}