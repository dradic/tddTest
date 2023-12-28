#ifndef _MONEY_H
#define _MONEY_H

#include <string>

class Money {

public:
    Money(int amount, std::string currency);
    int getAmount();

    bool equals(Money* object);

    // Factories
    static Money* dollar(int amount);
    static Money* franc(int amount);

    Money* times(int multiplier);
    Money* plus(Money* addend);

    std::string getCurrency();    

protected:
    int amount;
    std::string currency;
};

#endif // MONEY__H