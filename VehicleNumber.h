class VehicleNumber : private Districts{
    private:
        int id;
        string vehicleNumber;
    public: 
        void generateVehicleNumber(int districtID, int _id){
            string num;
            for(auto it = districts.begin(); it != districts.end(); it++){
                if(it->id == districtID){
                    num = it->shortName;
                }
            }

            num = num + " - " + to_string(id);
            this->vehicleNumber = num;
        }

        void setID(int _id){
            this->id = _id;
        }

        string getVehicleNumber(){
            return this->vehicleNumber;
        }
};