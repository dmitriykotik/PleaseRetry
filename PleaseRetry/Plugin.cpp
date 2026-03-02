#include "pch.h"
#include "SSE_PDK/SSE_PDK.h"
#include "ISteamGameCoordinator001Lite.h"

CApi* api;
ISteamClient016* g_poClient;

LPVOID SSE_CALL MyInterfaceProvider(PCSTR pchVersion, int hSteamUser, int hSteamPipe)
{
    if (strcmp(pchVersion, STEAMGAMECOORDINATOR_INTERFACE_VERSION_001) == 0)
    {
        ISteamGameCoordinator001* oGC = (ISteamGameCoordinator001*)g_poClient->GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
        if (oGC) return new ISteamGameCoordinator001Lite(oGC, api);
    }
    return NULL;
}

SSE_PDK void SSE_CALL SmartInit(CApi* pApi)
{
    api = pApi;
    g_poClient = (ISteamClient016*)api->GetSteamClientInterface(STEAMCLIENT_INTERFACE_VERSION_016);
    api->RegisterInterfaceProvider(MyInterfaceProvider);
    api->Log("PleaseRetry: Game Coordinator Interceptor Loaded.");
}

SSE_PDK void SSE_CALL SmartShutdown(bool bAllThreadsTerminated)
{
    api->UnregisterInterfaceProvider(MyInterfaceProvider);
}