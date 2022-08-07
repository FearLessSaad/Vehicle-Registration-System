class User{
    private:
        int userID;
        string fullName;
        string fatherName;
        string cnic;
        string phoneNumber;
        string username;
        string password;
        Date dob;
        bool isAdmin;
    public:
        //Constructor That Creats New User
        User(string _fullName, string _fatherName, string _cnic, string _phoneNumber, Date _dob, string _username, string _password, bool _isAdmin){
            this->fullName = _fullName;
            this->fatherName = _fatherName;
            this->cnic = _cnic;
            this->phoneNumber = _phoneNumber;
            this->dob = _dob;
            this->username = _username;
            this->password = SHA256(_password);
            this->isAdmin = _isAdmin;
        }

        //Update User Information
        void updateUserInfo(string _fullName, string _fatherName, string _cnic, string _phoneNumber, Date _dob){
            this->fullName = _fullName;
            this->fatherName = _fatherName;
            this->cnic = _cnic;
            this->phoneNumber = _phoneNumber;
            this->dob = _dob;
        }

        //Update Password
        void updatePassword(string _password){
            this->password = SHA256(_password);
        }

        //Verify ID
        bool verifyID(int id){
            return (this->userID == id);
        }

        //Login User
        bool login(string _username, string _password){
            return (this->username == _username && this->password == SHA256(_password));
        }

        //Login Admin
        bool loginAdmin(string _username, string _password){
            return (this->username == _username && this->password == SHA256(_password) && this->isAdmin);
        }

        /*
        *
        **Return User Inforamtion**
        *
        */

        void setUserID(int id){
            this->userID = id;
        }

        int getUserID(){
            return this->userID;
        }

        string getFullName(){
            return this->fullName;
        }

        string getFatherName(){
            return this->fatherName;
        }

        string getCNIC(){
            return this->cnic;
        }

        string getPhoneNumber(){
            return this->phoneNumber;
        }

        string getUserName(){
            return this->username;
        }

        string getPassword(){
            return this->password;
        }

        bool isAdm(){
            return this->isAdmin;
        }
};