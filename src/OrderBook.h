#pragma once

#include <map>
#include <iostream>
#include <optional>

// An object representing an order book and its associated operations
class OrderBook {
    // private by default
    std::map<int, int> bids, asks;
    void add(int price, int amount, bool bid);
public:
    // inner struct we use to modularize data in this OrderBook
    struct BidAsk {
        typedef std::optional<std::pair<int, int>> Entry;
        Entry bid, ask;
        std::optional<int> spread() const;
    };

    // const prevents functions from mutation in C++
    bool is_empty() const;
    void add_bid(int price, int amount);
    void add_ask(int price, int amount);

    BidAsk get_bid_ask() const;

    // this is essentially toString()
    // friend makes it so it can be globally called
    friend std::ostream& operator<<(std::ostream& os, const OrderBook& book);
};
