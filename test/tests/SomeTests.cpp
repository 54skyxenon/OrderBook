//
// Created by Brandon Liang on 4/21/20.
//

#include <gtest/gtest.h>
#include <OrderBook.h>

TEST(test, OrderBookEmptyByDefault) {
    OrderBook book;
    EXPECT_TRUE(book.is_empty());
}

TEST(test, OrderAdditionWorks) {
    OrderBook book;
    book.add_bid(123, 456);

    auto bid_ask = book.get_bid_ask();
    EXPECT_TRUE(bid_ask.bid.has_value());

    auto bid = bid_ask.bid.value();
    EXPECT_EQ(123, bid.first);
    EXPECT_EQ(456, bid.second);
}