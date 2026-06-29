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

#include "steamtypes.h"
#include "steamuniverse.h"

/*
enum EResult {
	k_EResultNone = 0,
	k_EResultOK	= 1,
	k_EResultFail = 2,
	k_EResultNoConnection = 3,
//	k_EResultNoConnectionRetry = 4,
	k_EResultInvalidPassword = 5,				// password/ticket is invalid
	k_EResultLoggedInElsewhere = 6,				// same user logged in elsewhere
	k_EResultInvalidProtocolVer = 7,			// protocol version is incorrect
	k_EResultInvalidParam = 8,					// a parameter is incorrect
	k_EResultFileNotFound = 9,					// file was not found
	k_EResultBusy = 10,							// called method busy - action not taken
	k_EResultInvalidState = 11,					// called object was in an invalid state
	k_EResultInvalidName = 12,					// name is invalid
	k_EResultInvalidEmail = 13,					// email is invalid
	k_EResultDuplicateName = 14,				// name is not unique
	k_EResultAccessDenied = 15,					// access is denied
	k_EResultTimeout = 16,						// operation timed out
	k_EResultBanned = 17,						// VAC2 banned
	k_EResultAccountNotFound = 18,				// account not found
	k_EResultInvalidSteamID = 19,				// steamID is invalid
	k_EResultServiceUnavailable = 20,			// The requested service is currently unavailable
	k_EResultNotLoggedOn = 21,					// The user is not logged on
	k_EResultPending = 22,						// Request is pending (may be in process, or waiting on third party)
	k_EResultEncryptionFailure = 23,			// Encryption or Decryption failed
	k_EResultInsufficientPrivilege = 24,		// Insufficient privilege
	k_EResultLimitExceeded = 25,				// Too much of a good thing
	k_EResultRevoked = 26,						// Access has been revoked (used for revoked guest passes)
	k_EResultExpired = 27,						// License/Guest pass the user is trying to access is expired
	k_EResultAlreadyRedeemed = 28,				// Guest pass has already been redeemed by account, cannot be acked again
	k_EResultDuplicateRequest = 29,				// The request is a duplicate and the action has already occurred in the past, ignored this time
	k_EResultAlreadyOwned = 30,					// All the games in this guest pass redemption request are already owned by the user
	k_EResultIPNotFound = 31,					// IP address not found
	k_EResultPersistFailed = 32,				// failed to write change to the data store
	k_EResultLockingFailed = 33,				// failed to acquire access lock for this operation
	k_EResultLogonSessionReplaced = 34,
	k_EResultConnectFailed = 35,
	k_EResultHandshakeFailed = 36,
	k_EResultIOFailure = 37,
	k_EResultRemoteDisconnect = 38,
	k_EResultShoppingCartNotFound = 39,			// failed to find the shopping cart requested
	k_EResultBlocked = 40,						// a user didn't allow it
	k_EResultIgnored = 41,						// target is ignoring sender
	k_EResultNoMatch = 42,						// nothing matching the request found
	k_EResultAccountDisabled = 43,
	k_EResultServiceReadOnly = 44,				// this service is not accepting content changes right now
	k_EResultAccountNotFeatured = 45,			// account doesn't have value, so this feature isn't available
	k_EResultAdministratorOK = 46,				// allowed to take this action, but only because requester is admin
	k_EResultContentVersion = 47,				// A Version mismatch in content transmitted within the Steam protocol.
	k_EResultTryAnotherCM = 48,					// The current CM can't service the user making a request, user should try another.
	k_EResultPasswordRequiredToKickSession = 49,// You are already logged in elsewhere, this cached credential login has failed.
	k_EResultAlreadyLoggedInElsewhere = 50,		// You are already logged in elsewhere, you must wait
	k_EResultSuspended = 51,					// Long running operation (content download) suspended/paused
	k_EResultCancelled = 52,					// Operation canceled (typically by user: content download)
	k_EResultDataCorruption = 53,				// Operation canceled because data is ill formed or unrecoverable
	k_EResultDiskFull = 54,						// Operation canceled - not enough disk space.
	k_EResultRemoteCallFailed = 55,				// an remote call or IPC call failed
	k_EResultPasswordUnset = 56,				// Password could not be verified as it's unset server side
	k_EResultExternalAccountUnlinked = 57,		// External account (PSN, Facebook...) is not linked to a Steam account
	k_EResultPSNTicketInvalid = 58,				// PSN ticket was invalid
	k_EResultExternalAccountAlreadyLinked = 59,	// External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first
	k_EResultRemoteFileConflict = 60,			// The sync cannot resume due to a conflict between the local and remote files
	k_EResultIllegalPassword = 61,				// The requested new password is not legal
	k_EResultSameAsPreviousValue = 62,			// new value is the same as the old one ( secret question and answer )
	k_EResultAccountLogonDenied = 63,			// account login denied due to 2nd factor authentication failure
	k_EResultCannotUseOldPassword = 64,			// The requested new password is not legal
	k_EResultInvalidLoginAuthCode = 65,			// account login denied due to auth code invalid
	k_EResultAccountLogonDeniedNoMail = 66,		// account login denied due to 2nd factor auth failure - and no mail has been sent - partner site specific
	k_EResultHardwareNotCapableOfIPT = 67,		// 
	k_EResultIPTInitError = 68,					// 
	k_EResultParentalControlRestricted = 69,	// operation failed due to parental control restrictions for current user
	k_EResultFacebookQueryError = 70,			// Facebook query returned an error
	k_EResultExpiredLoginAuthCode = 71,			// account login denied due to auth code expired
	k_EResultIPLoginRestrictionFailed = 72,
	k_EResultAccountLockedDown = 73,
	k_EResultAccountLogonDeniedVerifiedEmailRequired = 74,
	k_EResultNoMatchingURL = 75,
	k_EResultBadResponse = 76,					// parse failure, missing field, etc.
	k_EResultRequirePasswordReEntry = 77,		// The user cannot complete the action until they re-enter their password
	k_EResultValueOutOfRange = 78,				// the value entered is outside the acceptable range
	k_EResultUnexpectedError = 79,				// something happened that we didn't expect to ever happen
	k_EResultDisabled = 80,						// The requested service has been configured to be unavailable
	k_EResultInvalidCEGSubmission = 81,			// The set of files submitted to the CEG server are not valid !
	k_EResultRestrictedDevice = 82,				// The device being used is not allowed to perform this action
	k_EResultRegionLocked = 83,					// The action could not be complete because it is region restricted
	k_EResultRateLimitExceeded = 84,			// Temporary rate limit exceeded, try again later, different from k_EResultLimitExceeded which may be permanent
	k_EResultAccountLoginDeniedNeedTwoFactor = 85,	// Need two-factor code to login
	k_EResultItemDeleted = 86,					// The thing we're trying to access has been deleted
	k_EResultAccountLoginDeniedThrottle = 87,	// login attempt failed, try to throttle response to possible attacker
	k_EResultTwoFactorCodeMismatch = 88,		// two factor code mismatch
	k_EResultTwoFactorActivationCodeMismatch = 89,	// activation code for two-factor didn't match
	k_EResultAccountAssociatedToMultiplePartners = 90,	// account has been associated with multiple partners
	k_EResultNotModified = 91,					// data not modified
	k_EResultNoMobileDevice = 92,				// the account does not have a mobile device associated with it
	k_EResultTimeNotSynced = 93,				// the time presented is out of range or tolerance
	k_EResultSmsCodeFailed = 94,				// SMS code failure (no match, none pending, etc.)
	k_EResultAccountLimitExceeded = 95,			// Too many accounts access this resource
	k_EResultAccountActivityLimitExceeded = 96,	// Too many changes to this account
	k_EResultPhoneActivityLimitExceeded = 97,	// Too many changes to this phone
	k_EResultRefundToWallet = 98,				// Cannot refund to payment method, must use wallet
	k_EResultEmailSendFailure = 99,				// Cannot send an email
	k_EResultNotSettled = 100,					// Can't perform operation till payment has settled
	k_EResultNeedCaptcha = 101,					// Needs to provide a valid captcha
	k_EResultGSLTDenied = 102,					// a game server login token owned by this token's owner has been banned
	k_EResultGSOwnerDenied = 103,				// game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)
	k_EResultInvalidItemType = 104,				// the type of thing we were requested to act on is invalid
	k_EResultIPBanned = 105,					// the ip address has been banned from taking this action
	k_EResultGSLTExpired = 106,					// this token has expired from disuse; can be reset for use
	k_EResultInsufficientFunds = 107,			// user doesn't have enough wallet funds to complete the action
	k_EResultTooManyPending = 108,				// There are too many of this thing pending already
	k_EResultNoSiteLicensesFound = 109,			// No site licenses found
	k_EResultWGNetworkSendExceeded = 110,		// the WG couldn't send a response because we exceeded max network send size
	k_EResultAccountNotFriends = 111,			// the user is not mutually friends
	k_EResultLimitedUserAccount = 112,			// the user is limited
	k_EResultCantRemoveItem = 113,				// item can't be removed
	k_EResultAccountDeleted = 114,				// account has been deleted
	k_EResultExistingUserCancelledLicense = 115,	// A license for this already exists, but cancelled
	k_EResultCommunityCooldown = 116,			// access is denied because of a community cooldown (probably from support profile data resets)
	k_EResultNoLauncherSpecified = 117,			// No launcher was specified, but a launcher was needed to choose correct realm for operation.
	k_EResultMustAgreeToSSA = 118,				// User must agree to china SSA or global SSA before login
	k_EResultLauncherMigrated = 119,			// The specified launcher type is no longer supported; the user should be directed elsewhere
	k_EResultSteamRealmMismatch = 120,			// The user's realm does not match the realm of the requested resource
	k_EResultInvalidSignature = 121,			// signature check did not match
	k_EResultParseFailure = 122,				// Failed to parse input
	k_EResultNoVerifiedPhone = 123,				// account does not have a verified phone number
	k_EResultInsufficientBattery = 124,			// user device doesn't have enough battery charge currently to complete the action
	k_EResultChargerRequired = 125,				// The operation requires a charger to be plugged in, which wasn't present
	k_EResultCachedCredentialInvalid = 126,		// Cached credential was invalid - user must reauthenticate
	K_EResultPhoneNumberIsVOIP = 127,			// The phone number provided is a Voice Over IP number
	k_EResultNotSupported = 128,				// The data being accessed is not supported by this API
	k_EResultFamilySizeLimitExceeded = 129,		// Reached the maximum size of the family
	k_EResultOfflineAppCacheInvalid = 130,
	k_EResultTryLater = 131,
};
*/

