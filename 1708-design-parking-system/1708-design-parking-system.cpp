class ParkingSystem {
private:
    int s[4];
public:
    ParkingSystem(int big,int medium,int small){
        s[1] = big;
        s[2] = medium;
        s[3] = small;
    }
    bool addCar(int t){
        if(s[t]>0){
            s[t]--;
            return true;
        }
        return false;
    }
};
