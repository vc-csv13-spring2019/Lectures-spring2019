#include <iostream>
#include <utility>
#include <bits/stl_vector.h>
#include <cstring>

struct Implicit {

};

struct Class {
    int *val;
public:
    explicit Class(int i): val(new int) { *val = i; }
    Class(const Class &other) {
        *this = other;
    }

    Class& operator =(const Class &rhs) {
        if (this != &rhs) { // Always check for self assignment
            delete this->val;
            this->val = new int;
            *this->val = *rhs.val;
        }
        return *this;
    }

};

class Card {
};

class ValueCard: public Card {
    std::string suit;
    int value;
};

class JokerCard: public Card {

};

class RulesCard: public Card {

};

class String {
    char *_chars;
    size_t _size;

public:
    String() {
        _chars = nullptr;
        _size = 0;
    }

    String(const String &other) {
        // This is the shallow copy
        // _size = other._size;
        // _chars = other._chars;

        // This is the deep copy
        // Let's call the assignment operator since it has the code we want
        *this = other;
    }

    String(String &&other) {
        // This is the shallow copy
         _size = other._size;
         _chars = other._chars;
    }

    ~String() {
        // Since we called new with [] we called delete with []
        delete []  _chars;
        _size = 0;
    }

    String &operator =(const String &rhs) {
        if(this == &rhs) return *this;

        _size = rhs._size;
        delete [] _chars;
        _chars = new char[_size];
        strncpy(_chars, rhs._chars, _size);
    }
};

int main(int argc, char *argv[]) {

    String s1;
    s1 = s1;

    std::vector<Card> deck = {ValueCard(), ValueCard(), JokerCard()};
    deck.reserve(55);

    deck.push_back(ValueCard());

    std::string s1 = "Hello";
    std::string s2(s1);

    s1[0] ='h';

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    return 0;
}