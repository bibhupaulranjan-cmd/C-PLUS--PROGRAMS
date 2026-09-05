#include <iostream>
using namespace std;
class Car {
private:
    bool engineOn;
    int fuelLevel;
    void checkFuel() {
        if (fuelLevel < 10)
            cout << "Warning: Low fuel!" << endl;
    }
    void startEngine() {
        cout << "Starting the engine..." << endl;
        engineOn = true;
    }
public:
    Car() {
        engineOn = false;
        fuelLevel = 50; 
    }
    void start() {
        if (fuelLevel == 0) {
            cout << "Cannot start car. Fuel tank empty!" << endl;
            return;
        }
        checkFuel();
        startEngine();
        cout << "Car started successfully" << endl;
    }
    void stop() {
        engineOn = false;
        cout << "Car stopped." << endl;
    }
};
int main() {
    Car myCar;
    myCar.start();
    myCar.stop();

    return 0;
}
