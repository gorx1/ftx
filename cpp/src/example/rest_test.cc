#include "rest/client.h"

#include <iostream>

int main()
{
    ftx::RESTClient client;
    auto tr = client.get_trades("LTC-PERP");
    std::cout << tr << "\n\n";

    // ftx::RESTClient client("api key", "api secret", "subaccount (if it's a subaccount)");
    // auto acct = client.get_account_info();
    // std::cout << acct << "\n\n";

    std::cin.get(); 
}
