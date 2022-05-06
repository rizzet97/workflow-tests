#include "flowers.hpp"

Flower::Flower(std::string name, Colors color, int lifespan)
    : name_(name)
    , color_(color)
    , lifespan_(lifespan)
{}

Flower::Flower(std::string name)
    : Flower(name, Colors::Red, 7)
{}

Flower::Flower()
    : Flower("random flower", Colors::Red, 7)
{}

Succulent::Succulent(std::string& name)
    : name_(name)
{}

void Flower::printInfo() {
 std::cout << "This is a " << ColorNames[color_] << ' ' << name_ << ".\n";
}

void Flower::waterPlant() {
    timeLeft_ = lifespan_;
}

// Succulent::Succulent()
    // : Succulent("random cactus")
// {}