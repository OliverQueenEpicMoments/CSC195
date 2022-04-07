#include <iostream>
#include <string>

using namespace std;

class Sandwitch {
public:
    Sandwitch() {
        cout << "Constructor\n";
    }

    Sandwitch(string Name, float Price) : Name (Name), Price (Price), IsHot (false) {
        cout << "Constructor\n";
        //this->Name = Name;
        //this->Price = Price;
    }

    void Read() {
        cout << "Enter name: ";
        cin >> Name;
    }
    void Write();

private:
    string Name;
    float Price;
    bool IsHot;
};

void Sandwitch::Write() {
    cout << "Name: " << Name << endl;
}

struct Point {
    int X;
    int Y;
};

int main() {
    int Mx;
    int My;

    Point point;
    point.X = 300;
    point.Y = 200;

    {
        // Scope
        int J = 5;
        {
            J = 10;
        }
    }

    {
        Sandwitch sandwitch("Ham", 4.5);
            sandwitch.Read();
            sandwitch.Write();
    }

    cout << "End of program.\n";

    enum class Difficulty {
        Easy,
        Medium,
        Hard
    };

    enum class Eggs {
        Easy,
        Scrambled
    };

    Difficulty D = Difficulty::Easy;
    if (D == Difficulty::Easy) cout << "Easy\n";

    union Data {
        int I;
        float F;
        bool B;
    };

    Data data;
    data.I = 10;
    data.F = 23.5f;
    data.B = true;

    cout << data.I << endl;
}


/*/~Sandwitch() {
    cout << "Destructor";
};*/