#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class BasicTicket {

    protected:
        string customerName;
        string departureCity;
        string arrivalCity;
        int flightNumber;
        double price;

    public:
        BasicTicket(string customerName, string departureCity, string arrivalCity, int flightNumber, double price)
            : customerName(customerName), departureCity(departureCity), arrivalCity(arrivalCity), flightNumber(flightNumber), price(price) {
        if (price < 0) {
            throw NegativePriceException();
        }
        if (flightNumber < 0) {
            throw NegativeFlightNumberException();
        }
    }
 
        double getPrice() const {
            return price;
        }
};

class PremiumTicket : public BasicTicket {

    private:
        int seatNumber; 
    public:
        PremiumTicket(string customerName, string departureCity, string arrivalCity, int flightNumber, double price, int seatNumber)
            : BasicTicket(customerName, departureCity, arrivalCity, flightNumber, price), seatNumber(seatNumber) {}

        double getPrice() const override {
            return BasicTicket::getPrice() * 1.1;
        }
};
class NegativePrice : public runtime_error {
public:
    NegativePrice() : runtime_error("Ticket price cannot be negative") {}
};

class NegativeFlightNumber : public runtime_error {
public:
    NegativeFlightNumber() : runtime_error("Flight number cannot be negative") {}
};