/*
enum EVoiceResult {
	k_EVoiceResultOK = 0,
	k_EVoiceResultNotInitialized = 1,
	k_EVoiceResultNotRecording = 2,
	k_EVoiceResultNoData = 3,
	k_EVoiceResultBufferTooSmall = 4,
	k_EVoiceResultDataCorrupted = 5,
	k_EVoiceResultRestricted = 6,
	k_EVoiceResultUnsupportedCodec = 7,
	k_EVoiceResultReceiverOutOfDate = 8,
	k_EVoiceResultReceiverDidNotAnswer = 9,

};
*/

/*
enum EDenyReason {
	k_EDenyInvalid = 0,
	k_EDenyInvalidVersion = 1,
	k_EDenyGeneric = 2,
	k_EDenyNotLoggedOn = 3,
	k_EDenyNoLicense = 4,
	k_EDenyCheater = 5,
	k_EDenyLoggedInElseWhere = 6,
	k_EDenyUnknownText = 7,
	k_EDenyIncompatibleAnticheat = 8,
	k_EDenyMemoryCorruption = 9,
	k_EDenyIncompatibleSoftware = 10,
	k_EDenySteamConnectionLost = 11,
	k_EDenySteamConnectionError = 12,
	k_EDenySteamResponseTimedOut = 13,
	k_EDenySteamValidationStalled = 14,
	k_EDenySteamOwnerLeftGuestUser = 15,
};
*/

