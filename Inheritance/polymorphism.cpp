#include <iostream>
#include <string>
using namespace std;

// Base class
class Notification
{
public:
    string message;

    virtual void sendMessage()
    {
        cout << "Sending notification" << endl;
    }
};

// First derived class
class EmailNotification : public Notification
{
public:
    void sendMessage() override
    {
        cout << "Email sent: " << message << endl;
    }
};

// Second derived class
class SMSNotification : public Notification
{
public:
    void sendMessage() override
    {
        cout << "SMS sent: " << message << endl;
    }
};

// Function using a base-class reference
void sendNotification(Notification& n)
{
    n.sendMessage();
}

int main()
{
    EmailNotification email;
    SMSNotification sms;

    email.message = "Your application was approved.";
    sms.message = "Your appointment is tomorrow.";

    cout << "NOTIFICATION SYSTEM" << endl;

    sendNotification(email);
    sendNotification(sms);

    return 0;
}
