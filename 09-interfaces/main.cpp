#include <iostream>
using namespace std;

class IPayment {
public:
    virtual void pay() = 0;
    virtual ~IPayment() = default;
};

class CardPayment : public IPayment {
public:
    void pay() override {
        cout << "Paying by card..." << endl;
    }
};

class CashPayment : public IPayment {
public:
    void pay() override {
        cout << "Paying with cash..." << endl;
    }
};

void processPayment(IPayment& payment) {
    payment.pay();
}

int main() {
    CardPayment card;
    CashPayment cash;

    processPayment(card);
    processPayment(cash);

    return 0;
}