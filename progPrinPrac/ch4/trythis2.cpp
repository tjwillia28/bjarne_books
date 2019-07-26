//
// Created by Tyler Williams on 2019-07-21.
//

#include <iostream>

using namespace std;

int main() {
    char unit = 0;
    double currency_amount = 0;
    constexpr float gbp_to_usd = 1.2508; //'p'
    constexpr float usd_to_yen = 107.76; //'y'
    constexpr float usd_to_nok = 8.56; //'k'

    cout << "Enter an amount of currency ('p', 'y', 'k'): \n";
    cin >> currency_amount >> unit;

    switch (unit) {
        case 'p':
            cout << currency_amount << " GBPs == " << currency_amount * gbp_to_usd << " dollars";
            break;
        case 'y':
            cout << currency_amount << " Yen == " << currency_amount / usd_to_yen << " dollars";
            break;
        case 'k':
            cout << currency_amount << " Krone == " << currency_amount / usd_to_nok << " dollars";
            break;
        default:
            cout << "I don't recognize that currency:  " << unit;
            break;
    }
    return 0;
}

/*
 * - easier to understand switch statement because its cleaner
 * - guessing modification wil be easier since each case is isolated, reduces dependencies
 * - far simpler logic im guessing for more complicated problems
 */