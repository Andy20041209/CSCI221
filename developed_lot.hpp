#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include "lot.hpp"

class DevelopedLot:public Lot{
private:
    double area;
    int floor;
public:
    DevelopedLot(double lat, double lon, double wid, double len, double area, int floor):Lot(lat,lon,wid,len){
        this->area = area;
        this->floor = floor;
    }
    virtual ~DevelopedLot(){}
    double value() const override{
        return Lot::value()+100*area*floor;
    }
protected:
    double floor_area_ratio() const{
        if (!land_area()){
            return 0;
        }
        return area*floor/land_area();
    }
};