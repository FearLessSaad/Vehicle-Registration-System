#include "Core.h"

// void AdminPortal(Core &core);
void Registerer(Core &core);

int main()
{

    Core core;

    Registerer(core);


    return 0;
}

void Registerer(Core &core)
{
    string tmp;
    char option;
    int _id;
    do
    {
        cin.ignore();
        cin.clear();
        core.display.clear();
        core.display.printLine();
        core.display.showRegistereOption();
        getline(cin, tmp);
        stringstream(tmp) >> option;

        switch (option)
        {
        case '1':
            core.regs.newRegistration();
            break;
        case '2':
            _id = core.input.getRegID();
            while (true)
            {
                if (core.regs.verifyID(_id))
                {
                    core.regs.cancelRegistration(_id);
                    break;
                }
                else
                {
                    core.display.showIncorrectID();
                }
            }
            break;
        case '3':
            _id = core.input.getRegID();
            while (true)
            {
                if (core.regs.verifyID(_id))
                {
                    core.regs.renewRegistration(_id);
                    break;
                }
                else
                {
                    core.display.showIncorrectID();
                }
            }
            break;
        case '4':
            _id = core.input.getRegID();
            while (true)
            {
                if (core.regs.verifyID(_id))
                {
                    core.regs.payVoucher(_id);
                    break;
                }
                else
                {
                    core.display.showIncorrectID();
                }
            }
            break;
        case '5':
            _id = core.input.getRegID();
            while (true)
            {
                if (core.regs.verifyID(_id))
                {
                    core.display.showRegStatss(core.regs.checkReg(_id));
                    break;
                }
                else
                {
                    core.display.showIncorrectID();
                }
            }
            break;
        case '6':
            core.regs.showOwnerInformation(core.input.getVehicleNumber());
            break;
        case '7':
            core.regs.showAllVehicles();
            break;
        case '0':
            break;
        default:
            core.display.clear();
            core.display.showIncorrectOptionSelected();
            break;
        }

    } while (option != '0');
}
// void AdminPortal(Core &core)
// {
//     core.display.clear();
// }