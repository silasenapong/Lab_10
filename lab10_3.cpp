#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    string num;
    float sum = 0.0, mean, num2 = 0.0, standard_deviation;
    int n = 0;

    ifstream source;
    ifstream source2;
    source.open("score.txt");
    source2.open("score.txt");

    while (getline(source, num))
    {
        n++;
        sum += stof(num);

        // cout << n << "\t" << sum << endl;
    }

    mean = sum / n;

    while (getline(source2, num))
    {
        num2 += pow(stof(num) - mean, 2);
        // cout << num2 << endl;
    }

    // cout << n << " " << mean << " " << num2 << endl;

    standard_deviation = sqrt((1.0 / n) * num2);

    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << standard_deviation << endl;

    source.close();
    source2.close();
}