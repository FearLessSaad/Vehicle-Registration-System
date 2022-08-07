class Districts
{
protected:
    vector<District> districts;

public:
    //Load Districts From CSV File
    Districts()
    {
        districts.clear();

        fstream fin;
        fin.open("districts.csv", ios::in);
        bool chk = true;
        int i = 1;
        string line, word;
        while (fin)
        {
            District ds;
            getline(fin, line);
            stringstream s(line);
            while (getline(s, word, ','))
            {
                if(chk){
                    ds.name = word;
                    chk=false;
                }else{
                    ds.shortName = word;
                }
            }
            chk = true;
            ds.id = i;
            districts.push_back(ds);
            i++;
        }
    }

    void showDistrictList(){
        int i = 0;
        for(auto it = districts.begin(); it != districts.end(); it++){
            if(i % 3 == 0) cout<<endl;
            cout<<setw(25)<<left<<"["+to_string(it->id)+"] "+it->name;
            i++;
        }
        cout<<endl;
    }

    District getDistrict(int _id){
        District d;
        for(auto it = districts.begin(); it != districts.end(); it++){
            if(it->id == _id) d = *it;
        }
        return d;
    }

    bool verifyID(int _id){
        for(auto it = districts.begin(); it != districts.end(); it++){
            if(it->id == _id) return true;
        }
        return false;
    }

    
};