#include "../lite-http-server.hpp"

using namespace Poco::Net;
using namespace Poco::Util;
using namespace std;

int main(int argc, char** argv)
{
 
  liteHTTPServer app;
  return app.run(argc, argv);
}
