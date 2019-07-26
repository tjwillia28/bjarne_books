//
// Created by Tyler Williams on 2019-07-21.
//

#include <iostream>

using namespace std;

int main()
{
    char unit = 0;
    double currency_amount = 0;
    constexpr float gbp_to_usd = 1.2508; //'p'
    constexpr float usd_to_yen = 107.76; //'y'
    constexpr float usd_to_nok = 8.56; //'k'

    cout << "Enter a currency ('p', 'y', 'k') then the amount delimited by a space: \n";
    cin >> currency_amount >> unit;

    if (unit == 'p')
        cout << currency_amount << "GBPs == " << currency_amount*gbp_to_usd << " dollars";
    else if (unit == 'y')
        cout <<currency_amount << "Yen == " << currency_amount/usd_to_yen << " dollars";
    else if (unit == 'k')
        cout << currency_amount << "Krone == " << currency_amount/usd_to_nok << " dollars";
    else
        cout << "I don't recognize that currency:  " << unit;

    return 0;
}