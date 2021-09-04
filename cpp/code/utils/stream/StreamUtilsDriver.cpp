
//
// Created by 12131 on 2021/9/2.
//

#include "StreamUtilsDriver.h"
#include "StreamUtils.h"

namespace utils {
    StreamUtilsDriver &StreamUtilsDriver::charValue() {
        displayUtils
                .out("StreamUtilsDriver::charValue").next()
                .out("(ex: a b): ");
        char ch = StreamUtils::charValue();
        displayUtils.out("first: ").out(ch).next();
        ch = StreamUtils::charValue();
        displayUtils.out("second: ").out(ch).next();
        StreamUtils::clear();
        return *this;
    }

    StreamUtilsDriver &StreamUtilsDriver::intValue() {
        displayUtils
                .out("StreamUtilsDriver::intValue").next()
                .out("(ex: 123 11): ")
                .out(StreamUtils::intValue())
                .next();
        StreamUtils::clear();
        return *this;
    }

    StreamUtilsDriver &StreamUtilsDriver::lineValue() {
        char buffer[32];
        displayUtils
                .out("(ex: 123 ab c): ")
                .out(StreamUtils::lineValue(buffer, sizeof(buffer)))
                .next();
        return *this;
    }

    StreamUtilsDriver &StreamUtilsDriver::clear() {
        displayUtils
                .out("StreamUtilsDriver::clear").next()
                .out("(ex: ab): ");
        char ch = StreamUtils::charValue();
        displayUtils.out("first: ").out(ch).next();
        StreamUtils::clear();
        displayUtils.out("clear").next().out("(ex: ab): ");
        ch = StreamUtils::charValue();
        displayUtils.out("first: ")
                .out(ch).next()
                .out("clear").next();
        StreamUtils::clear();
        return *this;
    }
}