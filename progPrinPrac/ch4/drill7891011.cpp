//
// Created by Tyler Williams on 2019-07-24.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

double conversions(const string& quantity, const string& units);

int main() {
    string quantity{};
    string units{};
    string val{};
    string c = ("c");
    string f = ("f");
    string i = ("i");
    string m = ("m");
    std::size_t pos{};

    vector<double> elements_meters;

    double min{100};
    double max(0);
    double sum{0};
    int n_elements{0};
    int j = 0;

    while (j < 10) {


        cout << "\nEnter some quantity with units (cm, in, ft or m)\n";
        while (getline(cin, val)) {
            pos = val.find(c);
            if (pos <= val.size())
                break;
            pos = val.find(i);
            if (pos <= val.size())
                break;
            pos = val.find(f);
            if (pos <= val.size())
                break;
            pos = val.find(m);
            if (pos <= val.size())
                break;

            if (pos > val.size()) {
                cout << "Units not recognized\n";
                break;
            }
        }
        quantity = val.substr(0, pos);
        units = val.substr(pos);

        double md;
        md = conversions(quantity, units);


        if (md < min)
            min = md;

        if (md > max)
            max = md;

        sum += md;

        ++j;
        n_elements = j;

        elements_meters.push_back(md);



    }
    cout << "\nMin(m) entered so far == " << min << "\tMax(m) entered so far == " << max
         << "\nSum(m) == " << sum << "\tValues entered == " << n_elements << endl;

    cout << "\nValues(m) in vector (unsorted)\t";
    for (double n : elements_meters) {
        cout << n << " ";
    }

    cout << "\nValues(m) in vector (sorted)\t";
    std::sort(elements_meters.begin(), elements_meters.end());
    for (double k:elements_meters) {
        cout << k << " ";


    }

    return 0;
}

double conversions(const string& quantity, const string& units)
{
    constexpr double m_to_cm = 100.0;
    constexpr double in_to_cm = 2.54;
    constexpr double ft_to_in = 12.0;

    double cm{0};
    double md{0};
    double in{0};
    double ft{0};

    double quant = stod(quantity);

    if (units == "cm") {
        cm = quant;
        md = quant / m_to_cm;
        in = quant / in_to_cm;
        ft = quant / (in_to_cm * ft_to_in);
    } else if (units == "in") {
        in = quant;
        cm = quant * in_to_cm;
        md = (quant * in_to_cm) / m_to_cm;
        ft = quant / ft_to_in;

    } else if (units == "ft") {
        ft = quant;
        in = quant * ft_to_in;
        cm = quant * ft_to_in * in_to_cm;
        md = (quant * ft_to_in * in_to_cm) / m_to_cm;

    } else if (units == "m") {
        md = quant;
        cm = quant * m_to_cm;
        in = (quant * m_to_cm) / in_to_cm;
        ft = (quant * m_to_cm) / (in_to_cm * ft_to_in);

    } else {}

    cout << "Meters == " << md << "\tCentimeters == " << cm
         << "\nFeet == " << ft << "\tInches == " << in << endl;

    return md;
}