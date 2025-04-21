#pragma once
#include <iostream>
#include <cmath>
#include <string>

class Lot{
private:
    double lat;
    double lon;
    double wid;
    double len;
public:
    Lot(){
        lat = 0;
        lon = 0;
        wid = 0;
        len = 0;
    }
    Lot(double lat, double lon, double wid, double len){
        this->lat = lat;
        this->lon = lon;
        this->wid = wid;
        this->len = len;
    }
    double get_lat() const{
        return this->lat;
    }
    double get_lon() const{
        return this->lon;
    }
    virtual double value() const{
        double cost_per_area = 16;
        return cost_per_area*land_area();
    }
    virtual ~Lot(){}
protected:
    double land_area() const{
        return wid*len;
    }
};