#include <windows.h>
#include <tchar.h>
#include <aced.h>
#include <arxHeaders.h>


// declations
class HelloWorldApp : public AcRxArxApp {
public:
  HelloWorldApp();

public:
  virtual AcRx::AppRetCode On_kInitAppMsg(void *pkt);
  virtual AcRx::AppRetCode On_kUnloadAppMsg(void *pkt);
  virtual void RegisterServerComponents();

public:
  static void HelloWorld_Hello();
};

// definitions
HelloWorldApp::HelloWorldApp()
  : AcRxArxApp()
{
}

AcRx::AppRetCode HelloWorldApp::On_kInitAppMsg(void *pkt)
{
  auto retCode = AcRxArxApp::On_kInitAppMsg(pkt);

  return retCode;
}

AcRx::AppRetCode HelloWorldApp::On_kUnloadAppMsg(void *pkt)
{
  auto retCode = AcRxArxApp::On_kUnloadAppMsg(pkt);

  return retCode;
}

void HelloWorldApp::RegisterServerComponents()
{
}

void HelloWorldApp::HelloWorld_Hello()
{
  acutPrintf(_T("Hello World App!\n"));
}

//-----------------------------------------------------------------------------
IMPLEMENT_ARX_ENTRYPOINT(HelloWorldApp)
ACED_ARXCOMMAND_ENTRY_AUTO(HelloWorldApp, HelloWorld, _Hello, Hello, ACRX_CMD_TRANSPARENT, NULL)
