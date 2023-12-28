#include "money.h"
#include <typeinfo>
#include <iostream>

Money::Money(int amount, std::string currency) {    
    this->amount = amount;
    this->currency = currency;
}

int Money::getAmount() {
    return amount;
}

bool Money::equals(Money* object) {
    Money* money = (Money*) object;        
    return amount == money->getAmount()
        && this->getCurrency().compare(money->getCurrency()) == 0;
}

Money* Money::dollar(int amount) {
    return new Money(amount, "USD");
}

Money* Money::franc(int amount) {
    return new Money(amount, "CHF");
}

Money* Money::times(int multiplier) {    
    return new Money(amount * multiplier, currency);
}

Money* Money::plus(Money* addend) {
    return new Money(amount + addend->amount, currency);
}

std::string Money::getCurrency() {
    return currency;
}