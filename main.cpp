#include <random>
#include "src/easylogging++.h"

INITIALIZE_EASYLOGGINGPP

std::random_device rd;
std::mt19937 randomizer_engine(rd()); // seeding random number engine


int cafexp(int argc, char *const argv[]);

int main(int argc, char *const argv[]) {

    el::Configurations defaultConf;
    defaultConf.setToDefault();
    defaultConf.set(el::Level::Global, el::ConfigurationType::Format, "%msg");
    el::Loggers::reconfigureLogger("default", defaultConf);

    cafexp(argc, argv);
}
