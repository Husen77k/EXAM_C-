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

    char *getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }

 
    virtual void displayDetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Power Consumption: " << powerConsumption << "W" << endl;
    }


    virtual double calculateDiscount()
    {
        return 0.0;
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

   
    double calculateDiscount()
    {
        if (ramSize >= 16)
        {
            return 150.0;
        }
        else
        {
            return 50.0;
        }
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

    
    void displayDetails()
    {
        cout << "--- Laptop Details ---" << endl;
        Device::displayDetails(); 
        cout << "RAM Size: " << ramSize << " GB" << endl;
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

   
    double calculateDiscount()
    {
        if (batteryCapacity >= 5000)
        {
            return 40.0;
        }
        else
        {
            return 20.0;
        }
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


    void displayDetails()
    {
        cout << "--- Smartphone Details ---" << endl;
        Device::displayDetails();
        cout << "Battery Capacity: " << batteryCapacity << " mAh" << endl;
    }
};

int main()
{

    Device *inventory[4];


    char laptopBrand[] = "Dell";
    inventory[0] = new Laptop(laptopBrand, 90, 16);

    char phoneBrand[] = "Samsung";
    inventory[1] = new Smartphone(phoneBrand, 25, 6000);
    inventory[2] = new Smartphone(phoneBrand, 30, 5200);
    
    for (int i = 0; i < 2; i++)
    {
       
        inventory[i]->displayDetails();

        
        cout << "Calculated Discount: $" << inventory[i]->calculateDiscount() << endl;
        cout << "--------------------------------------" << endl << endl;
    }

   
    delete inventory[0];
    delete inventory[1];

    return 0;
}
