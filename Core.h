#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

#include "sha256.h"
#include "Structures.h"
#include "User.h"
#include "Accounts.h"
#include "Districts.h"
#include "Vehicle.h"
#include "VehicleNumber.h"
#include "Voucher.h"
#include "Person.h"
#include "RegDetails.h"
#include "Display.h"
#include "Input.h"
#include "Registrations.h"

class Core{
    public:
        Registrations regs;
        Accounts accounts;
        Display display;
        Input input;

        Core(){
            Date dob;
            dob.Day = 29;
            dob.Month = 10;
            dob.Year = 2021;
            accounts.createNewUser("Muhammad Saad", "Muhammad Arshad", "33301-xxxxxxx-9", "03454360279", dob, "admin", "admin", true);
            accounts.createNewUser("Muhammad Saad", "Muhammad Arshad", "33301-xxxxxxx-9", "03454360279", dob, "reg", "reg123");
        }

};