// typedef uint32 HAuthTicket;
// const HAuthTicket k_HAuthTicketInvalid = 0;

/*
enum EBeginAuthSessionResult {
	k_EBeginAuthSessionResultOK = 0,
	k_EBeginAuthSessionResultInvalidTicket = 1,
	k_EBeginAuthSessionResultDuplicateRequest = 2,
	k_EBeginAuthSessionResultInvalidVersion = 3,
	k_EBeginAuthSessionResultGameMismatch = 4,
	k_EBeginAuthSessionResultExpiredTicket = 5,
};
*/

/*
enum EAuthSessionResponse {
	k_EAuthSessionResponseOK = 0,
	k_EAuthSessionResponseUserNotConnectedToSteam = 1,
	k_EAuthSessionResponseNoLicenseOrExpired = 2,
	k_EAuthSessionResponseVACBanned = 3,
	k_EAuthSessionResponseLoggedInElseWhere = 4,
	k_EAuthSessionResponseVACCheckTimedOut = 5,
	k_EAuthSessionResponseAuthTicketCanceled = 6,
	k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed = 7,
	k_EAuthSessionResponseAuthTicketInvalid = 8,
	k_EAuthSessionResponsePublisherIssuedBan = 9,
	k_EAuthSessionResponseAuthTicketNetworkIdentityFailure = 10,
};
*/

