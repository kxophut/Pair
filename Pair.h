#ifndef PAIR_H
#define PAIR_H

#include <iostream>

template <typename T, typename F>
class Pair{

private:
    T left;
    F right;
public:
    Pair() = default;

    Pair(T _left, F _right):
            left(_left),
            right(_right)
    {}

    T getLeft(){
        return left;
    }

    F getRight(){
        return right;
    }

    void setLeft(T item){
        left = item;
    }

    void setRight(F item){
        right = item;
    }

    friend std::ostream& operator << (std::ostream &out, Pair<T, F> &pair){
        out<<(pair.left)<<' '<< (pair.right);
        return out;
    }
};

#endif
