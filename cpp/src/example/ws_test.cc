#include "ws/client.h"
#include "util/Time.h"
#include <external/json.hpp>
#include <iostream>

using json = nlohmann::json;


int main()
{
    ftx::WSClient client;
    client.subscribe_trades("LTC-PERP");
    
    // ftx::WSClient client("api key", "api secret", "subaccount (if it's a subaccount)");
    // client.subscribe_orders("LTC-PERP");

    client.on_message([](json j) { std::cout << "msg: " << j << "\n"; });
    client.connect();
}
