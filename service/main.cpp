#include <cppcms/application.h>
#include <cppcms/applications_pool.h>
#include <cppcms/service.h>
#include <cppcms/http_response.h>

#include "fuel_stations.hpp"
#include <iostream>

int main(int argc,char ** argv) {
    std::cout << "Launching example!" << std::endl;

    try {
        cppcms::service srv(argc, argv);
        
        srv.applications_pool().mount(
            cppcms::applications_factory<fuel_stations>()
        );
        srv.run();
    }
    catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
