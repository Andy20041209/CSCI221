#ifndef OFFICE_BUILDING_HPP
#define OFFICE_BUILDING_HPP

#include "developed_lot.hpp"

class Office: public DevelopedLot{
private: 
    int num_offices;
public: 
    Office(double lat, double lon, double wid, double len, double area, int floor, int num_offices):DevelopedLot(lat, lon, wid, len, area, floor){
        this->num_offices = num_offices;
    }
    virtual ~Office(){}
    double value() const override{
        return DevelopedLot::value() + 200.0*num_offices;
    }

};
#endif