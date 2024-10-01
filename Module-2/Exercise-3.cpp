#include <iostream>

using namespace std;

class Appliance
{
    protected:

    int powerStatus;

    public:

    Appliance()
    {
        powerStatus = 0;
    }

    virtual void performAction() = 0;
};

class Light : public Appliance
{
    private: 

    int brightness;

    void displayBrightness()
    {
        cout << "Current Brightness: " << this -> brightness << endl;
    }

    void setBrightness(int brightness)
    {
        this -> brightness = brightness;
        cout << "Brightness set to: " << brightness << endl;
    }

    public:

    Light() : Appliance()
    {
        this -> brightness = 50;
    }

    void performAction()
    {
        cout << "Adjusting Light settings....." << endl;
    }

    void performAction(string powerStatus)
    {
        if(powerStatus == "OFF")
        {
            this -> powerStatus = 0;
        }
        else
        {
            this -> powerStatus = 1;
        }
    }

    void performAction(int brightness)
    {
        setBrightness(brightness);
    }

    void displayStatus()
    {
        cout << "Power Status: " << this -> powerStatus << endl;
        displayBrightness();
    }
};

class Thermostat : public Appliance
{
    private:

    int temperature;

    void displayCurrentTemperature()
    {
        cout << "Current Temperature: " << temperature << " degree Celcius" << endl;
    }

    void setTemperature(int desiredTemperature)
    {
        this -> temperature = desiredTemperature;
        cout << "Current Temperature set to: " << desiredTemperature << " degree Celcius" << endl;
    }

    public:

    Thermostat() : Appliance()
    {
        temperature = 25;
    }

    void performAction()
    {
        cout << "Adjusting thermostat settings......" << endl;
    }

    void performAction(string powerStatus)
    {
        if(powerStatus == "OFF")
        {
            this -> powerStatus = 0;
        }
        else
        {
            this -> powerStatus = 1;
        }
    }

    void performAction(int desiredTemperature)
    {
        setTemperature(desiredTemperature);
    }

    void displayStatus()
    {
        cout << "Power Status: " << powerStatus << endl;
        displayCurrentTemperature();
    }
};

class Fan : public Appliance
{
    private:

    int speed;

    void setFanSpeed(int fanSpeed)
    {
        this -> speed = fanSpeed;
        cout << "Fan Speed set to: " << fanSpeed << endl;
    }

    void displayCurrentSpeed()
    {
        cout << "Current Fan Speed: " << this -> speed << endl;
    }

    public:

    Fan() : Appliance()
    {
        this -> speed = 0;
    }

    void performAction()
    {
        cout << "Adjusting fan settings......" << endl;
    }

    void performAction(string powerStatus)
    {
        if(powerStatus == "OFF")
        {
            this -> powerStatus = 0;
            cout << "Fan is turned off....." << endl;
        }
        else
        {
            this -> powerStatus = 1;
            cout << "fan is turned on....." << endl;
        }
    }

    void performAction(int fanSpeed)
    {
        setFanSpeed(fanSpeed);
    }

    void displayStatus()
    {
        cout << "Power Status: " << this -> powerStatus << endl;
        displayCurrentSpeed();
    }
};

int main()
{
    Appliance* appliance1 = new Fan();

    // Appliance* appliance2 = new Thermostat();

    Fan* fan = (Fan*) appliance1;

    appliance1 -> performAction();

    fan -> performAction("ON");

    fan -> performAction(500);

    fan -> displayStatus();

    cout << appliance1 << endl;

    cout << fan << endl;

    delete appliance1;

    cout << appliance1 << endl;

    cout << fan << endl;

    return 0;
}