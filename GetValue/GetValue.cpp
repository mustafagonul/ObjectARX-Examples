#include <windows.h>
#include <tchar.h>
#include <aced.h>
#include <arxHeaders.h>


// declations
class GetValueApp : public AcRxArxApp {
public:
  GetValueApp();

public:
  virtual AcRx::AppRetCode On_kInitAppMsg(void *pkt);
  virtual AcRx::AppRetCode On_kUnloadAppMsg(void *pkt);
  virtual void RegisterServerComponents();

public:
  static void GetValue_GetString();
};

// definitions
GetValueApp::GetValueApp()
  : AcRxArxApp()
{
}

AcRx::AppRetCode GetValueApp::On_kInitAppMsg(void *pkt)
{
  auto retCode = AcRxArxApp::On_kInitAppMsg(pkt);

  return retCode;
}

AcRx::AppRetCode GetValueApp::On_kUnloadAppMsg(void *pkt)
{
  auto retCode = AcRxArxApp::On_kUnloadAppMsg(pkt);

  return retCode;
}

void GetValueApp::RegisterServerComponents()
{
}

void GetValueApp::GetValue_GetString()
{
  static const unsigned buffersize = 255;

  ACHAR buffer[buffersize + 1] = {0};

  acedGetString(false, _T("Enter some string: "), buffer, buffersize);

  acutPrintf(_T("\n"));
  acutPrintf(buffer);
  acutPrintf(_T("\n"));
}


//-----------------------------------------------------------------------------
IMPLEMENT_ARX_ENTRYPOINT(GetValueApp)
ACED_ARXCOMMAND_ENTRY_AUTO(GetValueApp, GetValue, _GetString, GetString, ACRX_CMD_TRANSPARENT, NULL)