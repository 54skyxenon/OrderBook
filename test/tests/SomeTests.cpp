//
// Created by Brandon Liang on 4/21/20.
//

#include <gtest/gtest.h>
#include <OrderBook.h>

TEST(test, OrderBookEmptyByDefault) {
    OrderBook book;
    EXPECT_TRUE(book.is_empty());
}