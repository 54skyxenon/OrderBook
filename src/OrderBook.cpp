//
// Created by Brandon Liang on 4/21/20.
//

#include "OrderBook.h"

// do we have anything in the OrderBook?
bool OrderBook::is_empty() const {
    return bids.empty() && asks.empty();
}

// adds an ask to the OrderBook
void OrderBook::add_ask(int price, int amount) {
    add(price, amount, true);
}

// adds a bid to the OrderBook
void OrderBook::add_bid(int price, int amount) {
    add(price, amount, false);
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