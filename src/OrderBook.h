//
// Created by Brandon Liang on 4/21/20.
//

#pragma once

#include <map>

class OrderBook {
    std::map<int, int> bids, asks;
public:
    bool is_empty() const;
    void add_bid(int price, int amount);
    void add_ask(int price, int amount);
};