/*
enum EUserHasLicenseForAppResult {
	k_EUserHasLicenseResultHasLicense = 0,
	k_EUserHasLicenseResultDoesNotHaveLicense = 1,
	k_EUserHasLicenseResultNoAuth = 2,
};
*/

enum EAccountType {
	k_EAccountTypeInvalid = 0,
	k_EAccountTypeIndividual = 1,
	k_EAccountTypeMultiseat = 2,
	k_EAccountTypeGameServer = 3,
	k_EAccountTypeAnonGameServer = 4,
	k_EAccountTypePending = 5,
	k_EAccountTypeContentServer = 6,
	k_EAccountTypeClan = 7,
	k_EAccountTypeChat = 8,
	k_EAccountTypeConsoleUser = 9,
	k_EAccountTypeAnonUser = 10,
	k_EAccountTypeMax
};

/*
enum EChatEntryType {
	k_EChatEntryTypeInvalid = 0,
	k_EChatEntryTypeChatMsg = 1,
	k_EChatEntryTypeTyping = 2,
	k_EChatEntryTypeInviteGame = 3,
	k_EChatEntryTypeEmote = 4,
	//k_EChatEntryTypeLobbyGameStart = 5,
	k_EChatEntryTypeLeftConversation = 6,
	k_EChatEntryTypeEntered = 7,
	k_EChatEntryTypeWasKicked = 8,
	k_EChatEntryTypeWasBanned = 9,
	k_EChatEntryTypeDisconnected = 10,
	k_EChatEntryTypeHistoricalChat = 11,
	//k_EChatEntryTypeReserved1 = 12,
	//k_EChatEntryTypeReserved2 = 13,
	k_EChatEntryTypeLinkBlocked = 14,
};
*/

/*
enum EChatRoomEnterResponse {
	k_EChatRoomEnterResponseSuccess = 1,
	k_EChatRoomEnterResponseDoesntExist = 2,
	k_EChatRoomEnterResponseNotAllowed = 3,
	k_EChatRoomEnterResponseFull = 4,
	k_EChatRoomEnterResponseError = 5,
	k_EChatRoomEnterResponseBanned = 6,
	k_EChatRoomEnterResponseLimited = 7,
	k_EChatRoomEnterResponseClanDisabled = 8,
	k_EChatRoomEnterResponseCommunityBan = 9,
	k_EChatRoomEnterResponseMemberBlockedYou = 10,
	k_EChatRoomEnterResponseYouBlockedMember = 11,
	// k_EChatRoomEnterResponseNoRankingDataLobby = 12,
	// k_EChatRoomEnterResponseNoRankingDataUser = 13,
	// k_EChatRoomEnterResponseRankOutOfRange = 14,
	k_EChatRoomEnterResponseRatelimitExceeded = 15,
};
*/

const unsigned int k_unSteamAccountIDMask = 0xFFFFFFFF;
const unsigned int k_unSteamAccountInstanceMask = 0x000FFFFF;
const unsigned int k_unSteamUserDefaultInstance	= 1;

enum EChatSteamIDInstanceFlags {
	k_EChatAccountInstanceMask = 0x00000FFF,

	k_EChatInstanceFlagClan = (k_unSteamAccountInstanceMask + 1) >> 1,
	k_EChatInstanceFlagLobby = (k_unSteamAccountInstanceMask + 1) >> 2,
	k_EChatInstanceFlagMMSLobby = (k_unSteamAccountInstanceMask + 1) >> 3,
};

/*
enum ENotificationPosition {
	k_EPositionInvalid = -1,
	k_EPositionTopLeft = 0,
	k_EPositionTopRight = 1,
	k_EPositionBottomLeft = 2,
	k_EPositionBottomRight = 3,
};
*/

