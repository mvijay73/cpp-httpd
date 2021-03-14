#ifndef __ALT_HTTP__
#define __ALT_HTTP__
//HEADER
#include <Poco/Net/HTTPServer.h>
#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <Poco/Net/HTTPServerParams.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/Net/HTTPServerParams.h>
#include <Poco/Net/HTMLForm.h>
#include <Poco/Net/PartHandler.h>
#include <Poco/Net/MessageHeader.h>
#include <Poco/Net/ServerSocket.h>
#include <Poco/CountingStream.h>
#include <Poco/NullStream.h>
#include <Poco/StreamCopier.h>
#include <Poco/Util/ServerApplication.h>
#include <Poco/Util/Option.h>
#include <Poco/Util/OptionSet.h>
#include <Poco/Util/HelpFormatter.h>
#include <Poco/NumberParser.h>
#include <Poco/Format.h>
#include <Poco/ActiveMethod.h>
#include <Poco/ActiveDispatcher.h>
#include <Poco/Tuple.h>
#include <iostream>
#include <vector>
#include <string>
#include "stackTrace.hpp"

using namespace Poco::Net;
using namespace Poco::Util;
using namespace std;

class altRequestHandler : public HTTPRequestHandler
{
	public:
		altRequestHandler();
		void handleRequest(HTTPServerRequest& request, HTTPServerResponse& response);
	
	private:
};

class altRequestHandlerFactory : public HTTPRequestHandlerFactory
{
	public:
		altRequestHandlerFactory();
		HTTPRequestHandler* createRequestHandler(const HTTPServerRequest& request);
	private:

};

class altHTTPServer : public Poco::Util::ServerApplication
{
		public:
		  altHTTPServer();
			~altHTTPServer();
		
		protected:
			void initialize(Poco::Util::Application& self);
			void uninitialize();
			void defineOptions(Poco::Util::OptionSet& options);
			void handleOption(const std::string& name, const std::string& value);
			void displayHelp ();
			int main (const std::vector<std::string>& args); 
		private:
};
#endif