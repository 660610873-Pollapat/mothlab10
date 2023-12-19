#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {
    int count = 0 ;
    double sum = 0;
    double mean, dev , num_2;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        num_2 += pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum/count ;
    dev = sqrt((num_2/count)-pow(mean,2));
    cout << setprecision(3);
    cout << "Number of data = "<< count << '\n';
    cout << "Mean = "<< mean << '\n';
    cout << "Standard deviation ="<< dev;
    return 0;

}