/*
enum EBroadcastUploadResult {
	k_EBroadcastUploadResultNone = 0,
	k_EBroadcastUploadResultOK = 1,
	k_EBroadcastUploadResultInitFailed = 2,
	k_EBroadcastUploadResultFrameFailed = 3,
	k_EBroadcastUploadResultTimeout = 4,
	k_EBroadcastUploadResultBandwidthExceeded = 5,
	k_EBroadcastUploadResultLowFPS = 6,
	k_EBroadcastUploadResultMissingKeyFrames = 7,
	k_EBroadcastUploadResultNoConnection = 8,
	k_EBroadcastUploadResultRelayFailed = 9,
	k_EBroadcastUploadResultSettingsChanged = 10,
	k_EBroadcastUploadResultMissingAudio = 11,
	k_EBroadcastUploadResultTooFarBehind = 12,
	k_EBroadcastUploadResultTranscodeBehind = 13,
	k_EBroadcastUploadResultNotAllowedToPlay = 14,
	k_EBroadcastUploadResultBusy = 15,
	k_EBroadcastUploadResultBanned = 16,
	k_EBroadcastUploadResultAlreadyActive = 17,
	k_EBroadcastUploadResultForcedOff = 18,
	k_EBroadcastUploadResultAudioBehind = 19,
	k_EBroadcastUploadResultShutdown = 20,
	k_EBroadcastUploadResultDisconnect = 21,
	k_EBroadcastUploadResultVideoInitFailed = 22,
	k_EBroadcastUploadResultAudioInitFailed = 23,
};
*/

/*
enum EMarketNotAllowedReasonFlags {
	k_EMarketNotAllowedReason_None = 0,
	k_EMarketNotAllowedReason_TemporaryFailure = (1 << 0),
	k_EMarketNotAllowedReason_AccountDisabled = (1 << 1),
	k_EMarketNotAllowedReason_AccountLockedDown = (1 << 2),
	k_EMarketNotAllowedReason_AccountLimited = (1 << 3),
	k_EMarketNotAllowedReason_TradeBanned = (1 << 4),
	k_EMarketNotAllowedReason_AccountNotTrusted = (1 << 5),
	k_EMarketNotAllowedReason_SteamGuardNotEnabled = (1 << 6),
	k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled = (1 << 7),
	k_EMarketNotAllowedReason_RecentPasswordReset = (1 << 8),
	k_EMarketNotAllowedReason_NewPaymentMethod = (1 << 9),
	k_EMarketNotAllowedReason_InvalidCookie = (1 << 10),
	k_EMarketNotAllowedReason_UsingNewDevice = (1 << 11),
	k_EMarketNotAllowedReason_RecentSelfRefund = (1 << 12),
	k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified = (1 << 13),
	k_EMarketNotAllowedReason_NoRecentPurchases = (1 << 14),
	k_EMarketNotAllowedReason_AcceptedWalletGift = (1 << 15),
	k_EMarketNotAllowedReason_TradeCooldown = (1 << 16),
};
*/

/*
enum EDurationControlProgress {
	k_EDurationControlProgress_Full = 0,
	k_EDurationControlProgress_Half = 1,
	k_EDurationControlProgress_None = 2,

	k_EDurationControl_ExitSoon_3h = 3,
	k_EDurationControl_ExitSoon_5h = 4,
	k_EDurationControl_ExitSoon_Night = 5,
};
*/

/*
enum EDurationControlNotification {
	k_EDurationControlNotification_None = 0,
	k_EDurationControlNotification_1Hour = 1,
	k_EDurationControlNotification_3Hours = 2,
	k_EDurationControlNotification_HalfProgress = 3,
	k_EDurationControlNotification_NoProgress = 4,
	k_EDurationControlNotification_ExitSoon_3h = 5,
	k_EDurationControlNotification_ExitSoon_5h = 6,
	k_EDurationControlNotification_ExitSoon_Night = 7,
};
*/

/*
enum EDurationControlOnlineState {
	k_EDurationControlOnlineState_Invalid = 0,
	k_EDurationControlOnlineState_Offline = 1,
	k_EDurationControlOnlineState_Online = 2,
	k_EDurationControlOnlineState_OnlineHighPri = 3,
};
*/

/*
enum EBetaBranchFlags {
	k_EBetaBranch_None = 0,
	k_EBetaBranch_Default = 1,
	k_EBetaBranch_Available = 2,
	k_EBetaBranch_Private = 4,
	k_EBetaBranch_Selected = 8,
	k_EBetaBranch_Installed = 16,
};
*/

