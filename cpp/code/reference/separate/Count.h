//
// Created by 12131 on 2021/8/22.
//

#ifndef CPP_COUNT_H
#define CPP_COUNT_H

class Count {
public:
    Count();

    Count(const Count &rhs);

    ~Count();

    bool only() const;

    bool makeOnly();

    bool reattach(const Count &rhs);

private:
    Count &operator=(const Count &rhs);

private:
    int *pICount;
};

#endif //CPP_COUNT_H
