class Voucher{
    private:
        int voucherID;
        int ammount;
        bool isPayed;
    public:
        //Create New Voucher
        void createVoucher(int _id, VType type, bool _isPayed = false){
            this->voucherID = _id;
            this->isPayed = _isPayed; 

            if(type == BIKE) ammount = 1500;
            if(type == CAR) ammount = 5000;
            if(type == BUS) ammount = 10000;
            if(type == TRUCK) ammount = 20000;
        }

        //Pay Voucher
        void payVoucher(){
            this->isPayed = true;
        }

        //get id
        int getVoucherID(){
            return this->voucherID;
        }

        //get ammount
        int getAmmount(){
            return this->ammount;
        }

        //get Status
        bool getVoucherStatus(){
            return this->isPayed;
        }

};