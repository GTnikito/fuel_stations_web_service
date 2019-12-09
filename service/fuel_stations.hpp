#pragma once

#include <cppcms/application.h>
#include <cppcms/service.h>
#include <string>

class fuel_stations: public cppcms::application {
public:
    fuel_stations(cppcms::service &srv);

    void get(std::string station_id);

    void welcome();
};

