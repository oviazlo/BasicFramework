/// custom libs
#include "serviceFunctions.h"
#include "boostServiceFunctions.h"

po::variables_map vm;

int main(int argc, char **argv) {
	/// Define and parse the program options
	po::options_description desc("Options");
	desc.add_options()
		("help,h", "Print help messages")
		;
	
	SetAtlasStyle();

	/// get global input arguments
	const size_t returnedMessage = parseOptionsWithBoost(vm,argc,argv, desc);
	if (returnedMessage!=SUCCESS) std::exit(returnedMessage);

}
