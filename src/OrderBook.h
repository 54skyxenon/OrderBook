#pragma once

#include <map>
#include <iostream>
#include <optional>

// An object representing an order book and its associated operations
class OrderBook {
    // private by default
    std::map<int, int> bids, asks;
    void add(int price, int amount, bool bid);
    void remove(int price, int amount, bool bid);
public:
    // inner struct we use to modularize data in this OrderBook
    struct BidAsk {
        typedef std::optional<std::pair<int, int>> Entry;
        Entry bid, ask;
        std::optional<int> spread() const;
    };

    // do we have anything in the OrderBook?
    // inline tells compiler to omit multiple definitions
    // const prevents functions from mutation in C++
    inline bool is_empty() const {
        return bids.empty() && asks.empty();
    }

    void add_bid(int price, int amount);
    void add_ask(int price, int amount);
    void remove_bid(int price, int amount);
    void remove_ask(int price, int amount);

    BidAsk get_bid_ask() const;

    // this is essentially toString()
    // friend makes it so it can be globally called
    friend std::ostream& operator<<(std::ostream& os, const OrderBook& book);
    friend std::ostream& operator<<(std::ostream& os, const OrderBook::BidAsk& ba);
};
