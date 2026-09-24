#include <iostream>
#include <cstring>
using namespace std;

class Device
{
private:
    char brand[50];
    int powerConsumption;

public:
    Device()
    {
    }

    Device(char br[], int power)
    {
        strcpy(brand, br);
        powerConsumption = power;
    }


    void setBrand(char br[])
    {
        strcpy(brand, br);
    }

    void setPowerConsumption(int power)
    {
        powerConsumption = power;
    }

    // getter
    char *getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }
};

class Laptop : public Device
{
private:
    int ramSize;

public:
    Laptop() : Device()
    {
    }

    Laptop(char br[], int power, int ram) : Device(br, power)
    {
        ramSize = ram;
    }

    void setRamSize(int ram)
    {
        ramSize = ram;
    }

    int getRamSize()
    {
        return ramSize;
    }

    void inputLaptopDetails()
    {
        char br[50];
        cout << "Enter Laptop Brand: ";
        cin >> br;
        setBrand(br);

        int power;
        cout << "Enter Laptop Power Consumption (W): ";
        cin >> power;
        setPowerConsumption(power);

        int ram;
        cout << "Enter Laptop RAM Size (GB): ";
        cin >> ram;
        setRamSize(ram);
    }

    void displayLaptopDetails()
    {
        cout << "--- Laptop Details ---" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << "W" << endl;
        cout << "RAM Size: " << getRamSize() << " GB" << endl;
    }
};

class Smartphone : public Device
{
private:
    int batteryCapacity;

public:
    Smartphone() : Device()
    {
    }

    Smartphone(char br[], int power, int battery) : Device(br, power)
    {
        batteryCapacity = battery;
    }

    void setBatteryCapacity(int battery)
    {
        batteryCapacity = battery;
    }

    int getBatteryCapacity()
    {
        return batteryCapacity;
    }

    void inputSmartphoneDetails()
    {
        char br[50];
        cout << "Enter Smartphone Brand: ";
        cin >> br;
        setBrand(br);

        int power;
        cout << "Enter Smartphone Power Consumption (W): ";
        cin >> power;
        setPowerConsumption(power);

        int battery;
        cout << "Enter Smartphone Battery Capacity (mAh): ";
        cin >> battery;
        setBatteryCapacity(battery);
    }

    void displaySmartphoneDetails()
    {
        cout << "--- Smartphone Details ---" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << "W" << endl;
        cout << "Battery Capacity: " << getBatteryCapacity() << " mAh" << endl;
    }
};

int main()
{
    Laptop myLaptop;
    Smartphone myPhone;

    cout << "=== Enter Laptop Data ===" << endl;
    myLaptop.inputLaptopDetails();

    cout << "\n=== Enter Smartphone Data ===" << endl;
    myPhone.inputSmartphoneDetails();

    cout << "\n=== Displaying Data ===" << endl;
    myLaptop.displayLaptopDetails();
    cout << endl;
    myPhone.displaySmartphoneDetails();

    return 0;
}
