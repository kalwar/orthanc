#include "../../Core/HttpClient.h"
#include "../OrthancConnection.h"


class SharedLibrarySingleton
{
public:
  SharedLibrarySingleton()
  {
    Orthanc::HttpClient::GlobalInitialize();
  }

  ~SharedLibrarySingleton()
  {
    Orthanc::HttpClient::GlobalFinalize();
  }
};


static SharedLibrarySingleton  singleton_;


#include "Build/ExternC.cpp"
