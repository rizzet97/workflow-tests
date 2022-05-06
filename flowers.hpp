#pragma once
#include <iostream>
#include <string>
#include <map>

enum class Colors {
    Red,
    Blue,
    Yellow,
    White,
    Pink,
    Purple,
    Orange
};

std::map<Colors, std::string> ColorNames {
    {Colors::Red, "Red"},
    {Colors::Blue, "Blue"},
    {Colors::Yellow, "Yellow"},
    {Colors::White, "White"},
    {Colors::Pink, "Pink"},
    {Colors::Purple, "Purple"},
    {Colors::Orange, "Orange"}
};

class Plant {
public:
    virtual void printInfo() = 0;
    virtual std::string& getName() const = 0;
    virtual int getTimeLeft() const = 0;
    virtual int getLifespan() const = 0;
    virtual void waterPlant() = 0;
    virtual bool checkIfAlive() = 0;
private:

};

class Flower : public Plant {
public:
    Flower(std::string, Colors, int);
    Flower(std::string);
    Flower();
    void printInfo() override;
    virtual std::string& getName() const override;
    int getTimeLeft() const override;
    int getLifespan() const override;
    void waterPlant() override;
    bool checkIfAlive() override;
    std::string& getColor() const;
private:
    std::string name_;
    Colors color_ = Colors::Red;
    int lifespan_ = 7;
    int timeLeft_ = 0;
};

class Succulent : public Plant {
    Succulent(std::string&);
    Succulent();
    void printInfo() override;
    virtual std::string& getName() const override;
    int getTimeLeft() const override;
    int getLifespan() const override;
    void waterPlant() override;
    bool checkIfAlive() override;
private:
    std::string name_;
    static const int lifespan_ = 60;
    int timeLeft_;
};