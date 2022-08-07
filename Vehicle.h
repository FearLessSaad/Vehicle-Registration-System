class Vehicle{
    private:
        int id;
        string model;
        string engineNumber;
        string color;
        int seats;
        VType type;
    public:
        //Careate A New Vehicle
        void createVehicle(string _model, string _engineNumber, string _color, int _seats, VType _type){
            this->model = _model;
            this->engineNumber = _engineNumber;
            this->color = _color;
            this->seats = _seats;
            this->type = _type;
        }

        //Set The ID Of Vehicle
        void setID(int _id){
            this->id = _id;
        }

        //Verify Vehicle ID
        bool verifyID(int _id){
            return (this->id == _id);
        }
        
        /*
        *
        **Return Vehicle Inforamtion**
        *
        */

       int getID(){
        return this->id;
       }

       string getModel(){
        return this->model;
       }

       string getEngineNumber(){
        return this->engineNumber;
       }

       string getColor(){
        return this->color;
       }

       int getSeats(){
        return this->seats;
       }

       string getVehicleType(){
        if(type == BIKE) return "Bike";
        if(type == CAR) return "Car";
        if(type == BUS) return "Bus";
        if(type == TRUCK) return "Truck";
       }

       VType enumGetVehicleType(){
        return this->type;
       }
};