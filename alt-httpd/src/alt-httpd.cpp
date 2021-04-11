#include "alt-httpd.hpp"

using namespace Poco::Net;
using namespace Poco::Util;
using namespace std;

extern stackTrace s;

altRequestHandler::altRequestHandler() {

}

void altRequestHandler::handleRequest(HTTPServerRequest& req, HTTPServerResponse& response) {

}

altRequestHandlerFactory::altRequestHandlerFactory(){

}

HTTPRequestHandler* altRequestHandlerFactory::createRequestHandler(const HTTPServerRequest& request) {
  return NULL;
}

altHTTPServer::altHTTPServer() { 
  _T 
}

altHTTPServer::~altHTTPServer(){ 
  _T 
}
void altHTTPServer::initialize(Poco::Util::Application& self) {

}


void altHTTPServer::uninitialize() {

}

void altHTTPServer::defineOptions(Poco::Util::OptionSet& options) {

}

void altHTTPServer::handleOption(const std::string& name, const std::string& value) {

}

void altHTTPServer::displayHelp () {
  
}

int altHTTPServer::main (const std::vector<std::string>& args) {
  return 0;
}
