class Display{
    private:
        int len = 125;
        char ch = '=';
    public:
        void printLine(){
            cout<<endl;
            for(int i = 0; i < this->len; i++){
                cout<<ch;
            }
            cout<<endl;
        }

        void clear(){
            system("clear");
        }

        void selectOption(){
            cout<<"[Select]>>";
        }

        void showLogin(){
            cout<<"[*] Select User Type."<<endl;
            cout<<"[1] Registere."<<endl;
            cout<<"[2] Admin."<<endl;
            cout<<"[0] Exit."<<endl;
            selectOption();
        }

        void showIncorrectOptionSelected(){
            cout<<"[!] Incorrect Option Selecte."<<endl;
        }

        void showRegistereOption(){
            cout<<"[*] Select An Option."<<endl;
            cout<<"[1] Register New Vehicle."<<endl;
            cout<<"[2] Cancel Registration."<<endl;
            cout<<"[3] Renew Registration."<<endl;
            cout<<"[4] Pay Voucher."<<endl;
            cout<<"[5] Check Registration."<<endl;
            cout<<"[6] Vehicle Owner Information."<<endl;
            cout<<"[7] Show Vehicles."<<endl;
            cout<<"[0] Logout."<<endl;
            selectOption();
        }

        void showRegID(int regNum, int fee, string vehicleNumber){
            printLine();
            cout<<"Your Vehicle Has Been Regestered Successfully."<<endl;
            cout<<"Registration Number = "<<regNum<<endl;
            cout<<"Vehicle Number = "<<vehicleNumber<<endl;
            cout<<"Processing Fee = "<<fee;
            printLine();
        }

        void showVehicleNumber(string Num){
            printLine();
            cout<<"Vehicle Number = "<<Num;
            printLine();
        }

        void showRenewReg(string Num){
            printLine();
            cout<<"Vehicle Number = "<<Num<< " Has Been Renewed Successfull.";
            printLine();
        }
        void showIncorrectID(){
            clear();
            printLine();
            cout<<"[!] Id Cannont Found.";
            printLine();
        }

        void showRegStatss(bool status){
            clear();
            printLine();
            if(status){
                cout<<"[*] Vehicle Is Registered.";
            }else{
                cout<<"[!] Vehicle Is Not Registered.";
            }
            printLine();
        }

        void showOwnerInformation(string fullName, string fatherName, string cnic, string phoneNumber, string address){
            clear();
            printLine();
            cout<<"[*_*] Owner Information."<<endl;
            cout<<"[-] Full Name >> "<<fullName<<endl;
            cout<<"[-] Father Name >> "<<fatherName<<endl;
            cout<<"[-] CNIC >> "<<cnic<<endl;
            cout<<"[-] Phone Number >> "<<phoneNumber<<endl;
            cout<<"[-] Address >> " << address; 
            printLine();

        }

        void showVehiclesHeader(){
            clear();
            printLine();
            cout<<setw(5)<<left<<"#";
            cout<<setw(20)<<left<<"Full Name";
            cout<<setw(20)<<left<<"CNIC";
            cout<<setw(20)<<left<<"Vehicle Number";
            cout<<setw(20)<<left<<"Status";
            cout<<setw(20)<<left<<"Fee";
            cout<<setw(20)<<left<<"Date";
            printLine();
        }

        void loginError(){
            clear();
            cout<<"[!] Incorrect Username And Password!";
            printLine();
        }

        void showAdminOptions(){

        }
};