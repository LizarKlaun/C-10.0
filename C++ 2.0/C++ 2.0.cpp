#include <iostream>

using namespace std;

class IMovable {
public:
    virtual void Move() = 0;
};

class IDrivable {
public:
    virtual void Drive() = 0;
};

class IFillable {
public:
    virtual void Fly() = 0;
};

class IFlyable {
public:
    virtual void Swim() = 0;
};

class Human : public IMovable {
public:
    void Move() override {
        cout << "I can move." << endl;
    }
};

class Car : public IDrivable {
public:
    void Drive() override {
        cout << "I can drive: " << endl;
    }
};

class Plane : public IFillable {
public:
    void Fly() override {
        cout << "I can fly: " << endl;
    }
};

class Ship : public IFlyable {
public:
    void Swim() override {
        cout << "I can drive: " << endl;
    }
};

int main()
{
    IMovable* ptr1 = new Human();
    ptr1->Move();
    IDrivable* ptr2 = new Car();
    ptr2->Drive();
    IFillable* ptr3 = new Plane();
    ptr3->Fly();
    IFlyable* ptr4 = new Ship();
    ptr4->Swim();
}