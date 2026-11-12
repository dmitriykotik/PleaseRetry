//========= Copyright (C) 2026, dmitriykotik. Released under the MIT License. ==//
// This file is part of PleaseRetryEmu, an open-source project. This software 
// is provided "AS IS", without warranty of any kind, express or implied, 
// including but not limited to the warranties of merchantability, fitness 
// for a particular purpose and noninfringement.
//
// LEGAL NOTICE: This software is an independent compatibility layer and is NOT 
// affiliated with, endorsed, or authorized by Valve Corporation. "Steam" and 
// "Steamworks" are registered trademarks of Valve Corporation. 
//
// Developed strictly for EDUCATIONAL, RESEARCH, and software preservation 
// purposes. The author holds NO LIABILITY for any misuse, legal consequences, 
// or third-party restrictions. All actions are performed at your own risk.
//=============================================================================//

#pragma once

#include "isteamhttp.h"

class ISteamHTTP002 {
public:
	virtual HTTPRequestHandle CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL) = 0;

	virtual bool SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue) = 0;

	virtual bool SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds) = 0;

	virtual bool SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue) = 0;

	virtual bool SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue) = 0;

	virtual bool SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle) = 0;

	virtual bool SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle) = 0;

	virtual bool DeferHTTPRequest(HTTPRequestHandle hRequest) = 0;

	virtual bool PrioritizeHTTPRequest(HTTPRequestHandle hRequest) = 0;

	virtual bool GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize) = 0;

	virtual bool GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize) = 0;

	virtual bool GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 *unBodySize) = 0;

	virtual bool GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize) = 0;

	virtual bool GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize) = 0;

	virtual bool ReleaseHTTPRequest(HTTPRequestHandle hRequest) = 0;

	virtual bool GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float *pflPercentOut) = 0;

	virtual bool SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen) = 0;

	virtual HTTPCookieContainerHandle CreateCookieContainer(bool bAllowResponsesToModify) = 0;

	virtual bool ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer) = 0;

	virtual bool SetCookie(HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie) = 0;

	virtual bool SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer) = 0;

	virtual bool SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, const char *pchUserAgentInfo) = 0;

	virtual bool SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate) = 0;

	virtual bool SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32 unMilliseconds) = 0;

	virtual bool GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool *pbWasTimedOut) = 0;
};

#define STEAMHTTP_INTERFACE_VERSION_002 "STEAMHTTP_INTERFACE_VERSION002"