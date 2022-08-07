class Registrations
{
private:
    vector<RegDetails> registrations;
    Input input;
    Display display;

public:
    void newRegistration()
    {

        display.clear();
        display.printLine();

        RegDetails rgdt;
        rgdt.vehicle = input.inputVehicleData();
        rgdt.vehicle.setID(registrations.size() + 1);
        display.printLine();

        rgdt.person = input.inputPersonData();
        rgdt.person.setID(registrations.size() + 1);
        display.printLine();

        VehicleNumber vhnum;
        vhnum.generateVehicleNumber(rgdt.person.getDistrict().id, registrations.size() + 1);
        rgdt.vehicleNumber = vhnum;

        Voucher vchr;
        vchr.createVoucher((registrations.size() + 1), rgdt.vehicle.enumGetVehicleType());
        rgdt.voucher = vchr;

        rgdt.regStatus = false;
        rgdt.regID = registrations.size() + 1;

        rgdt.regDate = input.inputDate();

        registrations.push_back(rgdt);

        display.showRegID(rgdt.regID, rgdt.voucher.getAmmount(), rgdt.vehicleNumber.getVehicleNumber());
    }

    void cancelRegistration(int id)
    {
        for (auto it = registrations.begin(); it != registrations.end(); it++)
        {
            if (it->regID == id)
            {
                it->regStatus = false;
                display.showVehicleNumber(it->vehicleNumber.getVehicleNumber());
            }
        }
    }

    bool verifyID(int id)
    {
        for (auto it = registrations.begin(); it != registrations.end(); it++)
        {
            if (it->regID == id)
            {
                return true;
            }
        }
        return false;
    }

    void renewRegistration(int id)
    {
        for (auto it = registrations.begin(); it != registrations.end(); it++)
        {
            if (it->regID == id)
            {
                it->regStatus = true;
                display.showRenewReg(it->vehicleNumber.getVehicleNumber());
            }
        }
    }

    void payVoucher(int id)
    {
        for (auto it = registrations.begin(); it != registrations.end(); it++)
        {
            if (it->regID == id)
            {
                it->voucher.payVoucher();
                it->regStatus = true;
            }
        }
    }

    bool checkReg(int id){
        for (auto it = registrations.begin(); it != registrations.end(); it++)
        {
            if (it->regID == id && it->regStatus)
            {
               return true;
            }
        }
        return false;
    }

    void showOwnerInformation(string number){
        bool stat = false;
        for (auto it = registrations.begin(); it != registrations.end(); it++)
        {
            if(it->vehicleNumber.getVehicleNumber() == number){
                display.showOwnerInformation(it->person.getFullName(), it->person.getFatherName(), it->person.getCNIC(), it->person.getPhoneNumber(), it->person.getAddress());
                stat = true;
            }
        }
        if(!stat){
            display.clear();
            display.printLine();
            cout<<"[!] Incorrect Vehicle Number."<<endl;
            display.printLine();
        }
    }

    void showAllVehicles(){
        display.showVehiclesHeader();
        display.printLine();
        for(auto it = registrations.begin(); it != registrations.end(); it++){
            string regStatus;
            (it->regStatus)?regStatus ="Registered":regStatus="Not Registered";
            cout<<setw(5)<<left<<it->regID;
            cout<<setw(20)<<left<<it->person.getFullName();
            cout<<setw(20)<<left<<it->person.getCNIC();
            cout<<setw(20)<<left<<it->vehicleNumber.getVehicleNumber();
            cout<<setw(20)<<left<<regStatus;
            cout<<setw(20)<<left<<to_string(it->voucher.getAmmount())+ "/RS";
            cout<<setw(20)<<left<<it->regDate.Day<<"/"<<it->regDate.Month<<"/"<<it->regDate.Year;
            cout<<endl;
        }
        display.printLine();
    }
};