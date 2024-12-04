#include<iostream>
#include<string.h>
using namespace std;

//base class
class Car{
    public:
    void carSound(){
        cout<<"The car makes a sound."<<endl;
    }
};

//derived class
class SportsCar : public Car{
    public:
    void carSound(){
        cout<<"The sports car says : zoom zoom\n";
    }
};

class ElectricCar : public Car{
    public:
    void carSound(){
        cout<<"The electric car says: whirr whirr\n ";
    }
};

int main(){
    Car myCar;
    SportsCar mySportsCar;
    ElectricCar myElectricCar;

    myCar.carSound();
    mySportsCar.carSound();
    myElectricCar.carSound();
    return 0;
}