class Accounts
{
private:
    vector<User> users;

public:
    // Add New User
    void createNewUser(string _fullName, string _fatherName, string _cnic, string _phoneNumber, Date _dob, string _username, string _password, bool isAdmin = false)
    {
        User user(_fullName, _fatherName, _cnic, _phoneNumber, _dob, _username, SHA256(_password), isAdmin);
        user.setUserID(this->users.size() + 1);
        this->users.push_back(user);
    }

    // Login
    bool login(string _username, string _password)
    {
        for (auto it = users.begin(); it != users.end(); it++)
        {
            if(it->login(_username, _password)){
                return true;
            }
        }
        return false;
    }

    // Login Admin
    bool loginAdmin(string _username, string _password)
    {
        for (auto it = users.begin(); it != users.end(); it++)
        {
            if (it->loginAdmin(_username, _password))
            {
                return true;
            }
        }
        return false;
    }

    // Verify Is ID is Correct
    bool verifyID(int id)
    {
        for (auto it = users.begin(); it != users.end(); it++)
        {
            if (it->verifyID(id))
            {
                return true;
            }
        }
        return false;
    }

    // Update User Information
    bool updateUser(int id, string fullName, string fatherName, string cnic, string phoneNumber, Date dob)
    {
        if (this->verifyID(id))
        {
            for (auto it = users.begin(); it != users.end(); it++)
            {
                if (it->getUserID() == id)
                {
                    it->updateUserInfo(fullName, fatherName, cnic, phoneNumber, dob);
                    return true;
                }
            }
        }
        return false;
    }
};