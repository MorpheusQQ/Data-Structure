// Generic Exception Class
// p.97

#ifndef RUNTIMEEXCEPTION
#define RUNTIMEEXCEPTION

#include <string>

using std::string;

class RuntimeException { // generic run-time exception
private:
	string errorMsg;
public:
	RuntimeException(const string& err) {
		errorMsg = err;
	}
	string getMessage() const {
		return errorMsg;
	}
};

#endif
