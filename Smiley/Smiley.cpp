#include <windows.h>
#include <tchar.h>
#include <aced.h>
#include <arxHeaders.h>

// macros
#define szRDS _RXST("TARX")


// declations
class SmileyApp : public AcRxArxApp {
public:
  SmileyApp();

public:
  virtual AcRx::AppRetCode On_kInitAppMsg(void *pkt);
  virtual AcRx::AppRetCode On_kUnloadAppMsg(void *pkt);
  virtual void RegisterServerComponents();

public:
  static void Smiley_smile();
};

// definitions
SmileyApp::SmileyApp()
  : AcRxArxApp()
{
}

AcRx::AppRetCode SmileyApp::On_kInitAppMsg(void *pkt)
{
  auto retCode = AcRxArxApp::On_kInitAppMsg(pkt);

  return retCode;
}

AcRx::AppRetCode SmileyApp::On_kUnloadAppMsg(void *pkt)
{
  auto retCode = AcRxArxApp::On_kUnloadAppMsg(pkt);

  return retCode;
}

void SmileyApp::RegisterServerComponents()
{
}

void SmileyApp::Smiley_smile()
{
}

//-----------------------------------------------------------------------------
IMPLEMENT_ARX_ENTRYPOINT(SmileyApp)
ACED_ARXCOMMAND_ENTRY_AUTO(SmileyApp, Smiley, _smile, smile, ACRX_CMD_TRANSPARENT, NULL)