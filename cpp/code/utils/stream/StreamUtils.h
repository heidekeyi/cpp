//
// Created by 12131 on 2021/9/2.
//


#pragma once
namespace utils {
    class StreamUtils {
    public:
        static char charValue();

        static int intValue();

        static char *lineValue(char *buffer, size_t size);

        static void clear();
    };
}


