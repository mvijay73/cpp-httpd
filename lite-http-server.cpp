#include "lite-http-server.hpp"

using namespace Poco::Net;
using namespace Poco::Util;
using namespace std;


int liteRequestHandler::count = 0;

void liteRequestHandler::handleRequest(HTTPServerRequest &req, HTTPServerResponse &resp) {
  resp.setStatus(HTTPResponse::HTTP_OK);
  resp.setContentType("text/html");

  ostream& out = resp.send();
  out << "<h1>Hello world!</h1>"
      << "<p>Count: "  << ++count         << "</p>"
      << "<p>Host: "   << req.getHost()   << "</p>" 
      << "<p>Method: " << req.getMethod() << "</p>"
      << "<p>URI: "    << req.getURI()    << "</p>";
  out.flush();

  cout << endl
       << "Response sent for count=" << count
       << "and URI=" << req.getURI() << endl;
}

int liteHTTPServer::main(const vector<string>& )
{
  int _port=9898;
  // if ( argc > 1)
  //   _port = stoi(argv[2]);
  
  cout << "TryListening on 0.0.0.0:" << _port << endl;
  HTTPServer s(new liteRequestHandlerFactory, ServerSocket(_port), new HTTPServerParams);

  s.start();
  cout << endl << "Server started" << endl;

  waitForTerminationRequest();  // wait for CTRL-C or kill

  cout << endl << "Shutting down..." << endl;
  s.stop();

  return Application::EXIT_OK;
}

