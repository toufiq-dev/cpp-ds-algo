#include <bits/stdc++.h>
using namespace std;

// Abstract class representing a participant
class Participant {
public:
    virtual double getDiscount() const = 0;
};

// Concrete subclass for government officials, 20% discount on govt. officials
class GovtOfficial : public Participant {
public:
    double getDiscount() const override { return 0.20; }
};

// Concrete subclass for foreign citizens, 5% discount on foreign citizens
class ForeignCitizen : public Participant {
public:
    double getDiscount() const override { return 0.05; }
};

// Abstract class representing payment method
class PaymentMethod {
public:
    virtual double getDiscount() const = 0;
};

// Concrete subclass for American express card, 10% discount on American express
class AmexCard : public PaymentMethod {
public:
    double getDiscount() const override { return 0.10; }
};

// Concrete subclass for Visa card, 7% discount on Visa
class Visa : public PaymentMethod {
public:
    double getDiscount() const override { return 0.07; }
};

// Class reperesenting an Item
class Item {
private:
    string name;
    double price;
public:
    Item(string _name, double _price) : name(_name), price(_price) {}
    string getName() const { return name; }
    double getPrice() const { return price; }
};

// Class represing a purchase
class Purchase {
private:
    Participant *participant;
    PaymentMethod *paymentMethod;
    vector<Item> items;

public:
    Purchase(Participant* _participant, PaymentMethod* _paymentMethod) 
        : participant(_participant), paymentMethod(_paymentMethod) {}

    void addItem(const Item &item) { items.push_back(item); }

    double getTotalPrice() const {
        double total = 0.0;
        for (const auto& item: items) {
            total += item.getPrice();
        }

        return total;
    }

    double getDiscountedPrice() const {
        double discount = participant->getDiscount() + paymentMethod->getDiscount();
        return getTotalPrice() * (1 - discount);
    }

    void dispalyPurchaseInfo() const {
        cout << "Purchase Summary: \n";
    }
};