#pragma pack(push, 1)
class CSteamID { 
public:
	CSteamID() {
		m_steamid.m_comp.m_unAccountID = 0;
		m_steamid.m_comp.m_EAccountType = k_EAccountTypeInvalid;
		m_steamid.m_comp.m_EUniverse = k_EUniverseInvalid;
		m_steamid.m_comp.m_unAccountInstance = 0;
	}

	CSteamID(uint32 unAccountID, EUniverse eUniverse, EAccountType eAccountType) { 
        Set(unAccountID, eUniverse, eAccountType); 
    }

	CSteamID( uint32 unAccountID, unsigned int unAccountInstance, EUniverse eUniverse, EAccountType eAccountType ) {
		InstancedSet(unAccountID, unAccountInstance, eUniverse, eAccountType);
	}

	CSteamID(uint64 ulSteamID) {
		SetFromUint64(ulSteamID);
	}

	void Set(uint32 unAccountID, EUniverse eUniverse, EAccountType eAccountType) {
		m_steamid.m_comp.m_unAccountID = unAccountID;
		m_steamid.m_comp.m_EUniverse = eUniverse;
		m_steamid.m_comp.m_EAccountType = eAccountType;

		if (eAccountType == k_EAccountTypeClan || eAccountType == k_EAccountTypeGameServer)
			m_steamid.m_comp.m_unAccountInstance = 0;
		else
			m_steamid.m_comp.m_unAccountInstance = k_unSteamUserDefaultInstance;
	}

	void InstancedSet(uint32 unAccountID, uint32 unInstance, EUniverse eUniverse, EAccountType eAccountType) {
		m_steamid.m_comp.m_unAccountID = unAccountID;
		m_steamid.m_comp.m_EUniverse = eUniverse;
		m_steamid.m_comp.m_EAccountType = eAccountType;
		m_steamid.m_comp.m_unAccountInstance = unInstance;
	}

	void FullSet(uint64 ulIdentifier, EUniverse eUniverse, EAccountType eAccountType) {
		m_steamid.m_comp.m_unAccountID = (ulIdentifier & k_unSteamAccountIDMask);
		m_steamid.m_comp.m_unAccountInstance = ((ulIdentifier >> 32) & k_unSteamAccountInstanceMask);
		m_steamid.m_comp.m_EUniverse = eUniverse;
		m_steamid.m_comp.m_EAccountType = eAccountType;
	}

	void SetFromUint64(uint64 ulSteamID) {
		m_steamid.m_unAll64Bits = ulSteamID;
	}

    void Clear() {
		m_steamid.m_comp.m_unAccountID = 0;
		m_steamid.m_comp.m_EAccountType = k_EAccountTypeInvalid;
		m_steamid.m_comp.m_EUniverse = k_EUniverseInvalid;
		m_steamid.m_comp.m_unAccountInstance = 0;
	}

	uint64 ConvertToUint64() const {
		return m_steamid.m_unAll64Bits;
	}

	uint64 GetStaticAccountKey() const {
		return (uint64) ((((uint64) m_steamid.m_comp.m_EUniverse) << 56) + ((uint64) m_steamid.m_comp.m_EAccountType << 52) + m_steamid.m_comp.m_unAccountID);
	}

	void CreateBlankAnonLogon(EUniverse eUniverse) {
		m_steamid.m_comp.m_unAccountID = 0;
		m_steamid.m_comp.m_EAccountType = k_EAccountTypeAnonGameServer;
		m_steamid.m_comp.m_EUniverse = eUniverse;
		m_steamid.m_comp.m_unAccountInstance = 0;
	}

	void CreateBlankAnonUserLogon(EUniverse eUniverse)
	{
		m_steamid.m_comp.m_unAccountID = 0;
		m_steamid.m_comp.m_EAccountType = k_EAccountTypeAnonUser;
		m_steamid.m_comp.m_EUniverse = eUniverse;
		m_steamid.m_comp.m_unAccountInstance = 0;
	}

