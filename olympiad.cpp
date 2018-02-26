#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main () {
    int part = 0;
    int score = 0;

    cin >> part;

    set<int> scores;
    for (int i = 0; i < part; i++ ) {
        cin >> score;
        if (score != 0) {
            scores.insert(score);
        }
    }

    cout << "The number of ways to choose a subset of participants that will receive diplomas is " << scores.size() << endl;


    return 0;
}