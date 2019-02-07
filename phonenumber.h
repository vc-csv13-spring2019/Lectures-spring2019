//
// Created by aknight on 2/5/19.
//

#ifndef LECTURE_PHONENUMBER_H
#define LECTURE_PHONENUMBER_H

#include <cstdint>

class PhoneNumber {
private:
    uint16_t _countryCode;
    uint16_t _areaCode;
    uint16_t _regionCode;
    uint16_t _endPoint;

public:
    PhoneNumber();

    PhoneNumber(uint16_t countryCode, uint16_t areaCode,
                uint16_t regionCode, uint16_t endPoint);
    std::string getDialString();
};
#endif //LECTURE_PHONENUMBER_H