	bool BBlankAnonAccount() const { return m_steamid.m_comp.m_unAccountID == 0 && BAnonAccount() && m_steamid.m_comp.m_unAccountInstance == 0; }
	bool BGameServerAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeGameServer || m_steamid.m_comp.m_EAccountType == k_EAccountTypeAnonGameServer; }
	bool BPersistentGameServerAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeGameServer; }
	bool BAnonGameServerAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeAnonGameServer; }
	bool BContentServerAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeContentServer; }
	bool BClanAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeClan; }
	bool BChatAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeChat; }
	bool IsLobby() const { return (m_steamid.m_comp.m_EAccountType == k_EAccountTypeChat) && (m_steamid.m_comp.m_unAccountInstance & k_EChatInstanceFlagLobby); }
	bool BIndividualAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeIndividual || m_steamid.m_comp.m_EAccountType == k_EAccountTypeConsoleUser; }
	bool BAnonAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeAnonUser || m_steamid.m_comp.m_EAccountType == k_EAccountTypeAnonGameServer; }
	bool BAnonUserAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeAnonUser; }
	bool BConsoleUserAccount() const { return m_steamid.m_comp.m_EAccountType == k_EAccountTypeConsoleUser; }
	void SetAccountID(uint32 unAccountID) { m_steamid.m_comp.m_unAccountID = unAccountID; }
	void SetAccountInstance(uint32 unInstance) { m_steamid.m_comp.m_unAccountInstance = unInstance; }
	AccountID_t GetAccountID() const { return m_steamid.m_comp.m_unAccountID; }
	uint32 GetUnAccountInstance() const { return m_steamid.m_comp.m_unAccountInstance; }
	EAccountType GetEAccountType() const { return (EAccountType) m_steamid.m_comp.m_EAccountType; }
	EUniverse GetEUniverse() const { return m_steamid.m_comp.m_EUniverse; }
	void SetEUniverse(EUniverse eUniverse) { m_steamid.m_comp.m_EUniverse = eUniverse; }
	bool IsValid() const;

	explicit CSteamID(const char *pchSteamID, EUniverse eDefaultUniverse = k_EUniverseInvalid);
	const char * Render() const;
	static const char * Render(uint64 ulSteamID);

	void SetFromString(const char *pchSteamID, EUniverse eDefaultUniverse);
	bool SetFromStringStrict(const char *pchSteamID, EUniverse eDefaultUniverse);

	inline bool operator==(const CSteamID &val) const { return m_steamid.m_unAll64Bits == val.m_steamid.m_unAll64Bits; } 
	inline bool operator!=(const CSteamID &val) const { return !operator==(val); }
	inline bool operator<(const CSteamID &val) const { return m_steamid.m_unAll64Bits < val.m_steamid.m_unAll64Bits; }
	inline bool operator>(const CSteamID &val) const { return m_steamid.m_unAll64Bits > val.m_steamid.m_unAll64Bits; }

	bool BValidExternalSteamID() const;

private:
	CSteamID(uint32);
	CSteamID(int32);

	union SteamID_t
	{
		struct SteamIDComponent_t {
#ifdef PR_BIG_ENDIAN // If you really need it, then write '#define PR_BIG_ENDIAN'
			EUniverse       m_EUniverse : 8;
			unsigned int	m_EAccountType : 4;
			unsigned int	m_unAccountInstance : 20;
			uint32			m_unAccountID : 32;
#else
			uint32			m_unAccountID : 32;
			unsigned int	m_unAccountInstance : 20;
			unsigned int	m_EAccountType : 4;
			EUniverse		m_EUniverse : 8;
#endif
		} m_comp;

		uint64 m_unAll64Bits;
	} m_steamid;
};

inline bool CSteamID::IsValid() const
{
	if (m_steamid.m_comp.m_EAccountType <= k_EAccountTypeInvalid || m_steamid.m_comp.m_EAccountType >= k_EAccountTypeMax)
		return false;
	
	if (m_steamid.m_comp.m_EUniverse <= k_EUniverseInvalid || m_steamid.m_comp.m_EUniverse >= k_EUniverseMax)
		return false;

	if (m_steamid.m_comp.m_EAccountType == k_EAccountTypeIndividual) {
		if (m_steamid.m_comp.m_unAccountID == 0 || m_steamid.m_comp.m_unAccountInstance != k_unSteamUserDefaultInstance)
			return false;
	}

	if (m_steamid.m_comp.m_EAccountType == k_EAccountTypeClan) {
		if (m_steamid.m_comp.m_unAccountID == 0 || m_steamid.m_comp.m_unAccountInstance != 0)
			return false;
	}

	if (m_steamid.m_comp.m_EAccountType == k_EAccountTypeGameServer) {
		if (m_steamid.m_comp.m_unAccountID == 0)
			return false;
	}
	return true;
}
#pragma pack(pop)