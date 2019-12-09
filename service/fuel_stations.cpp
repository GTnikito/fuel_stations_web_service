#include <cppcms/application.h>
#include <cppcms/service.h>
#include <cppcms/http_response.h>
#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>

#include "fuel_stations.hpp"
#include <fstream>

fuel_stations::fuel_stations(cppcms::service &srv): cppcms::application(srv) {
	dispatcher().assign("/fuel_stations/id/(\\d+)", &fuel_stations::get, this, 1);
	mapper().assign("get", "/fuel_stations/id/{1}");

	dispatcher().assign("/fuel_stations", &fuel_stations::welcome, this);
	mapper().assign("fuel_stations");
	  
	mapper().root("/hello_world");
}

void fuel_stations::get(std::string station_id) {
    std::string station_name = "BelarusNeft";
  
    response().out() << "This station is " << station_name << "<br/>\n";
};

void fuel_stations::welcome() {
    response().out() << "<h1> Welcome To Page with links</h1>\n"
        "<a href='" << url("/get", 1)  << "'>See fuel stations</a><br>\n";
};
