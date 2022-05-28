#pragma once

template <class T1, class T2>
class Pair {
public:
    T1 key;
    T2 value;
    Pair() {}
    Pair(T1 key, T2 value) : key(key), value(value) {}
};