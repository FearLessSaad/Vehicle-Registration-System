class Person
{
private:
    int id;
    string fullName;
    string fatherName;
    string cnic;
    string phoneNumber;
    District district;
    string address;

public:

     void createPerson(string _fullName, string _fatherName, string _cnic, string _phoneNumber, string _address, District _district)
    {
        this->fullName = _fullName;
        this->fatherName = _fatherName;
        this->cnic = _cnic;
        this->phoneNumber = _phoneNumber;
        this->address = _address;
        this->district = _district;
    }

    // Transfer OwnerShip
    void transferOwnerShip(string _fullName, string _fatherName, string _cnic, string _phoneNumber, string _address, District _district)
    {
        this->fullName = _fullName;
        this->fatherName = _fatherName;
        this->cnic = _cnic;
        this->phoneNumber = _phoneNumber;
        this->address = _address;
        this->district = _district;
    }

    // Verify ID
    bool verifyID(int _id)
    {
        return (this->id == _id);
    }

    void setID(int _id)
    {
        this->id = id;
    }

    /*
     *
     **Return User Inforamtion**
     *
     */

    int getUserID()
    {
        return this->id;
    }

    string getFullName()
    {
        return this->fullName;
    }

    string getFatherName()
    {
        return this->fatherName;
    }

    string getCNIC()
    {
        return this->cnic;
    }

    string getPhoneNumber()
    {
        return this->phoneNumber;
    }

    string getAddress()
    {
        return this->address;
    }

    District getDistrict(){
        return this->district;
    }
};
