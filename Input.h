class Input
{
private:
    string tmp;

public:
    Vehicle inputVehicleData()
    {
        Vehicle vh;

        string _model;
        string _engineNumber;
        string _color;
        int _seats;
        VType _type;
        int tp;
        string tmp;

        while (tp != 0)
        {

            cin.clear();
            cin.ignore();
            cout << "[*] Please Select The Type Of Vehicle" << endl;
            cout << "[1] Bike" << endl;
            cout << "[2] Car" << endl;
            cout << "[3] Bus" << endl;
            cout << "[4] Truck" << endl;
            cout << "[0] Back";
            cout << "[Select]>>";
            getline(cin, tmp);
            stringstream(tmp) >> tp;
            if (!(tp >= 0 && tp <= 4))
            {
                system("clear");
                cout << "[!] Please Choose A Correct Option." << endl;
            }
            else
            {
                switch (tp)
                {
                case 1:
                    _type = BIKE;
                    break;
                case 2:
                    _type = CAR;
                    break;
                case 3:
                    _type = BUS;
                    break;
                case 4:
                    _type = TRUCK;
                    break;
                case 0:
                    break;
                }
                break;
            }
        }

        cout << "[*] Please Enter The Model Of Vehicle >> ";
        getline(cin, _model);
        cout << "[*] Please Enter The Engine Number Of Vehicle >> ";
        getline(cin, _engineNumber);
        cout << "[*] Please Enter The Color Of Vehicle >> ";
        getline(cin, _color);
        cout << "[*] Please Enter The Number Of Seats Of Vehicle >> ";
        getline(cin, tmp);
        stringstream(tmp) >> _seats;

        vh.createVehicle(_model, _engineNumber, _color, _seats, _type);

        return vh;
    }

    Person inputPersonData()
    {
        cin.clear();
        cin.ignore();

        Person p;
        Districts dis;
        Display display;

        string _fullName;
        string _fatherName;
        string _cnic;
        string _phoneNumber;
        string _address;
        District _district;
        string tmp;
        int id;

        cout << endl
             << "[*] Please Enter The Full Name >> ";
        getline(cin, _fullName);
        cout << endl
             << "[*] Please Enter The Father Name >> ";
        getline(cin, _fatherName);
        cout << endl
             << "[*] Please Enter The Phone Number >> ";
        getline(cin, _phoneNumber);
        cout << endl
             << "[*] Please Enter The CNIC >> ";
        getline(cin, _cnic);
        while (true)
        {
            cout << endl
                 << "[*] Please Select Distric. ";
            dis.showDistrictList();
            display.selectOption();
            getline(cin, tmp);
            stringstream(tmp) >> id;
            if(dis.verifyID(id)){
                break;
            }else{
                system("clear");
            }
        }
        _district = dis.getDistrict(id);
        cout << endl
             << "[*] Please Enter The Home Address >> ";
        getline(cin, _address);

        p.createPerson(_fullName, _fatherName, _cnic, _phoneNumber, _address, _district);
        return p;
    }

    Date inputDate(){
        cin.clear();
        cin.ignore();
        string tmp;

        Date d;
        cout<<endl<<"[*] Please Enter Date."<<endl;
        cout<<"[-] Day >>";
        getline(cin, tmp);
        stringstream(tmp) >> d.Day;
        cout<<"[-] Month >>";
        getline(cin, tmp);
        stringstream(tmp) >> d.Month;
        cout<<"[-] Year >>";
        getline(cin, tmp);
        stringstream(tmp) >> d.Year;

        return d;
    }

    int getRegID(){
        string tmp;
        int id;
        cout<<"[*] Enter Registration ID >> ";
        getline(cin, tmp);
        stringstream(tmp) >> id;
        return id;
    }

    string getVehicleNumber(){
        string tmp;
        cout<<"[*] Enter Vehicle Number >> ";
        getline(cin, tmp);;
        return tmp;
    }

    loginDetails inputLoginDetails(){
        loginDetails lgdt;
        string user, pass;
        cout<<"[*] Enter Username >> ";
        getline(cin, user);
        cout<<"[*] Enter Password >> ";
        getline(cin, user);
        return lgdt;
    }
};