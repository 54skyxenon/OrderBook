//
// Created by Brandon Liang on 4/21/20.
//

#include "OrderBook.h"

bool OrderBook::is_empty() const {
    return bids.empty() && asks.empty();
}

void OrderBook::add_ask(int price, int amount) {

}

void OrderBook::add_bid(int price, int amount) {

}