//1. Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)

#include <iostream>
#include <string>
using namespace std;

// Base class Cricketer
class Cricketer {
protected:
    string name;
    string team;
    int matches;

public:
    // Constructor
    Cricketer(string n = "", string t = "", int m = 0) {
        name = n;
        team = t;
        matches = m;
    }

    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setTeam(string t) {
        team = t;
    }

    void setMatches(int m) {
        matches = m;
    }

    // Getter functions
    string getName() {
        return name;
    }

    string getTeam() {
        return team;
    }

    int getMatches() {
        return matches;
    }
};

// Derived class Batsman
class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    string bestPerformance;

public:
    // Constructor
    Batsman(string n = "", string t = "", int m = 0, int tr = 0, string bp = "") 
        : Cricketer(n, t, m) {
        totalRuns = tr;
        averageRuns = 0.0;
        bestPerformance = bp;
    }

    // Setter functions
    void setTotalRuns(int tr) {
        totalRuns = tr;
    }

    void setBestPerformance(string bp) {
        bestPerformance = bp;
    }

    // Calculate average runs
    void calculateAverageRuns() {
        if (getMatches() > 0) {
            averageRuns = (double)totalRuns / getMatches();
        } else {
            averageRuns = 0.0;
        }
    }

    // Input data
    void inputData() {
        string n, t, bp;
        int m, tr;

        cout << "Enter batsman's name: ";
        cin.ignore();
        getline(cin, n);
        setName(n);

        cout << "Enter team name: ";
        getline(cin, t);
        setTeam(t);

        cout << "Enter number of matches: ";
        cin >> m;
        setMatches(m);

        cout << "Enter total runs: ";
        cin >> tr;
        setTotalRuns(tr);

        cin.ignore();
        cout << "Enter best performance: ";
        getline(cin, bp);
        setBestPerformance(bp);

        calculateAverageRuns();
    }

    // Display data
    void displayData() {
        cout << "Name: " << getName() << endl;
        cout << "Team: " << getTeam() << endl;
        cout << "Matches: " << getMatches() << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;

    batsman.inputData();
    batsman.displayData();

    return 0;
}
