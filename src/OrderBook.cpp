//
// Created by Brandon Liang on 4/21/20.
//

#include "OrderBook.h"

// adds an ask to the OrderBook
void OrderBook::add_ask(int price, int amount) {
    add(price, amount, false);
}

// adds a bid to the OrderBook
void OrderBook::add_bid(int price, int amount) {
    add(price, amount, true);
}

// adds something to the OrderBook
void OrderBook::add(int price, int amount, bool bid) {
    if (bid) {
        bids[price] += amount;
    }
    else {
        asks[price] += amount;
    }
}

// make toString() for an OrderBook
std::ostream& operator<<(std::ostream& os, const OrderBook& book) {
    if (book.is_empty()) {
        os << "ORDER BOOK IS EMPTY";
        return os;
    }

    for (auto it = book.asks.rbegin(); it != book.asks.rend(); ++it) {
        os << it->first << "\t" << it->second << std::endl;
    }

    os << std::endl;
    for (auto it = book.bids.rbegin(); it != book.bids.rend(); ++it) {
        os << it->first << "\t" << it->second << std::endl;
    }

    return os;
}

// toString() for a BidAsk object
std::ostream &operator<<(std::ostream &os, const OrderBook::BidAsk &ba) {
    // print will be a lambda
    // [&] grabs by reference
    auto print = [&](const OrderBook::BidAsk::Entry& e, const std::string& text) {
        bool have_value = e.has_value();
        if (have_value) {
            auto value = e.value();
            os << value.second << text << "s @" << value.first;
        } else {
            os << "NO " << text;
        }
    };

    print(ba.bid, "bid");
    os << ", ";
    print(ba.ask, "ask");
    return os;
}

// return a composite BidAsk object
OrderBook::BidAsk OrderBook::get_bid_ask() const {
    BidAsk result;

    auto best_bid = bids.rbegin();
    if (best_bid != bids.rend()) {
        result.bid = *best_bid;
    }

    auto best_ask = asks.rbegin();
    if (best_ask != asks.rend()) {
        result.ask = *best_ask;
    }

    return result;
}

// removes a bid from the OrderBook
void OrderBook::remove_bid(int price, int amount) {
    remove(price, amount, true);
}

// removes an ask from the OrderBook
void OrderBook::remove_ask(int price, int amount) {
    remove(price, amount, false);
}

// removes something from the OrderBook
void OrderBook::remove(int price, int amount, bool bid) {
    auto& table = bid ? bids : asks;
    auto it = table.find(price);

    if (it != table.end()) {
        it->second -= amount;
        if (it->second == 0) {
            table.erase(it);
        }
    }
}

// get the spread of the OrderBook
std::optional<int> OrderBook::BidAsk::spread() const {
    std::optional<int> result;

    if (bid.has_value() && ask.has_value()) {
        result = ask.value().first - bid.value().first;
    }

    return result;
}
