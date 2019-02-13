//
// Created by aknight on 2/5/19.
//

#include <string>
#include <sstream>
#include <iostream>

#include "phonenumber.h"

PhoneNumber::PhoneNumber() {

}

PhoneNumber::PhoneNumber(uint16_t countryCode, uint16_t areaCode,
                         uint16_t regionCode, uint16_t endPoint) {
    _countryCode = countryCode;
    _areaCode = areaCode;
    _regionCode = regionCode;
    _endPoint = endPoint;
}

std::string PhoneNumber::getDialString() {
    std::ostringstream dialString;
    dialString << "+" << _countryCode << "-" <<_areaCode << "-" << _regionCode << "-" << _endPoint;

    return dialString.str();
}