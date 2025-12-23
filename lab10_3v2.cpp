#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()

{

    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0, mean, standard_deviation;

    string textline;

    ifstream source("score.txt");

    while (getline(source, textline))
    {
        sum += stof(textline);
        sum_of_square += pow(stof(textline), 2);
        count++;
    }

    mean = sum / count;

    standard_deviation = sqrt(((1.0 / count) * sum_of_square) - pow(mean, 2));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << standard_deviation;
}