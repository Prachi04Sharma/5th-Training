
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Car class definition
class Car {
private:
    string licensePlate;
    string owner;

public:
    Car(string lp, string o) : licensePlate(lp), owner(o) {}
    void setLicensePlate(string lp) {
        licensePlate = lp;
    }
    string getLicensePlate() const {
        return licensePlate;
    }
    void setOwner(string o) {
        owner = o;
    }
    string getOwner() const {
        return owner;
    }
    void display() const {
        cout << "License plate: " << licensePlate << endl;
        cout << "Owner: " << owner << endl;
    }
};

// Vehicle class definition
class Vehicle {
private:
    string type;
    string licensePlate;

public:
    Vehicle(string t, string lp) : type(t), licensePlate(lp) {}
    void setType(string t) {
        type = t;
    }
    string getType() const {
        return type;
    }
    void setLicensePlate(string lp) {
        licensePlate = lp;
    }
    string getLicensePlate() const {
        return licensePlate;
    }
    void display() const {
        cout << "Vehicle type: " << type << endl;
        cout << "License plate: " << licensePlate << endl;
    }
};

// Employee class definition
class Employee {
private:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}
    void setName(string n) {
        name = n;
    }
    string getName() const {
        return name;
    }
    void setId(int i) {
        id = i;
    }
    int getId() const {
        return id;
    }
    void display() const {
        cout << "Employee name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};

// ParkingLot class definition
class ParkingLot {
private:
    vector<Car> ParkedCars;
    vector<Vehicle> ParkedVehicles;
    vector<Employee> Employees;
    int Capacity;

public:
    ParkingLot(int cap) : Capacity(cap) {}

    bool parkCar(const Car& car) {
        if(ParkedCars.size() < Capacity) {
            ParkedCars.push_back(car);
            return true;
        } else {
            cout << "Parking lot is full!" << endl;
            return false;
        }
    }

    bool parkVehicle(const Vehicle& vehicle) {
        if(ParkedVehicles.size() < Capacity) {
            ParkedVehicles.push_back(vehicle);
            return true;
        } else {
            cout << "Parking lot is full!" << endl;
            return false;
        }
    }

    void addEmployee(const Employee& employee) {
        Employees.push_back(employee);
    }

    void displayParkedCars() const {
        cout << "Parked Cars:\n" << endl;
        for(const auto& car : ParkedCars) {
            car.display();
        }
    }

    void displayParkedVehicles() const {
        cout << "Parked Vehicles:\n" << endl;
        for(const auto& vehicle : ParkedVehicles) {
            vehicle.display();
        }
    }

    void displayEmployees() const {
        cout << "Employees:\n" << endl;
        for(const auto& employee : Employees) {
            employee.display();
        }
    }
};

int main() {
    /*Car ob("JK14E5598", "Praguni Sanotra");
    ob.displaydetails();
    ob.setdetails("JK02CW9946", "VANSH BARGOTRA");
    cout << "Updated Details are :- " << endl;
    ob.displaydetails();*/
    ParkingLot myParkingLot(3); 

    Car car1("ABC123", "Pragu");
    Car car2("DEF456", "Vansh");
    Car car3("GHI789", "Hoon");
    Car car4("QR6124", "Warikoo");

    Vehicle vehicle1("Motorcycle", "MOT123");
    Vehicle vehicle2("Truck", "TRK456");

    Employee employee1("Pragu", 101);
    Employee employee2("Vansh", 102);

    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.parkCar(car3);
    myParkingLot.parkCar(car4);  // This will print "Parking lot is full!"

    myParkingLot.parkVehicle(vehicle1);
    myParkingLot.parkVehicle(vehicle2);

    myParkingLot.addEmployee(employee1);
    myParkingLot.addEmployee(employee2);

    myParkingLot.displayParkedCars();
    myParkingLot.displayParkedVehicles();
    myParkingLot.displayEmployees();

    return 0;
}

