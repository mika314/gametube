#include "log.hpp"

int main()
{
  LOGFAIL("cannot open file");
  LOGWARN("IP address may be missing");
  LOGINFO("Starting the service");
  LOGDEBUG("Package is sent");
}
