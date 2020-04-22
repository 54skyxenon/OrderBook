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

TEST(test, OrderRemovalWorks) {
    OrderBook book;
    book.add_bid(123, 456);
    book.add_ask(70, 340);

    book.remove_bid(123, 156);
    book.remove_ask(70, 140);

    auto bid_ask = book.get_bid_ask();
    EXPECT_TRUE(bid_ask.bid.has_value());
    EXPECT_TRUE(bid_ask.ask.has_value());

    auto bid = bid_ask.bid.value();
    EXPECT_EQ(123, bid.first);
    EXPECT_EQ(300, bid.second);

    auto ask = bid_ask.ask.value();
    EXPECT_EQ(70, ask.first);
    EXPECT_EQ(200, ask.second);
}

TEST(test, SpreadCalculated) {
    OrderBook book;
    book.add_bid(50, 100);
    book.add_ask(70, 100);

    auto bid_ask = book.get_bid_ask();
    EXPECT_TRUE(bid_ask.bid.has_value());
    EXPECT_TRUE(bid_ask.ask.has_value());

    auto spread = bid_ask.spread();
    EXPECT_EQ(20, spread.value());
}