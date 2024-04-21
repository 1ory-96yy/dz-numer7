#include <iostream>

class Overcoat {
private:
    std::string type;
    double price;
public:
    Overcoat(std::string t, double p) : type(t), price(p) {}

    bool operator==(const Overcoat& other) const {
        return type == other.type;
    }

    Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Overcoat& other) const {
        return price > other.price;
    }
};

class Flat {
private:
    double area;
    double price;
public:
    Flat(double a, double p) : area(a), price(p) {}

    bool operator==(const Flat& other) const {
        return area == other.area;
    }

    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area = other.area;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Flat& other) const {
        return price > other.price;
    }
};

int main() {
    Overcoat coat1("Winter", 150.0);
    Overcoat coat2("Spring", 100.0);
    Overcoat coat3("Winter", 200.0);
    std::cout << "Coat 1 == Coat 2: " << std::boolalpha << (coat1 == coat2) << std::endl;
    std::cout << "Coat 1 > Coat 3: " << std::boolalpha << (coat1 > coat3) << std::endl;
    Flat flat1(100.0, 200000.0);
    Flat flat2(150.0, 250000.0);
    Flat flat3(100.0, 180000.0);

    std::cout << "Flat 1 == Flat 2: " << std::boolalpha << (flat1 == flat2) << std::endl;
    std::cout << "Flat 1 > Flat 3: " << std::boolalpha << (flat1 > flat3) << std::endl;

    return 0;
}
