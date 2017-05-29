#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IpDrv.HttpRequestCurl.ProcessRequest
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UHttpRequestCurl::ProcessRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.ProcessRequest");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.SetHeader
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 HeaderValue                    (CPF_Parm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestCurl::SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.SetHeader");

	struct
	{
		struct FString                 HeaderName;
		struct FString                 HeaderValue;
		class UHttpRequestInterface*   ReturnValue;
	} params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.SetContentAsString
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ContentString                  (CPF_Parm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestCurl::SetContentAsString(const struct FString& ContentString)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.SetContentAsString");

	struct
	{
		struct FString                 ContentString;
		class UHttpRequestInterface*   ReturnValue;
	} params;
	params.ContentString = ContentString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.SetContent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          ContentPayload                 (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestCurl::SetContent(TArray<unsigned char>* ContentPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.SetContent");

	struct
	{
		TArray<unsigned char>          ContentPayload;
		class UHttpRequestInterface*   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentPayload != nullptr)
		*ContentPayload = params.ContentPayload;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.SetURL
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestCurl::SetURL(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.SetURL");

	struct
	{
		struct FString                 URL;
		class UHttpRequestInterface*   ReturnValue;
	} params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.SetVerb
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Verb                           (CPF_Parm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestCurl::SetVerb(const struct FString& Verb)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.SetVerb");

	struct
	{
		struct FString                 Verb;
		class UHttpRequestInterface*   ReturnValue;
	} params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.GetVerb
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetVerb()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.GetVerb");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.GetContent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Content                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UHttpRequestCurl::GetContent(TArray<unsigned char>* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.GetContent");

	struct
	{
		TArray<unsigned char>          Content;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function IpDrv.HttpRequestCurl.GetURL
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.GetURL");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.GetContentLength
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UHttpRequestCurl::GetContentLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.GetContentLength");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.GetContentType
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetContentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.GetContentType");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.GetURLParameter
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ParameterName                  (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetURLParameter(const struct FString& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.GetURLParameter");

	struct
	{
		struct FString                 ParameterName;
		struct FString                 ReturnValue;
	} params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.GetHeaders
// (FUNC_Native, FUNC_Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FString> UHttpRequestCurl::GetHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.GetHeaders");

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpRequestCurl.GetHeader
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetHeader(const struct FString& HeaderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpRequestCurl.GetHeader");

	struct
	{
		struct FString                 HeaderName;
		struct FString                 ReturnValue;
	} params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpResponseCurl.GetResponseCode
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UHttpResponseCurl::GetResponseCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetResponseCode");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpResponseCurl.GetContentAsString
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetContentAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetContentAsString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpResponseCurl.GetContent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Content                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UHttpResponseCurl::GetContent(TArray<unsigned char>* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetContent");

	struct
	{
		TArray<unsigned char>          Content;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function IpDrv.HttpResponseCurl.GetURL
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetURL");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpResponseCurl.GetContentLength
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UHttpResponseCurl::GetContentLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetContentLength");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpResponseCurl.GetContentType
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetContentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetContentType");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpResponseCurl.GetURLParameter
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ParameterName                  (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetURLParameter(const struct FString& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetURLParameter");

	struct
	{
		struct FString                 ParameterName;
		struct FString                 ReturnValue;
	} params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpResponseCurl.GetHeaders
// (FUNC_Native, FUNC_Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FString> UHttpResponseCurl::GetHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetHeaders");

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.HttpResponseCurl.GetHeader
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetHeader(const struct FString& HeaderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HttpResponseCurl.GetHeader");

	struct
	{
		struct FString                 HeaderName;
		struct FString                 ReturnValue;
	} params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.ResolveFailed
// (FUNC_Event, FUNC_Public)

void AInternetLink::ResolveFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.ResolveFailed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.Resolved
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FIpAddr                 Addr                           (CPF_Parm)

void AInternetLink::Resolved(const struct FIpAddr& Addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.Resolved");

	struct
	{
		struct FIpAddr                 Addr;
	} params;
	params.Addr = Addr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.GetLocalIP
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FIpAddr                 Arg                            (CPF_Parm, CPF_OutParm)

void AInternetLink::GetLocalIP(struct FIpAddr* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.GetLocalIP");

	struct
	{
		struct FIpAddr                 Arg;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;
}


// Function IpDrv.InternetLink.StringToIpAddr
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Str                            (CPF_Parm, CPF_NeedCtorLink)
// struct FIpAddr                 Addr                           (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AInternetLink::StringToIpAddr(const struct FString& Str, struct FIpAddr* Addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.StringToIpAddr");

	struct
	{
		struct FString                 Str;
		struct FIpAddr                 Addr;
		bool                           ReturnValue;
	} params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Addr != nullptr)
		*Addr = params.Addr;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.IpAddrToString
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FIpAddr                 Arg                            (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString AInternetLink::IpAddrToString(const struct FIpAddr& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.IpAddrToString");

	struct
	{
		struct FIpAddr                 Arg;
		struct FString                 ReturnValue;
	} params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.GetLastError
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int AInternetLink::GetLastError()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.GetLastError");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.Resolve
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Domain                         (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void AInternetLink::Resolve(const struct FString& Domain)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.Resolve");

	struct
	{
		struct FString                 Domain;
	} params;
	params.Domain = Domain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.ParseURL
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 Addr                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            PortNum                        (CPF_Parm, CPF_OutParm)
// struct FString                 LevelName                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 EntryName                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AInternetLink::ParseURL(const struct FString& URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.ParseURL");

	struct
	{
		struct FString                 URL;
		struct FString                 Addr;
		int                            PortNum;
		struct FString                 LevelName;
		struct FString                 EntryName;
		bool                           ReturnValue;
	} params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Addr != nullptr)
		*Addr = params.Addr;
	if (PortNum != nullptr)
		*PortNum = params.PortNum;
	if (LevelName != nullptr)
		*LevelName = params.LevelName;
	if (EntryName != nullptr)
		*EntryName = params.EntryName;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.IsDataPending
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AInternetLink::IsDataPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.IsDataPending");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.ReceivedBinary
// (FUNC_Event, FUNC_Public)
// Parameters:
// int                            Count                          (CPF_Parm)
// unsigned char                  B                              (CPF_Parm)

void ATcpLink::ReceivedBinary(int Count, unsigned char B)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReceivedBinary");

	struct
	{
		int                            Count;
		unsigned char                  B;
	} params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReceivedLine
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 Line                           (CPF_Parm, CPF_NeedCtorLink)

void ATcpLink::ReceivedLine(const struct FString& Line)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReceivedLine");

	struct
	{
		struct FString                 Line;
	} params;
	params.Line = Line;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReceivedText
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 Text                           (CPF_Parm, CPF_NeedCtorLink)

void ATcpLink::ReceivedText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReceivedText");

	struct
	{
		struct FString                 Text;
	} params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Closed
// (FUNC_Event, FUNC_Public)

void ATcpLink::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Closed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Opened
// (FUNC_Event, FUNC_Public)

void ATcpLink::Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Opened");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Accepted
// (FUNC_Event, FUNC_Public)

void ATcpLink::Accepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Accepted");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReadBinary
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            Count                          (CPF_Parm)
// unsigned char                  B                              (CPF_Parm, CPF_OutParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int ATcpLink::ReadBinary(int Count, unsigned char* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReadBinary");

	struct
	{
		int                            Count;
		unsigned char                  B;
		int                            ReturnValue;
	} params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (B != nullptr)
		*B = params.B;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.ReadText
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Str                            (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int ATcpLink::ReadText(struct FString* Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReadText");

	struct
	{
		struct FString                 Str;
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Str != nullptr)
		*Str = params.Str;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.SendBinary
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            Count                          (CPF_Parm)
// unsigned char                  B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int ATcpLink::SendBinary(int Count, unsigned char B)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.SendBinary");

	struct
	{
		int                            Count;
		unsigned char                  B;
		int                            ReturnValue;
	} params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.SendText
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Str                            (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int ATcpLink::SendText(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.SendText");

	struct
	{
		struct FString                 Str;
		int                            ReturnValue;
	} params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.IsConnected
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool ATcpLink::IsConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.IsConnected");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Close
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool ATcpLink::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Close");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Open
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FIpAddr                 Addr                           (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool ATcpLink::Open(const struct FIpAddr& Addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Open");

	struct
	{
		struct FIpAddr                 Addr;
		bool                           ReturnValue;
	} params;
	params.Addr = Addr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Listen
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool ATcpLink::Listen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Listen");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.BindPort
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            PortNum                        (CPF_OptionalParm, CPF_Parm)
// bool                           bUseNextAvailable              (CPF_OptionalParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int ATcpLink::BindPort(int PortNum, bool bUseNextAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.BindPort");

	struct
	{
		int                            PortNum;
		bool                           bUseNextAvailable;
		int                            ReturnValue;
	} params;
	params.PortNum = PortNum;
	params.bUseNextAvailable = bUseNextAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServiceBase.GetUserAuthURL
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UMcpServiceBase::GetUserAuthURL(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceBase.GetUserAuthURL");

	struct
	{
		struct FString                 McpId;
		struct FString                 ReturnValue;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServiceBase.GetAppAccessURL
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UMcpServiceBase::GetAppAccessURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceBase.GetAppAccessURL");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServiceBase.GetBaseURL
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UMcpServiceBase::GetBaseURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceBase.GetBaseURL");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServiceBase.Init
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UMcpServiceBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceBase.Init");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// class UOnlineMatchmakingStats* MMStats                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats");

	struct
	{
		struct FUniqueNetId            UniqueId;
		class UOnlineMatchmakingStats* MMStats;
		bool                           ReturnValue;
	} params;
	params.UniqueId = UniqueId;
	params.MMStats = MMStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// int                            NumPlayers                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation(int PlaylistId, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation");

	struct
	{
		int                            PlaylistId;
		int                            NumPlayers;
		bool                           ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// TArray<unsigned char>          Payload                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, TArray<unsigned char>* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData");

	struct
	{
		struct FUniqueNetId            UniqueId;
		TArray<unsigned char>          Payload;
		bool                           ReturnValue;
	} params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Payload != nullptr)
		*Payload = params.Payload;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// struct FString                 PlayerNick                     (CPF_Parm, CPF_NeedCtorLink)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadPlayerData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData");

	struct
	{
		struct FUniqueNetId            UniqueId;
		struct FString                 PlayerNick;
		class UOnlineProfileSettings*  ProfileSettings;
		class UOnlinePlayerStorage*    PlayerStorage;
		bool                           ReturnValue;
	} params;
	params.UniqueId = UniqueId;
	params.PlayerNick = PlayerNick;
	params.ProfileSettings = ProfileSettings;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<enum class EOnlineNewsType> NewsType                       (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineNewsInterfaceMcp::GetNews(unsigned char LocalUserNum, TEnumAsByte<enum class EOnlineNewsType> NewsType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.GetNews");

	struct
	{
		unsigned char                  LocalUserNum;
		TEnumAsByte<enum class EOnlineNewsType> NewsType;
		struct FString                 ReturnValue;
	} params;
	params.LocalUserNum = LocalUserNum;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadGameNewsDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate");

	struct
	{
		struct FScriptDelegate         ReadGameNewsDelegate;
	} params;
	params.ReadGameNewsDelegate = ReadGameNewsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadNewsDelegate               (CPF_Parm, CPF_NeedCtorLink)

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate");

	struct
	{
		struct FScriptDelegate         ReadNewsDelegate;
	} params;
	params.ReadNewsDelegate = ReadNewsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// TEnumAsByte<enum class EOnlineNewsType> NewsType                       (CPF_Parm)

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted(bool bWasSuccessful, TEnumAsByte<enum class EOnlineNewsType> NewsType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted");

	struct
	{
		bool                           bWasSuccessful;
		TEnumAsByte<enum class EOnlineNewsType> NewsType;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<enum class EOnlineNewsType> NewsType                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineNewsInterfaceMcp::ReadNews(unsigned char LocalUserNum, TEnumAsByte<enum class EOnlineNewsType> NewsType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.ReadNews");

	struct
	{
		unsigned char                  LocalUserNum;
		TEnumAsByte<enum class EOnlineNewsType> NewsType;
		bool                           ReturnValue;
	} params;
	params.LocalUserNum = LocalUserNum;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineTitleFileDownloadBase::GetUrlForFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile");

	struct
	{
		struct FString                 Filename;
		struct FString                 ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm, CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate");

	struct
	{
		struct FScriptDelegate         RequestTitleFileListDelegate;
	} params;
	params.RequestTitleFileListDelegate = RequestTitleFileListDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm, CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate");

	struct
	{
		struct FScriptDelegate         RequestTitleFileListDelegate;
	} params;
	params.RequestTitleFileListDelegate = RequestTitleFileListDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// TArray<struct FString>         ResultStr                      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnRequestTitleFileListComplete(bool bWasSuccessful, TArray<struct FString> ResultStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete");

	struct
	{
		bool                           bWasSuccessful;
		TArray<struct FString>         ResultStr;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.ResultStr = ResultStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// (FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::RequestTitleFileList()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// (FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// (FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// (FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EOnlineEnumerationReadState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<enum class EOnlineEnumerationReadState> UOnlineTitleFileDownloadBase::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState");

	struct
	{
		struct FString                 Filename;
		TEnumAsByte<enum class EOnlineEnumerationReadState> ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents");

	struct
	{
		struct FString                 Filename;
		TArray<unsigned char>          FileContents;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ReadTitleFileCompleteDelegate;
	} params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ReadTitleFileCompleteDelegate;
	} params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 FileToRead                     (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EOnlineFileType> FileType                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<enum class EOnlineFileType> FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile");

	struct
	{
		struct FString                 FileToRead;
		TEnumAsByte<enum class EOnlineFileType> FileType;
		bool                           ReturnValue;
	} params;
	params.FileToRead = FileToRead;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EOnlineEnumerationReadState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<enum class EOnlineEnumerationReadState> UOnlineTitleFileDownloadMcp::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState");

	struct
	{
		struct FString                 Filename;
		TEnumAsByte<enum class EOnlineEnumerationReadState> ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents");

	struct
	{
		struct FString                 Filename;
		TArray<unsigned char>          FileContents;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 FileToRead                     (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EOnlineFileType> FileType                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadMcp::ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<enum class EOnlineFileType> FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile");

	struct
	{
		struct FString                 FileToRead;
		TEnumAsByte<enum class EOnlineFileType> FileType;
		bool                           ReturnValue;
	} params;
	params.FileToRead = FileToRead;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineTitleFileDownloadWeb::GetUrlForFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile");

	struct
	{
		struct FString                 Filename;
		struct FString                 ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UOnlineTitleFileDownloadWeb::OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bDidSucceed;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::RequestTitleFileList()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EOnlineEnumerationReadState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<enum class EOnlineEnumerationReadState> UOnlineTitleFileDownloadWeb::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState");

	struct
	{
		struct FString                 Filename;
		TEnumAsByte<enum class EOnlineEnumerationReadState> ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents");

	struct
	{
		struct FString                 Filename;
		TArray<unsigned char>          FileContents;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// bool                           bSuccess                       (CPF_Parm)
// struct FString                 FileRead                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineTitleFileDownloadWeb::TriggerDelegates(bool bSuccess, const struct FString& FileRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates");

	struct
	{
		bool                           bSuccess;
		struct FString                 FileRead;
	} params;
	params.bSuccess = bSuccess;
	params.FileRead = FileRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UOnlineTitleFileDownloadWeb::OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bDidSucceed;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 FileToRead                     (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EOnlineFileType> FileType                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<enum class EOnlineFileType> FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile");

	struct
	{
		struct FString                 FileToRead;
		TEnumAsByte<enum class EOnlineFileType> FileType;
		bool                           ReturnValue;
	} params;
	params.FileToRead = FileToRead;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TEnumAsByte<enum class EMcpFileCompressionType> FileCompressionType            (CPF_Parm)
// TArray<unsigned char>          CompressedFileContents         (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<unsigned char>          UncompressedFileContents       (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::UncompressTitleFileContents(TEnumAsByte<enum class EMcpFileCompressionType> FileCompressionType, TArray<unsigned char>* CompressedFileContents, TArray<unsigned char>* UncompressedFileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents");

	struct
	{
		TEnumAsByte<enum class EMcpFileCompressionType> FileCompressionType;
		TArray<unsigned char>          CompressedFileContents;
		TArray<unsigned char>          UncompressedFileContents;
		bool                           ReturnValue;
	} params;
	params.FileCompressionType = FileCompressionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompressedFileContents != nullptr)
		*CompressedFileContents = params.CompressedFileContents;
	if (UncompressedFileContents != nullptr)
		*UncompressedFileContents = params.UncompressedFileContents;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UTitleFileDownloadCache::DeleteTitleFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.DeleteTitleFile");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          MaxAgeSeconds                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UTitleFileDownloadCache::DeleteTitleFiles(float MaxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles");

	struct
	{
		float                          MaxAgeSeconds;
		bool                           ReturnValue;
	} params;
	params.MaxAgeSeconds = MaxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UTitleFileDownloadCache::ClearCachedFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.ClearCachedFile");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UTitleFileDownloadCache::ClearCachedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.ClearCachedFiles");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UTitleFileDownloadCache::GetTitleFileLogicalName(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName");

	struct
	{
		struct FString                 Filename;
		struct FString                 ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UTitleFileDownloadCache::GetTitleFileHash(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.GetTitleFileHash");

	struct
	{
		struct FString                 Filename;
		struct FString                 ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EOnlineEnumerationReadState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<enum class EOnlineEnumerationReadState> UTitleFileDownloadCache::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.GetTitleFileState");

	struct
	{
		struct FString                 Filename;
		TEnumAsByte<enum class EOnlineEnumerationReadState> ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UTitleFileDownloadCache::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.GetTitleFileContents");

	struct
	{
		struct FString                 Filename;
		TArray<unsigned char>          FileContents;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         SaveCompleteDelegate;
	} params;
	params.SaveCompleteDelegate = SaveCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         SaveCompleteDelegate;
	} params;
	params.SaveCompleteDelegate = SaveCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnSaveTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 LogicalName                    (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UTitleFileDownloadCache::SaveTitleFile(const struct FString& Filename, const struct FString& LogicalName, TArray<unsigned char> FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.SaveTitleFile");

	struct
	{
		struct FString                 Filename;
		struct FString                 LogicalName;
		TArray<unsigned char>          FileContents;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;
	params.LogicalName = LogicalName;
	params.FileContents = FileContents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         LoadCompleteDelegate;
	} params;
	params.LoadCompleteDelegate = LoadCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         LoadCompleteDelegate;
	} params;
	params.LoadCompleteDelegate = LoadCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnLoadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UTitleFileDownloadCache::LoadTitleFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.LoadTitleFile");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageBase.CacheMessageContents
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          MessageContents                (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpMessageBase::CacheMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.CacheMessageContents");

	struct
	{
		TArray<unsigned char>          MessageContents;
		struct FString                 MessageId;
		bool                           ReturnValue;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageBase.CacheMessage
// (FUNC_Public)
// Parameters:
// struct FMcpMessage             Message                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageBase::CacheMessage(const struct FMcpMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.CacheMessage");

	struct
	{
		struct FMcpMessage             Message;
	} params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.GetMessageContents
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpMessageBase::GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.GetMessageContents");

	struct
	{
		struct FString                 MessageId;
		TArray<unsigned char>          MessageContents;
		bool                           ReturnValue;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageBase::OnQueryMessageContentsComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete");

	struct
	{
		struct FString                 MessageId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.MessageId = MessageId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.QueryMessageContents
// (FUNC_Public)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageBase::QueryMessageContents(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.QueryMessageContents");

	struct
	{
		struct FString                 MessageId;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.GetMessageList
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 ToUniqueUserId                 (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpMessageList         MessageList                    (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpMessageBase::GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.GetMessageList");

	struct
	{
		struct FString                 ToUniqueUserId;
		struct FMcpMessageList         MessageList;
	} params;
	params.ToUniqueUserId = ToUniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageList != nullptr)
		*MessageList = params.MessageList;
}


// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageBase::OnQueryMessagesComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.OnQueryMessagesComplete");

	struct
	{
		struct FString                 UserId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.UserId = UserId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.QueryMessages
// (FUNC_Public)
// Parameters:
// struct FString                 ToUniqueUserId                 (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageBase::QueryMessages(const struct FString& ToUniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.QueryMessages");

	struct
	{
		struct FString                 ToUniqueUserId;
	} params;
	params.ToUniqueUserId = ToUniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageBase::OnDeleteMessageComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.OnDeleteMessageComplete");

	struct
	{
		struct FString                 MessageId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.MessageId = MessageId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.DeleteMessage
// (FUNC_Public)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageBase::DeleteMessage(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.DeleteMessage");

	struct
	{
		struct FString                 MessageId;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FMcpMessage             Message                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageBase::OnCreateMessageComplete(const struct FMcpMessage& Message, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.OnCreateMessageComplete");

	struct
	{
		struct FMcpMessage             Message;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.Message = Message;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.CreateMessage
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         ToUniqueUserIds                (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 FromUniqueUserId               (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 FromFriendlyName               (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 MessageType                    (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 PushMessage                    (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ValidUntil                     (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpMessageBase::CreateMessage(const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<struct FString>* ToUniqueUserIds, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.CreateMessage");

	struct
	{
		TArray<struct FString>         ToUniqueUserIds;
		struct FString                 FromUniqueUserId;
		struct FString                 FromFriendlyName;
		struct FString                 MessageType;
		struct FString                 PushMessage;
		struct FString                 ValidUntil;
		TArray<unsigned char>          MessageContents;
	} params;
	params.FromUniqueUserId = FromUniqueUserId;
	params.FromFriendlyName = FromFriendlyName;
	params.MessageType = MessageType;
	params.PushMessage = PushMessage;
	params.ValidUntil = ValidUntil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToUniqueUserIds != nullptr)
		*ToUniqueUserIds = params.ToUniqueUserIds;
	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;
}


// Function IpDrv.McpMessageBase.CreateInstance
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UMcpMessageBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMcpMessageBase* UMcpMessageBase::STATIC_CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.CreateInstance");

	struct
	{
		class UMcpMessageBase*         ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.CacheMessageContents
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          MessageContents                (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpMessageManager::CacheMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.CacheMessageContents");

	struct
	{
		TArray<unsigned char>          MessageContents;
		struct FString                 MessageId;
		bool                           ReturnValue;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.GetMessageById
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpMessage             Message                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpMessageManager::GetMessageById(const struct FString& MessageId, struct FMcpMessage* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.GetMessageById");

	struct
	{
		struct FString                 MessageId;
		struct FMcpMessage             Message;
		bool                           ReturnValue;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.CacheMessage
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FMcpMessage             Message                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageManager::CacheMessage(const struct FMcpMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.CacheMessage");

	struct
	{
		struct FMcpMessage             Message;
	} params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.GetMessageContents
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpMessageManager::GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.GetMessageContents");

	struct
	{
		struct FString                 MessageId;
		TArray<unsigned char>          MessageContents;
		bool                           ReturnValue;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.QueryMessageContents
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageManager::QueryMessageContents(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.QueryMessageContents");

	struct
	{
		struct FString                 MessageId;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.GetMessageList
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 ToUniqueUserId                 (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpMessageList         MessageList                    (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpMessageManager::GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.GetMessageList");

	struct
	{
		struct FString                 ToUniqueUserId;
		struct FMcpMessageList         MessageList;
	} params;
	params.ToUniqueUserId = ToUniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageList != nullptr)
		*MessageList = params.MessageList;
}


// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.QueryMessages
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ToUniqueUserId                 (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageManager::QueryMessages(const struct FString& ToUniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.QueryMessages");

	struct
	{
		struct FString                 ToUniqueUserId;
	} params;
	params.ToUniqueUserId = ToUniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.DeleteMessage
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageManager::DeleteMessage(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.DeleteMessage");

	struct
	{
		struct FString                 MessageId;
	} params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UHttpRequestInterface*   CreateMessageRequest           (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete");

	struct
	{
		class UHttpRequestInterface*   CreateMessageRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.CreateMessageRequest = CreateMessageRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.CreateMessage
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// TArray<struct FString>         ToUniqueUserIds                (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 FromUniqueUserId               (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 FromFriendlyName               (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 MessageType                    (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 PushMessage                    (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ValidUntil                     (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpMessageManager::CreateMessage(const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<struct FString>* ToUniqueUserIds, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.CreateMessage");

	struct
	{
		TArray<struct FString>         ToUniqueUserIds;
		struct FString                 FromUniqueUserId;
		struct FString                 FromFriendlyName;
		struct FString                 MessageType;
		struct FString                 PushMessage;
		struct FString                 ValidUntil;
		TArray<unsigned char>          MessageContents;
	} params;
	params.FromUniqueUserId = FromUniqueUserId;
	params.FromFriendlyName = FromFriendlyName;
	params.MessageType = MessageType;
	params.PushMessage = PushMessage;
	params.ValidUntil = ValidUntil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToUniqueUserIds != nullptr)
		*ToUniqueUserIds = params.ToUniqueUserIds;
	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;
}


// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// TArray<unsigned char>          UncompressedMessageContents    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)

void UMcpMessageManager::FinishedAsyncUncompression(bool bWasSuccessful, const struct FString& MessageId, TArray<unsigned char>* UncompressedMessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.FinishedAsyncUncompression");

	struct
	{
		bool                           bWasSuccessful;
		TArray<unsigned char>          UncompressedMessageContents;
		struct FString                 MessageId;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UncompressedMessageContents != nullptr)
		*UncompressedMessageContents = params.UncompressedMessageContents;
}


// Function IpDrv.McpMessageManager.StartAsyncUncompression
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 MessageId                      (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EMcpMessageCompressionType> MessageCompressionType         (CPF_Parm)
// TArray<unsigned char>          MessageContent                 (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpMessageManager::StartAsyncUncompression(const struct FString& MessageId, TEnumAsByte<enum class EMcpMessageCompressionType> MessageCompressionType, TArray<unsigned char>* MessageContent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.StartAsyncUncompression");

	struct
	{
		struct FString                 MessageId;
		TEnumAsByte<enum class EMcpMessageCompressionType> MessageCompressionType;
		TArray<unsigned char>          MessageContent;
		bool                           ReturnValue;
	} params;
	params.MessageId = MessageId;
	params.MessageCompressionType = MessageCompressionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContent != nullptr)
		*MessageContent = params.MessageContent;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.StartAsyncCompression
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TEnumAsByte<enum class EMcpMessageCompressionType> MessageCompressionType         (CPF_Parm)
// TArray<unsigned char>          MessageContent                 (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpMessageManager::StartAsyncCompression(TEnumAsByte<enum class EMcpMessageCompressionType> MessageCompressionType, class UHttpRequestInterface* Request, TArray<unsigned char>* MessageContent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.StartAsyncCompression");

	struct
	{
		TEnumAsByte<enum class EMcpMessageCompressionType> MessageCompressionType;
		TArray<unsigned char>          MessageContent;
		class UHttpRequestInterface*   Request;
		bool                           ReturnValue;
	} params;
	params.MessageCompressionType = MessageCompressionType;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContent != nullptr)
		*MessageContent = params.MessageContent;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// (FUNC_Defined, FUNC_Public)

void UMcpUserCloudFileDownload::ClearAllDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         DeleteUserFileCompleteDelegate;
	} params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         DeleteUserFileCompleteDelegate;
	} params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallDeleteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UserId;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UserId;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           bShouldCloudDelete             (CPF_Parm)
// bool                           bShouldLocallyDelete           (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserCloudFileDownload::DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.DeleteUserFile");

	struct
	{
		struct FString                 UserId;
		struct FString                 Filename;
		bool                           bShouldCloudDelete;
		bool                           bShouldLocallyDelete;
		bool                           ReturnValue;
	} params;
	params.UserId = UserId;
	params.Filename = Filename;
	params.bShouldCloudDelete = bShouldCloudDelete;
	params.bShouldLocallyDelete = bShouldLocallyDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         WriteUserFileCompleteDelegate;
	} params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         WriteUserFileCompleteDelegate;
	} params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallWriteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UserId;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UserId;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// (FUNC_Final, FUNC_Defined, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// int                            UserIdx                        (CPF_Parm, CPF_OutParm)
// int                            FileIdx                        (CPF_Parm, CPF_OutParm)

void UMcpUserCloudFileDownload::GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int* UserIdx, int* FileIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest");

	struct
	{
		class UHttpRequestInterface*   Request;
		int                            UserIdx;
		int                            FileIdx;
	} params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserIdx != nullptr)
		*UserIdx = params.UserIdx;
	if (FileIdx != nullptr)
		*FileIdx = params.FileIdx;
}


// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserCloudFileDownload::WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.WriteUserFile");

	struct
	{
		struct FString                 UserId;
		struct FString                 Filename;
		TArray<unsigned char>          FileContents;
		bool                           ReturnValue;
	} params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ReadUserFileCompleteDelegate;
	} params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ReadUserFileCompleteDelegate;
	} params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallReadUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UserId;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UserId;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserCloudFileDownload::ReadUserFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ReadUserFile");

	struct
	{
		struct FString                 UserId;
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.GetUserFileList");

	struct
	{
		struct FString                 UserId;
		TArray<struct FEmsFile>        UserFiles;
	} params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserFiles != nullptr)
		*UserFiles = params.UserFiles;
}


// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         EnumerateUserFileCompleteDelegate;
	} params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate");

	struct
	{
		struct FScriptDelegate         EnumerateUserFileCompleteDelegate;
	} params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallEnumerateUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UserId;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UserId;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::EnumerateUserFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles");

	struct
	{
		struct FString                 UserId;
	} params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.ClearFile
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserCloudFileDownload::ClearFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearFile");

	struct
	{
		struct FString                 UserId;
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserCloudFileDownload::ClearFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearFiles");

	struct
	{
		struct FString                 UserId;
		bool                           ReturnValue;
	} params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserCloudFileDownload::GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.GetFileContents");

	struct
	{
		struct FString                 UserId;
		struct FString                 Filename;
		TArray<unsigned char>          FileContents;
		bool                           ReturnValue;
	} params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeacon.DestroyBeacon
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UMeshBeacon::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeacon.DestroyBeacon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// bool                           bSuccess                       (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconClient::SendHostNewGameSessionResponse(bool bSuccess, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse");

	struct
	{
		bool                           bSuccess;
		struct FName                   SessionName;
		class UClass*                  SearchClass;
		unsigned char                  PlatformSpecificInfo;
		bool                           ReturnValue;
	} params;
	params.bSuccess = bSuccess;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// TArray<struct FPlayerMember>   Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMeshBeaconClient::OnCreateNewSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived");

	struct
	{
		struct FName                   SessionName;
		class UClass*                  SearchClass;
		TArray<struct FPlayerMember>   Players;
	} params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Const, CPF_Parm, CPF_OutParm)

void UMeshBeaconClient::OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnTravelRequestReceived");

	struct
	{
		struct FName                   SessionName;
		class UClass*                  SearchClass;
		unsigned char                  PlatformSpecificInfo;
	} params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType                       (CPF_Parm)
// TEnumAsByte<enum class EMeshBeaconBandwidthTestResult> TestResult                     (CPF_Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (CPF_Const, CPF_Parm, CPF_OutParm)

void UMeshBeaconClient::OnReceivedBandwidthTestResults(TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<enum class EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults");

	struct
	{
		TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType;
		TEnumAsByte<enum class EMeshBeaconBandwidthTestResult> TestResult;
		struct FConnectionBandwidthStats BandwidthStats;
	} params;
	params.TestType = TestType;
	params.TestResult = TestResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BandwidthStats != nullptr)
		*BandwidthStats = params.BandwidthStats;
}


// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType                       (CPF_Parm)

void UMeshBeaconClient::OnReceivedBandwidthTestRequest(TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest");

	struct
	{
		TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType;
	} params;
	params.TestType = TestType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// TEnumAsByte<enum class EMeshBeaconConnectionResult> ConnectionResult               (CPF_Parm)

void UMeshBeaconClient::OnConnectionRequestResult(TEnumAsByte<enum class EMeshBeaconConnectionResult> ConnectionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnConnectionRequestResult");

	struct
	{
		TEnumAsByte<enum class EMeshBeaconConnectionResult> ConnectionResult;
	} params;
	params.ConnectionResult = ConnectionResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// (FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType                       (CPF_Parm)
// int                            TestBufferSize                 (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconClient::BeginBandwidthTest(TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType, int TestBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.BeginBandwidthTest");

	struct
	{
		TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType;
		int                            TestBufferSize;
		bool                           ReturnValue;
	} params;
	params.TestType = TestType;
	params.TestBufferSize = TestBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.RequestConnection
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FClientConnectionRequest ClientRequest                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           bRegisterSecureAddress         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconClient::RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.RequestConnection");

	struct
	{
		struct FOnlineGameSearchResult DesiredHost;
		struct FClientConnectionRequest ClientRequest;
		bool                           bRegisterSecureAddress;
		bool                           ReturnValue;
	} params;
	params.bRegisterSecureAddress = bRegisterSecureAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (ClientRequest != nullptr)
		*ClientRequest = params.ClientRequest;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.DestroyBeacon
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UMeshBeaconClient::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.DestroyBeacon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// bool                           bSucceeded                     (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Const, CPF_Parm, CPF_OutParm)

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult(bool bSucceeded, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult");

	struct
	{
		bool                           bSucceeded;
		struct FName                   SessionName;
		class UClass*                  SearchClass;
		unsigned char                  PlatformSpecificInfo;
	} params;
	params.bSucceeded = bSucceeded;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// TArray<struct FPlayerMember>   Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconHost::RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession");

	struct
	{
		struct FUniqueNetId            PlayerNetId;
		struct FName                   SessionName;
		class UClass*                  SearchClass;
		TArray<struct FPlayerMember>   Players;
		bool                           ReturnValue;
	} params;
	params.PlayerNetId = PlayerNetId;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Const, CPF_Parm, CPF_OutParm)

void UMeshBeaconHost::TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.TellClientsToTravel");

	struct
	{
		struct FName                   SessionName;
		class UClass*                  SearchClass;
		unsigned char                  PlatformSpecificInfo;
	} params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// (FUNC_Public, FUNC_Delegate)

void UMeshBeaconHost::OnAllPendingPlayersConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconHost::AllPlayersConnected(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.AllPlayersConnected");

	struct
	{
		TArray<struct FUniqueNetId>    Players;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMeshBeaconHost::GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer");

	struct
	{
		struct FUniqueNetId            PlayerNetId;
		int                            ReturnValue;
	} params;
	params.PlayerNetId = PlayerNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMeshBeaconHost::SetPendingPlayerConnections(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections");

	struct
	{
		TArray<struct FUniqueNetId>    Players;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType                       (CPF_Parm)
// TEnumAsByte<enum class EMeshBeaconBandwidthTestResult> TestResult                     (CPF_Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (CPF_Const, CPF_Parm, CPF_OutParm)

void UMeshBeaconHost::OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<enum class EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest");

	struct
	{
		struct FUniqueNetId            PlayerNetId;
		TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType;
		TEnumAsByte<enum class EMeshBeaconBandwidthTestResult> TestResult;
		struct FConnectionBandwidthStats BandwidthStats;
	} params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;
	params.TestResult = TestResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BandwidthStats != nullptr)
		*BandwidthStats = params.BandwidthStats;
}


// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType                       (CPF_Parm)

void UMeshBeaconHost::OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest");

	struct
	{
		struct FUniqueNetId            PlayerNetId;
		TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType;
	} params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FClientMeshBeaconConnection NewClientConnection            (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMeshBeaconHost::OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest");

	struct
	{
		struct FClientMeshBeaconConnection NewClientConnection;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewClientConnection != nullptr)
		*NewClientConnection = params.NewClientConnection;
}


// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           bEnabled                       (CPF_Parm)

void UMeshBeaconHost::AllowBandwidthTesting(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.AllowBandwidthTesting");

	struct
	{
		bool                           bEnabled;
	} params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// (FUNC_Native, FUNC_Public)

void UMeshBeaconHost::CancelPendingBandwidthTests()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconHost::HasPendingBandwidthTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// (FUNC_Native, FUNC_Public)

void UMeshBeaconHost::CancelInProgressBandwidthTests()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconHost::HasInProgressBandwidthTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType                       (CPF_Parm)
// int                            TestBufferSize                 (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconHost::RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType, int TestBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest");

	struct
	{
		struct FUniqueNetId            PlayerNetId;
		TEnumAsByte<enum class EMeshBeaconBandwidthTestType> TestType;
		int                            TestBufferSize;
		bool                           ReturnValue;
	} params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;
	params.TestBufferSize = TestBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.DestroyBeacon
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UMeshBeaconHost::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.DestroyBeacon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.InitHostBeacon
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            InOwningPlayerId               (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMeshBeaconHost::InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.InitHostBeacon");

	struct
	{
		struct FUniqueNetId            InOwningPlayerId;
		bool                           ReturnValue;
	} params;
	params.InOwningPlayerId = InOwningPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    OutRegisteredPlayers           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");

	struct
	{
		struct FName                   SessionName;
		TArray<struct FUniqueNetId>    OutRegisteredPlayers;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRegisteredPlayers != nullptr)
		*OutRegisteredPlayers = params.OutRegisteredPlayers;
}


// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");

	struct
	{
		struct FName                   SessionName;
		struct FUniqueNetId            PlayerID;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// (FUNC_Event, FUNC_Public)
// Parameters:
// int                            UserIndex                      (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemCommonImpl::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex");

	struct
	{
		int                            UserIndex;
		struct FString                 ReturnValue;
	} params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// struct FString                 Country                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::OnPlayerCountryRetrieved(const struct FUniqueNetId& PlayerID, const struct FString& Country)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved");

	struct
	{
		struct FUniqueNetId            PlayerID;
		struct FString                 Country;
	} params;
	params.PlayerID = PlayerID;
	params.Country = Country;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 Original                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Sanitized                      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::OnSanitizeStringComplete(const struct FString& Original, const struct FString& Sanitized)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete");

	struct
	{
		struct FString                 Original;
		struct FString                 Sanitized;
	} params;
	params.Original = Original;
	params.Sanitized = Sanitized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.RequiresMTXAuthorizationCode
// (FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::RequiresMTXAuthorizationCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.RequiresMTXAuthorizationCode");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthorizationCode
// (FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::RequiresAuthorizationCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthorizationCode");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.IsRequestingAuthorizationCode
// (FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::IsRequestingAuthorizationCode(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.IsRequestingAuthorizationCode");

	struct
	{
		struct FUniqueNetId            PlayerID;
		struct FScriptDelegate         Callback;
		bool                           ReturnValue;
	} params;
	params.PlayerID = PlayerID;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthorizationCode
// (FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::RequestAuthorizationCode(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthorizationCode");

	struct
	{
		struct FUniqueNetId            PlayerID;
		struct FScriptDelegate         Callback;
		bool                           ReturnValue;
	} params;
	params.PlayerID = PlayerID;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthorizationCode
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bSuccess                       (CPF_Parm)
// struct FString                 AuthorizationCode              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 EncryptedTicket                (CPF_Parm, CPF_NeedCtorLink)
// int                            IssuerID                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnReceivedAuthorizationCode(bool bSuccess, const struct FString& AuthorizationCode, const struct FString& EncryptedTicket, int IssuerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthorizationCode");

	struct
	{
		bool                           bSuccess;
		struct FString                 AuthorizationCode;
		struct FString                 EncryptedTicket;
		int                            IssuerID;
	} params;
	params.bSuccess = bSuccess;
	params.AuthorizationCode = AuthorizationCode;
	params.EncryptedTicket = EncryptedTicket;
	params.IssuerID = IssuerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FIpAddr                 OutServerIP                    (CPF_Parm, CPF_OutParm)
// int                            OutServerPort                  (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr");

	struct
	{
		struct FIpAddr                 OutServerIP;
		int                            OutServerPort;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerIP != nullptr)
		*OutServerIP = params.OutServerIP;
	if (OutServerPort != nullptr)
		*OutServerPort = params.OutServerPort;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            OutServerUID                   (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::GetServerUniqueId(struct FUniqueNetId* OutServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId");

	struct
	{
		struct FUniqueNetId            OutServerUID;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerUID != nullptr)
		*OutServerUID = params.OutServerUID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession");

	struct
	{
		class UPlayer*                 ClientConnection;
		struct FLocalAuthSession       OutSessionInfo;
		bool                           ReturnValue;
	} params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession");

	struct
	{
		class UPlayer*                 ServerConnection;
		struct FAuthSession            OutSessionInfo;
		bool                           ReturnValue;
	} params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession");

	struct
	{
		class UPlayer*                 ServerConnection;
		struct FLocalAuthSession       OutSessionInfo;
		bool                           ReturnValue;
	} params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession");

	struct
	{
		class UPlayer*                 ClientConnection;
		struct FAuthSession            OutSessionInfo;
		bool                           ReturnValue;
	} params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// (FUNC_Iterator, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm, CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllLocalServerAuthSessions(struct FLocalAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions");

	struct
	{
		struct FLocalAuthSession       OutSessionInfo;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// (FUNC_Iterator, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm, CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllServerAuthSessions(struct FAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions");

	struct
	{
		struct FAuthSession            OutSessionInfo;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// (FUNC_Iterator, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm, CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllLocalClientAuthSessions(struct FLocalAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions");

	struct
	{
		struct FLocalAuthSession       OutSessionInfo;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// (FUNC_Iterator, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm, CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllClientAuthSessions(struct FAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions");

	struct
	{
		struct FAuthSession            OutSessionInfo;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// (FUNC_Native, FUNC_Public)

void UOnlineAuthInterfaceImpl::EndAllRemoteServerAuthSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// (FUNC_Native, FUNC_Public)

void UOnlineAuthInterfaceImpl::EndAllLocalServerAuthSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// struct FIpAddr                 ServerIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession");

	struct
	{
		struct FUniqueNetId            ServerUID;
		struct FIpAddr                 ServerIP;
	} params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// struct FIpAddr                 ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession");

	struct
	{
		struct FUniqueNetId            ClientUID;
		struct FIpAddr                 ClientIP;
	} params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// (FUNC_Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession");

	struct
	{
		struct FUniqueNetId            ServerUID;
		struct FIpAddr                 ServerIP;
		int                            AuthTicketUID;
		bool                           ReturnValue;
	} params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)
// int                            OutAuthTicketUID               (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession");

	struct
	{
		struct FUniqueNetId            ClientUID;
		struct FIpAddr                 ClientIP;
		int                            ClientPort;
		int                            OutAuthTicketUID;
		bool                           ReturnValue;
	} params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthTicketUID != nullptr)
		*OutAuthTicketUID = params.OutAuthTicketUID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// (FUNC_Native, FUNC_Public)

void UOnlineAuthInterfaceImpl::EndAllRemoteClientAuthSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// (FUNC_Native, FUNC_Public)

void UOnlineAuthInterfaceImpl::EndAllLocalClientAuthSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// struct FIpAddr                 ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession");

	struct
	{
		struct FUniqueNetId            ClientUID;
		struct FIpAddr                 ClientIP;
	} params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            ServerPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession");

	struct
	{
		struct FUniqueNetId            ServerUID;
		struct FIpAddr                 ServerIP;
		int                            ServerPort;
	} params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// (FUNC_Public)
// Parameters:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession");

	struct
	{
		struct FUniqueNetId            ClientUID;
		struct FIpAddr                 ClientIP;
		int                            ClientPort;
		int                            AuthTicketUID;
		bool                           ReturnValue;
	} params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            ServerPort                     (CPF_Parm)
// bool                           bSecure                        (CPF_Parm)
// int                            OutAuthTicketUID               (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession");

	struct
	{
		struct FUniqueNetId            ServerUID;
		struct FIpAddr                 ServerIP;
		int                            ServerPort;
		bool                           bSecure;
		int                            OutAuthTicketUID;
		bool                           ReturnValue;
	} params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;
	params.bSecure = bSecure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthTicketUID != nullptr)
		*OutAuthTicketUID = params.OutAuthTicketUID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRetryRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendClientAuthEndSessionRequest(class UPlayer* ClientConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest");

	struct
	{
		class UPlayer*                 ClientConnection;
		bool                           ReturnValue;
	} params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthResponse(class UPlayer* ClientConnection, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse");

	struct
	{
		class UPlayer*                 ClientConnection;
		int                            AuthTicketUID;
		bool                           ReturnValue;
	} params;
	params.ClientConnection = ClientConnection;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            AuthTicketUID                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendClientAuthResponse(int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse");

	struct
	{
		int                            AuthTicketUID;
		bool                           ReturnValue;
	} params;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// (FUNC_Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRequest(const struct FUniqueNetId& ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest");

	struct
	{
		struct FUniqueNetId            ServerUID;
		bool                           ReturnValue;
	} params;
	params.ServerUID = ServerUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// (FUNC_Public)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest");

	struct
	{
		class UPlayer*                 ClientConnection;
		struct FUniqueNetId            ClientUID;
		bool                           ReturnValue;
	} params;
	params.ClientConnection = ClientConnection;
	params.ClientUID = ClientUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate");

	struct
	{
		struct FScriptDelegate         ServerConnectionCloseDelegate;
	} params;
	params.ServerConnectionCloseDelegate = ServerConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate");

	struct
	{
		struct FScriptDelegate         ServerConnectionCloseDelegate;
	} params;
	params.ServerConnectionCloseDelegate = ServerConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerConnectionClose(class UPlayer* ServerConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose");

	struct
	{
		class UPlayer*                 ServerConnection;
	} params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate");

	struct
	{
		struct FScriptDelegate         ClientConnectionCloseDelegate;
	} params;
	params.ClientConnectionCloseDelegate = ClientConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate");

	struct
	{
		struct FScriptDelegate         ClientConnectionCloseDelegate;
	} params;
	params.ClientConnectionCloseDelegate = ClientConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientConnectionClose(class UPlayer* ClientConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose");

	struct
	{
		class UPlayer*                 ClientConnection;
	} params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate");

	struct
	{
		struct FScriptDelegate         ServerAuthRetryRequestDelegate;
	} params;
	params.ServerAuthRetryRequestDelegate = ServerAuthRetryRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate");

	struct
	{
		struct FScriptDelegate         ServerAuthRetryRequestDelegate;
	} params;
	params.ServerAuthRetryRequestDelegate = ServerAuthRetryRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRetryRequest(class UPlayer* ClientConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest");

	struct
	{
		class UPlayer*                 ClientConnection;
	} params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate");

	struct
	{
		struct FScriptDelegate         ClientAuthEndSessionRequestDelegate;
	} params;
	params.ClientAuthEndSessionRequestDelegate = ClientAuthEndSessionRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate");

	struct
	{
		struct FScriptDelegate         ClientAuthEndSessionRequestDelegate;
	} params;
	params.ClientAuthEndSessionRequestDelegate = ClientAuthEndSessionRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthEndSessionRequest(class UPlayer* ServerConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest");

	struct
	{
		class UPlayer*                 ServerConnection;
	} params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ServerAuthCompleteDelegate;
	} params;
	params.ServerAuthCompleteDelegate = ServerAuthCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ServerAuthCompleteDelegate;
	} params;
	params.ServerAuthCompleteDelegate = ServerAuthCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FString                 ExtraInfo                      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const struct FString& ExtraInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete");

	struct
	{
		bool                           bSuccess;
		struct FUniqueNetId            ServerUID;
		class UPlayer*                 ServerConnection;
		struct FString                 ExtraInfo;
	} params;
	params.bSuccess = bSuccess;
	params.ServerUID = ServerUID;
	params.ServerConnection = ServerConnection;
	params.ExtraInfo = ExtraInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ClientAuthCompleteDelegate;
	} params;
	params.ClientAuthCompleteDelegate = ClientAuthCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ClientAuthCompleteDelegate;
	} params;
	params.ClientAuthCompleteDelegate = ClientAuthCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FString                 ExtraInfo                      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const struct FString& ExtraInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete");

	struct
	{
		bool                           bSuccess;
		struct FUniqueNetId            ClientUID;
		class UPlayer*                 ClientConnection;
		struct FString                 ExtraInfo;
	} params;
	params.bSuccess = bSuccess;
	params.ClientUID = ClientUID;
	params.ClientConnection = ClientConnection;
	params.ExtraInfo = ExtraInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate");

	struct
	{
		struct FScriptDelegate         ServerAuthResponseDelegate;
	} params;
	params.ServerAuthResponseDelegate = ServerAuthResponseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate");

	struct
	{
		struct FScriptDelegate         ServerAuthResponseDelegate;
	} params;
	params.ServerAuthResponseDelegate = ServerAuthResponseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthResponse(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse");

	struct
	{
		struct FUniqueNetId            ServerUID;
		struct FIpAddr                 ServerIP;
		int                            AuthTicketUID;
	} params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate");

	struct
	{
		struct FScriptDelegate         ClientAuthResponseDelegate;
	} params;
	params.ClientAuthResponseDelegate = ClientAuthResponseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate");

	struct
	{
		struct FScriptDelegate         ClientAuthResponseDelegate;
	} params;
	params.ClientAuthResponseDelegate = ClientAuthResponseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthResponse(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse");

	struct
	{
		struct FUniqueNetId            ClientUID;
		struct FIpAddr                 ClientIP;
		int                            AuthTicketUID;
	} params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate");

	struct
	{
		struct FScriptDelegate         ServerAuthRequestDelegate;
	} params;
	params.ServerAuthRequestDelegate = ServerAuthRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate");

	struct
	{
		struct FScriptDelegate         ServerAuthRequestDelegate;
	} params;
	params.ServerAuthRequestDelegate = ServerAuthRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest");

	struct
	{
		class UPlayer*                 ClientConnection;
		struct FUniqueNetId            ClientUID;
		struct FIpAddr                 ClientIP;
		int                            ClientPort;
	} params;
	params.ClientConnection = ClientConnection;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate");

	struct
	{
		struct FScriptDelegate         ClientAuthRequestDelegate;
	} params;
	params.ClientAuthRequestDelegate = ClientAuthRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate");

	struct
	{
		struct FScriptDelegate         ClientAuthRequestDelegate;
	} params;
	params.ClientAuthRequestDelegate = ClientAuthRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            ServerPort                     (CPF_Parm)
// bool                           bSecure                        (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthRequest(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest");

	struct
	{
		struct FUniqueNetId            ServerUID;
		struct FIpAddr                 ServerIP;
		int                            ServerPort;
		bool                           bSecure;
	} params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;
	params.bSecure = bSecure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate");

	struct
	{
		struct FScriptDelegate         AuthReadyDelegate;
	} params;
	params.AuthReadyDelegate = AuthReadyDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm, CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate");

	struct
	{
		struct FScriptDelegate         AuthReadyDelegate;
	} params;
	params.AuthReadyDelegate = AuthReadyDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// (FUNC_Public, FUNC_Delegate)

void UOnlineAuthInterfaceImpl::OnAuthReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.IsReady");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         GamePlayersChangedDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate");

	struct
	{
		struct FScriptDelegate         GamePlayersChangedDelegate;
	} params;
	params.GamePlayersChangedDelegate = GamePlayersChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         GamePlayersChangedDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate");

	struct
	{
		struct FScriptDelegate         GamePlayersChangedDelegate;
	} params;
	params.GamePlayersChangedDelegate = GamePlayersChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::OnGamePlayersChanged(const struct FName& SessionName, TArray<struct FUniqueNetId> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged");

	struct
	{
		struct FName                   SessionName;
		TArray<struct FUniqueNetId>    Players;
	} params;
	params.SessionName = SessionName;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation
// (FUNC_Public)
// Parameters:
// struct FUniqueNetId            JoinablePlayerID               (CPF_Parm)
// struct FString                 ServerAddress                  (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class ELobbyVisibility> Visibility                     (CPF_Parm)

void UOnlineGameInterfaceImpl::SetFriendJoinLocation(const struct FUniqueNetId& JoinablePlayerID, const struct FString& ServerAddress, TEnumAsByte<enum class ELobbyVisibility> Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation");

	struct
	{
		struct FUniqueNetId            JoinablePlayerID;
		struct FString                 ServerAddress;
		TEnumAsByte<enum class ELobbyVisibility> Visibility;
	} params;
	params.JoinablePlayerID = JoinablePlayerID;
	params.ServerAddress = ServerAddress;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         OldDelegate                    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearReportMatchmakingInfoDelegate(const struct FScriptDelegate& OldDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate");

	struct
	{
		struct FScriptDelegate         OldDelegate;
	} params;
	params.OldDelegate = OldDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         NewDelegate                    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddReportMatchmakingInfoDelegate(const struct FScriptDelegate& NewDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate");

	struct
	{
		struct FScriptDelegate         NewDelegate;
	} params;
	params.NewDelegate = NewDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 NewInfo                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::EventReportMatchmakingInfo(const struct FString& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo");

	struct
	{
		struct FString                 NewInfo;
	} params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate");

	struct
	{
		struct FScriptDelegate         QosStatusChangedDelegate;
	} params;
	params.QosStatusChangedDelegate = QosStatusChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate");

	struct
	{
		struct FScriptDelegate         QosStatusChangedDelegate;
	} params;
	params.QosStatusChangedDelegate = QosStatusChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            NumComplete                    (CPF_Parm)
// int                            NumTotal                       (CPF_Parm)

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int NumComplete, int NumTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged");

	struct
	{
		int                            NumComplete;
		int                            NumTotal;
	} params;
	params.NumComplete = NumComplete;
	params.NumTotal = NumTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch");

	struct
	{
		unsigned char                  SearchingPlayerNum;
		class UOnlineGameSearch*       SearchSettings;
		unsigned char                  PlatformSpecificInfo;
		bool                           ReturnValue;
	} params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName");

	struct
	{
		struct FName                   SessionName;
		unsigned char                  PlatformSpecificInfo;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const, CPF_Parm, CPF_OutParm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo");

	struct
	{
		struct FOnlineGameSearchResult DesiredGame;
		unsigned char                  PlatformSpecificInfo;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;
	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// (FUNC_Public)
// Parameters:
// int                            StartAt                        (CPF_Parm)
// int                            NumberToQuery                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData");

	struct
	{
		int                            StartAt;
		int                            NumberToQuery;
		bool                           ReturnValue;
	} params;
	params.StartAt = StartAt;
	params.NumberToQuery = NumberToQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate;
	} params;
	params.JoinMigratedOnlineGameCompleteDelegate = JoinMigratedOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate;
	} params;
	params.JoinMigratedOnlineGameCompleteDelegate = JoinMigratedOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame");

	struct
	{
		unsigned char                  PlayerNum;
		struct FName                   SessionName;
		struct FOnlineGameSearchResult DesiredGame;
		bool                           ReturnValue;
	} params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         MigrateOnlineGameCompleteDelegate;
	} params;
	params.MigrateOnlineGameCompleteDelegate = MigrateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         MigrateOnlineGameCompleteDelegate;
	} params;
	params.MigrateOnlineGameCompleteDelegate = MigrateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// (FUNC_Public)
// Parameters:
// unsigned char                  HostingPlayerNum               (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame");

	struct
	{
		unsigned char                  HostingPlayerNum;
		struct FName                   SessionName;
		bool                           ReturnValue;
	} params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate");

	struct
	{
		struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate;
	} params;
	params.RecalculateSkillRatingGameCompleteDelegate = RecalculateSkillRatingGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate");

	struct
	{
		struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate;
	} params;
	params.RecalculateSkillRatingCompleteDelegate = RecalculateSkillRatingCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating");

	struct
	{
		struct FName                   SessionName;
		TArray<struct FUniqueNetId>    Players;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite");

	struct
	{
		unsigned char                  LocalUserNum;
		struct FName                   SessionName;
		bool                           ReturnValue;
	} params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate");

	struct
	{
		unsigned char                  LocalUserNum;
		struct FScriptDelegate         GameInviteAcceptedDelegate;
	} params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate");

	struct
	{
		unsigned char                  LocalUserNum;
		struct FScriptDelegate         GameInviteAcceptedDelegate;
	} params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ErrorString                    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(const struct FString& ErrorString, struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted");

	struct
	{
		struct FOnlineGameSearchResult InviteResult;
		struct FString                 ErrorString;
	} params;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// (FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceImpl::GetArbitratedPlayers(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers");

	struct
	{
		struct FName                   SessionName;
		TArray<struct FOnlineArbitrationRegistrant> ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate;
	} params;
	params.ArbitrationRegistrationCompleteDelegate = ArbitrationRegistrationCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate");

	struct
	{
		struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate;
	} params;
	params.ArbitrationRegistrationCompleteDelegate = ArbitrationRegistrationCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// (FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterForArbitration(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration");

	struct
	{
		struct FName                   SessionName;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         EndOnlineGameCompleteDelegate;
	} params;
	params.EndOnlineGameCompleteDelegate = EndOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         EndOnlineGameCompleteDelegate;
	} params;
	params.EndOnlineGameCompleteDelegate = EndOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::EndOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame");

	struct
	{
		struct FName                   SessionName;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         StartOnlineGameCompleteDelegate;
	} params;
	params.StartOnlineGameCompleteDelegate = StartOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         StartOnlineGameCompleteDelegate;
	} params;
	params.StartOnlineGameCompleteDelegate = StartOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::StartOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame");

	struct
	{
		struct FName                   SessionName;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate");

	struct
	{
		struct FScriptDelegate         UnregisterPlayerCompleteDelegate;
	} params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate");

	struct
	{
		struct FScriptDelegate         UnregisterPlayerCompleteDelegate;
	} params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete");

	struct
	{
		struct FName                   SessionName;
		struct FUniqueNetId            PlayerID;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers");

	struct
	{
		struct FName                   SessionName;
		TArray<struct FUniqueNetId>    Players;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// (FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer");

	struct
	{
		struct FName                   SessionName;
		struct FUniqueNetId            PlayerID;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate");

	struct
	{
		struct FScriptDelegate         RegisterPlayerCompleteDelegate;
	} params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate");

	struct
	{
		struct FScriptDelegate         RegisterPlayerCompleteDelegate;
	} params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete");

	struct
	{
		struct FName                   SessionName;
		struct FUniqueNetId            PlayerID;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers");

	struct
	{
		struct FName                   SessionName;
		TArray<struct FUniqueNetId>    Players;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// (FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasInvited                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer");

	struct
	{
		struct FName                   SessionName;
		struct FUniqueNetId            PlayerID;
		bool                           bWasInvited;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FString                 ConnectInfo                    (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString");

	struct
	{
		struct FName                   SessionName;
		struct FString                 ConnectInfo;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectInfo != nullptr)
		*ConnectInfo = params.ConnectInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         JoinOnlineGameCompleteDelegate;
	} params;
	params.JoinOnlineGameCompleteDelegate = JoinOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         JoinOnlineGameCompleteDelegate;
	} params;
	params.JoinOnlineGameCompleteDelegate = JoinOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame");

	struct
	{
		unsigned char                  PlayerNum;
		struct FName                   SessionName;
		struct FOnlineGameSearchResult DesiredGame;
		bool                           ReturnValue;
	} params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UOnlineGameSearch*       Search                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults");

	struct
	{
		class UOnlineGameSearch*       Search;
		bool                           ReturnValue;
	} params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate");

	struct
	{
		struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate;
	} params;
	params.CancelFindOnlineGamesCompleteDelegate = CancelFindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate");

	struct
	{
		struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate;
	} params;
	params.CancelFindOnlineGamesCompleteDelegate = CancelFindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete");

	struct
	{
		bool                           bWasSuccessful;
	} params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate");

	struct
	{
		struct FScriptDelegate         FindOnlineGamesCompleteDelegate;
	} params;
	params.FindOnlineGamesCompleteDelegate = FindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate");

	struct
	{
		struct FScriptDelegate         FindOnlineGamesCompleteDelegate;
	} params;
	params.FindOnlineGamesCompleteDelegate = FindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames");

	struct
	{
		unsigned char                  SearchingPlayerNum;
		class UOnlineGameSearch*       SearchSettings;
		bool                           ReturnValue;
	} params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         DestroyOnlineGameCompleteDelegate;
	} params;
	params.DestroyOnlineGameCompleteDelegate = DestroyOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         DestroyOnlineGameCompleteDelegate;
	} params;
	params.DestroyOnlineGameCompleteDelegate = DestroyOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::DestroyOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame");

	struct
	{
		struct FName                   SessionName;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         UpdateOnlineGameCompleteDelegate;
	} params;
	params.UpdateOnlineGameCompleteDelegate = UpdateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         UpdateOnlineGameCompleteDelegate;
	} params;
	params.UpdateOnlineGameCompleteDelegate = UpdateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// bool                           bShouldRefreshOnlineData       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame");

	struct
	{
		struct FName                   SessionName;
		class UOnlineGameSettings*     UpdatedGameSettings;
		bool                           bShouldRefreshOnlineData;
		bool                           ReturnValue;
	} params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         CreateOnlineGameCompleteDelegate;
	} params;
	params.CreateOnlineGameCompleteDelegate = CreateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate");

	struct
	{
		struct FScriptDelegate         CreateOnlineGameCompleteDelegate;
	} params;
	params.CreateOnlineGameCompleteDelegate = CreateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete");

	struct
	{
		struct FName                   SessionName;
		bool                           bWasSuccessful;
	} params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  HostingPlayerNum               (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     NewGameSettings                (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame");

	struct
	{
		unsigned char                  HostingPlayerNum;
		struct FName                   SessionName;
		class UOnlineGameSettings*     NewGameSettings;
		bool                           ReturnValue;
	} params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UOnlineGameSearch*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch");

	struct
	{
		class UOnlineGameSearch*       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings");

	struct
	{
		struct FName                   SessionName;
		class UOnlineGameSettings*     ReturnValue;
	} params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete");

	struct
	{
		bool                           bWasSuccessful;
	} params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate");

	struct
	{
		struct FScriptDelegate         InDelegate;
	} params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate");

	struct
	{
		struct FScriptDelegate         InDelegate;
	} params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineLobbyInterfaceImpl::OnHostStartPlayTogether(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether");

	struct
	{
		unsigned char                  LocalUserNum;
	} params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyErrorDelegate             (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate");

	struct
	{
		struct FScriptDelegate         LobbyErrorDelegate;
	} params;
	params.LobbyErrorDelegate = LobbyErrorDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyErrorDelegate             (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate");

	struct
	{
		struct FScriptDelegate         LobbyErrorDelegate;
	} params;
	params.LobbyErrorDelegate = LobbyErrorDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyError(const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError");

	struct
	{
		struct FString                 Error;
	} params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// TArray<struct FLobbyMember>    Members                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::GetLobbyMembers(struct FUniqueLobbyId* LobbyId, TArray<struct FLobbyMember>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		TArray<struct FLobbyMember>    Members;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (Members != nullptr)
		*Members = params.Members;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbySessionCreatedDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbySessionCretedeDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate");

	struct
	{
		struct FScriptDelegate         LobbySessionCreatedDelegate;
	} params;
	params.LobbySessionCreatedDelegate = LobbySessionCreatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbySessionCreatedDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate");

	struct
	{
		struct FScriptDelegate         LobbySessionCreatedDelegate;
	} params;
	params.LobbySessionCreatedDelegate = LobbySessionCreatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UOnlineLobbyInterfaceImpl::TriggerLobbySessionCreatedDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated
// (FUNC_Public, FUNC_Delegate)

void UOnlineLobbyInterfaceImpl::OnLobbySessionCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UOnlineLobbyInterfaceImpl::GetLobbyIndex(struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            PartyMember                    (CPF_Const, CPF_Parm, CPF_OutParm)

void UOnlineLobbyInterfaceImpl::RemoveLocalPlayerFromSession(struct FUniqueNetId* PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession");

	struct
	{
		struct FUniqueNetId            PartyMember;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyMember != nullptr)
		*PartyMember = params.PartyMember;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            NewPartyMember                 (CPF_Const, CPF_Parm, CPF_OutParm)

void UOnlineLobbyInterfaceImpl::AddLocalPartyMemberToSession(struct FUniqueNetId* NewPartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession");

	struct
	{
		struct FUniqueNetId            NewPartyMember;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPartyMember != nullptr)
		*NewPartyMember = params.NewPartyMember;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// TEnumAsByte<enum class ELobbyKickReason> Reason                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::KickPlayer(TEnumAsByte<enum class ELobbyKickReason> Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FUniqueNetId            PlayerID;
		TEnumAsByte<enum class ELobbyKickReason> Reason;
		bool                           ReturnValue;
	} params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.PlayTogether_Invite
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 InviteMessage                  (CPF_Const, CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::PlayTogether_Invite(const struct FString& InviteMessage, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.PlayTogether_Invite");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FString                 InviteMessage;
	} params;
	params.InviteMessage = InviteMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Const, CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI");

	struct
	{
		unsigned char                  LocalUserNum;
		struct FUniqueLobbyId          LobbyId;
		bool                           ReturnValue;
	} params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            LobbyIndex                     (CPF_Parm)
// TEnumAsByte<enum class ELobbyKickReason> Reason                         (CPF_Parm)

void UOnlineLobbyInterfaceImpl::TriggerLobbyDestroyedDelegates(int LobbyIndex, TEnumAsByte<enum class ELobbyKickReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates");

	struct
	{
		int                            LobbyIndex;
		TEnumAsByte<enum class ELobbyKickReason> Reason;
	} params;
	params.LobbyIndex = LobbyIndex;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyDestroyedDelegate         (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate");

	struct
	{
		struct FScriptDelegate         LobbyDestroyedDelegate;
	} params;
	params.LobbyDestroyedDelegate = LobbyDestroyedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyDestroyedDelegate         (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate");

	struct
	{
		struct FScriptDelegate         LobbyDestroyedDelegate;
	} params;
	params.LobbyDestroyedDelegate = LobbyDestroyedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// TEnumAsByte<enum class ELobbyKickReason> Reason                         (CPF_Parm)

void UOnlineLobbyInterfaceImpl::OnLobbyDestroyed(TEnumAsByte<enum class ELobbyKickReason> Reason, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		TEnumAsByte<enum class ELobbyKickReason> Reason;
	} params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyInviteDelegate            (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate");

	struct
	{
		struct FScriptDelegate         LobbyInviteDelegate;
	} params;
	params.LobbyInviteDelegate = LobbyInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyInviteDelegate            (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate");

	struct
	{
		struct FScriptDelegate         LobbyInviteDelegate;
	} params;
	params.LobbyInviteDelegate = LobbyInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            FriendId                       (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           bAccepted                      (CPF_Parm)

void UOnlineLobbyInterfaceImpl::OnLobbyInvite(bool bAccepted, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* FriendId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FUniqueNetId            FriendId;
		bool                           bAccepted;
	} params;
	params.bAccepted = bAccepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (FriendId != nullptr)
		*FriendId = params.FriendId;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::InviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FUniqueNetId            PlayerID;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            NewOwner                       (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::SetLobbyOwner(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FUniqueNetId            NewOwner;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (NewOwner != nullptr)
		*NewOwner = params.NewOwner;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           bLocked                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::SetLobbyLock(bool bLocked, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		bool                           bLocked;
		bool                           ReturnValue;
	} params;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            ServerUID                      (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ServerIP                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::SetLobbyServer(const struct FString& ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FUniqueNetId            ServerUID;
		struct FString                 ServerIP;
		bool                           ReturnValue;
	} params;
	params.ServerIP = ServerIP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (ServerUID != nullptr)
		*ServerUID = params.ServerUID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::RemoveLobbySetting(const struct FString& Key, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FString                 Key;
		bool                           ReturnValue;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::SetLobbySetting(const struct FString& Key, const struct FString& Value, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FString                 Key;
		struct FString                 Value;
		bool                           ReturnValue;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            AdminId                        (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::GetLobbyAdmin(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FUniqueNetId            AdminId;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (AdminId != nullptr)
		*AdminId = params.AdminId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyJoinGameDelegate          (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate");

	struct
	{
		struct FScriptDelegate         LobbyJoinGameDelegate;
	} params;
	params.LobbyJoinGameDelegate = LobbyJoinGameDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyJoinGameDelegate          (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate");

	struct
	{
		struct FScriptDelegate         LobbyJoinGameDelegate;
	} params;
	params.LobbyJoinGameDelegate = LobbyJoinGameDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            LobbyIndex                     (CPF_Parm)
// struct FUniqueNetId            ServerID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ServerIP                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::TriggerLobbyJoinGameDelegates(int LobbyIndex, const struct FString& ServerIP, struct FUniqueNetId* ServerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates");

	struct
	{
		int                            LobbyIndex;
		struct FUniqueNetId            ServerID;
		struct FString                 ServerIP;
	} params;
	params.LobbyIndex = LobbyIndex;
	params.ServerIP = ServerIP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerID != nullptr)
		*ServerID = params.ServerID;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FUniqueNetId            ServerID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ServerIP                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyJoinGame(const struct FString& ServerIP, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueNetId* ServerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame");

	struct
	{
		struct FActiveLobbyInfo        LobbyInfo;
		struct FUniqueNetId            ServerID;
		struct FString                 ServerIP;
	} params;
	params.ServerIP = ServerIP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyInfo != nullptr)
		*LobbyInfo = params.LobbyInfo;
	if (ServerID != nullptr)
		*ServerID = params.ServerID;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate");

	struct
	{
		struct FScriptDelegate         LobbyReceiveBinaryDataDelegate;
	} params;
	params.LobbyReceiveBinaryDataDelegate = LobbyReceiveBinaryDataDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate");

	struct
	{
		struct FScriptDelegate         LobbyReceiveBinaryDataDelegate;
	} params;
	params.LobbyReceiveBinaryDataDelegate = LobbyReceiveBinaryDataDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            LobbyIndex                     (CPF_Parm)
// int                            MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceImpl::TriggerLobbyReceiveBinaryDataDelegates(int LobbyIndex, int MemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates");

	struct
	{
		int                            LobbyIndex;
		int                            MemberIndex;
	} params;
	params.LobbyIndex = LobbyIndex;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            MemberIndex                    (CPF_Parm)
// TArray<unsigned char>          Data                           (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyReceiveBinaryData(int MemberIndex, struct FActiveLobbyInfo* LobbyInfo, TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData");

	struct
	{
		struct FActiveLobbyInfo        LobbyInfo;
		int                            MemberIndex;
		TArray<unsigned char>          Data;
	} params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyInfo != nullptr)
		*LobbyInfo = params.LobbyInfo;
	if (Data != nullptr)
		*Data = params.Data;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// TArray<unsigned char>          Data                           (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::SendLobbyBinaryData(struct FUniqueLobbyId* LobbyId, TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		TArray<unsigned char>          Data;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate");

	struct
	{
		struct FScriptDelegate         LobbyReceiveMessageDelegate;
	} params;
	params.LobbyReceiveMessageDelegate = LobbyReceiveMessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate");

	struct
	{
		struct FScriptDelegate         LobbyReceiveMessageDelegate;
	} params;
	params.LobbyReceiveMessageDelegate = LobbyReceiveMessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            LobbyIndex                     (CPF_Parm)
// int                            MemberIndex                    (CPF_Parm)
// struct FString                 Type                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::TriggerLobbyReceiveMessageDelegates(int LobbyIndex, int MemberIndex, const struct FString& Type, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates");

	struct
	{
		int                            LobbyIndex;
		int                            MemberIndex;
		struct FString                 Type;
		struct FString                 Message;
	} params;
	params.LobbyIndex = LobbyIndex;
	params.MemberIndex = MemberIndex;
	params.Type = Type;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            MemberIndex                    (CPF_Parm)
// struct FString                 Type                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyReceiveMessage(int MemberIndex, const struct FString& Type, const struct FString& Message, struct FActiveLobbyInfo* LobbyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage");

	struct
	{
		struct FActiveLobbyInfo        LobbyInfo;
		int                            MemberIndex;
		struct FString                 Type;
		struct FString                 Message;
	} params;
	params.MemberIndex = MemberIndex;
	params.Type = Type;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyInfo != nullptr)
		*LobbyInfo = params.LobbyInfo;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Message                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::SendLobbyMessage(const struct FString& Message, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FString                 Message;
		bool                           ReturnValue;
	} params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate");

	struct
	{
		struct FScriptDelegate         LobbyMemberStatusUpdateDelegate;
	} params;
	params.LobbyMemberStatusUpdateDelegate = LobbyMemberStatusUpdateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate");

	struct
	{
		struct FScriptDelegate         LobbyMemberStatusUpdateDelegate;
	} params;
	params.LobbyMemberStatusUpdateDelegate = LobbyMemberStatusUpdateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            LobbyIndex                     (CPF_Parm)
// int                            MemberIndex                    (CPF_Parm)
// int                            InstigatorIndex                (CPF_Parm)
// struct FString                 Status                         (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::TriggerLobbyMemberStatusUpdateDelegates(int LobbyIndex, int MemberIndex, int InstigatorIndex, const struct FString& Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates");

	struct
	{
		int                            LobbyIndex;
		int                            MemberIndex;
		int                            InstigatorIndex;
		struct FString                 Status;
	} params;
	params.LobbyIndex = LobbyIndex;
	params.MemberIndex = MemberIndex;
	params.InstigatorIndex = InstigatorIndex;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            MemberIndex                    (CPF_Parm)
// int                            InstigatorIndex                (CPF_Parm)
// struct FString                 Status                         (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyMemberStatusUpdate(int MemberIndex, int InstigatorIndex, const struct FString& Status, struct FActiveLobbyInfo* LobbyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate");

	struct
	{
		struct FActiveLobbyInfo        LobbyInfo;
		int                            MemberIndex;
		int                            InstigatorIndex;
		struct FString                 Status;
	} params;
	params.MemberIndex = MemberIndex;
	params.InstigatorIndex = InstigatorIndex;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyInfo != nullptr)
		*LobbyInfo = params.LobbyInfo;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate");

	struct
	{
		struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate;
	} params;
	params.LobbyMemberSettingsUpdateDelegate = LobbyMemberSettingsUpdateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate");

	struct
	{
		struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate;
	} params;
	params.LobbyMemberSettingsUpdateDelegate = LobbyMemberSettingsUpdateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            LobbyIndex                     (CPF_Parm)
// int                            MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceImpl::TriggerLobbyMemberSettingsUpdateDelegates(int LobbyIndex, int MemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates");

	struct
	{
		int                            LobbyIndex;
		int                            MemberIndex;
	} params;
	params.LobbyIndex = LobbyIndex;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceImpl::OnLobbyMemberSettingsUpdate(int MemberIndex, struct FActiveLobbyInfo* LobbyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate");

	struct
	{
		struct FActiveLobbyInfo        LobbyInfo;
		int                            MemberIndex;
	} params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyInfo != nullptr)
		*LobbyInfo = params.LobbyInfo;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate");

	struct
	{
		struct FScriptDelegate         LobbySettingsUpdateDelegate;
	} params;
	params.LobbySettingsUpdateDelegate = LobbySettingsUpdateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate");

	struct
	{
		struct FScriptDelegate         LobbySettingsUpdateDelegate;
	} params;
	params.LobbySettingsUpdateDelegate = LobbySettingsUpdateDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            LobbyIndex                     (CPF_Parm)

void UOnlineLobbyInterfaceImpl::TriggerLobbySettingsUpdateDelegates(int LobbyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates");

	struct
	{
		int                            LobbyIndex;
	} params;
	params.LobbyIndex = LobbyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbySettingsUpdate(struct FActiveLobbyInfo* LobbyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate");

	struct
	{
		struct FActiveLobbyInfo        LobbyInfo;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyInfo != nullptr)
		*LobbyInfo = params.LobbyInfo;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::SetLobbyUserSetting(const struct FString& Key, const struct FString& Value, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		struct FString                 Key;
		struct FString                 Value;
		bool                           ReturnValue;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::LeaveLobby(struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate");

	struct
	{
		struct FScriptDelegate         JoinLobbyCompleteDelegate;
	} params;
	params.JoinLobbyCompleteDelegate = JoinLobbyCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate");

	struct
	{
		struct FScriptDelegate         JoinLobbyCompleteDelegate;
	} params;
	params.JoinLobbyCompleteDelegate = JoinLobbyCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyUID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::TriggerJoinLobbyCompleteDelegates(bool bWasSuccessful, const struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates");

	struct
	{
		bool                           bWasSuccessful;
		struct FActiveLobbyInfo        LobbyInfo;
		struct FUniqueLobbyId          LobbyUID;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyInfo != nullptr)
		*LobbyInfo = params.LobbyInfo;
	if (LobbyUID != nullptr)
		*LobbyUID = params.LobbyUID;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyUID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnJoinLobbyComplete(bool bWasSuccessful, const struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FActiveLobbyInfo        LobbyInfo;
		struct FUniqueLobbyId          LobbyUID;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyInfo != nullptr)
		*LobbyInfo = params.LobbyInfo;
	if (LobbyUID != nullptr)
		*LobbyUID = params.LobbyUID;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            LocalPlayerNum                 (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby");

	struct
	{
		int                            LocalPlayerNum;
		struct FUniqueLobbyId          LobbyId;
		bool                           ReturnValue;
	} params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate");

	struct
	{
		struct FScriptDelegate         FindLobbiesCompleteDelegate;
	} params;
	params.FindLobbiesCompleteDelegate = FindLobbiesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate");

	struct
	{
		struct FScriptDelegate         FindLobbiesCompleteDelegate;
	} params;
	params.FindLobbiesCompleteDelegate = FindLobbiesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineLobbyInterfaceImpl::TriggerFindLobbiesCompleteDelegates(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates");

	struct
	{
		bool                           bWasSuccessful;
	} params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// TArray<struct FBasicLobbyInfo> LobbyList                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnFindLobbiesComplete(bool bWasSuccessful, TArray<struct FBasicLobbyInfo>* LobbyList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete");

	struct
	{
		bool                           bWasSuccessful;
		TArray<struct FBasicLobbyInfo> LobbyList;
	} params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyList != nullptr)
		*LobbyList = params.LobbyList;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::UpdateFoundLobbies(const struct FUniqueLobbyId& LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies");

	struct
	{
		struct FUniqueLobbyId          LobbyId;
		bool                           ReturnValue;
	} params;
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            MaxResults                     (CPF_OptionalParm, CPF_Parm)
// TArray<struct FLobbyFilter>    Filters                        (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FLobbySortFilter> SortFilters                    (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// int                            MinSlots                       (CPF_OptionalParm, CPF_Parm)
// TEnumAsByte<enum class ELobbyDistance> Distance                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, TEnumAsByte<enum class ELobbyDistance> Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies");

	struct
	{
		int                            MaxResults;
		TArray<struct FLobbyFilter>    Filters;
		TArray<struct FLobbySortFilter> SortFilters;
		int                            MinSlots;
		TEnumAsByte<enum class ELobbyDistance> Distance;
		bool                           ReturnValue;
	} params;
	params.MaxResults = MaxResults;
	params.Filters = Filters;
	params.SortFilters = SortFilters;
	params.MinSlots = MinSlots;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate");

	struct
	{
		struct FScriptDelegate         CreateLobbyCompleteDelegate;
	} params;
	params.CreateLobbyCompleteDelegate = CreateLobbyCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate");

	struct
	{
		struct FScriptDelegate         CreateLobbyCompleteDelegate;
	} params;
	params.CreateLobbyCompleteDelegate = CreateLobbyCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnCreateLobbyComplete(bool bWasSuccessful, const struct FString& Error, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FUniqueLobbyId          LobbyId;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
}


// Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            LocalPlayerNum                 (CPF_Parm)
// int                            MaxPlayers                     (CPF_Parm)
// TEnumAsByte<enum class ELobbyVisibility> Type                           (CPF_OptionalParm, CPF_Parm)
// TArray<struct FLobbyMetaData>  InitialSettings                (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceImpl::CreateLobby(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<enum class ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby");

	struct
	{
		int                            LocalPlayerNum;
		int                            MaxPlayers;
		TEnumAsByte<enum class ELobbyVisibility> Type;
		TArray<struct FLobbyMetaData>  InitialSettings;
		bool                           ReturnValue;
	} params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.MaxPlayers = MaxPlayers;
	params.Type = Type;
	params.InitialSettings = InitialSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Data                           (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlinePlaylistManager::ParseDataCenterId(TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ParseDataCenterId");

	struct
	{
		TArray<unsigned char>          Data;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadDataCenterIdComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// (FUNC_Defined, FUNC_Public)

void UOnlinePlaylistManager::ReadDataCenterId()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ReadDataCenterId");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            NumPlayers                     (CPF_Parm)

void UOnlinePlaylistManager::SendPlaylistPopulationUpdate(int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate");

	struct
	{
		int                            NumPlayers;
	} params;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// int                            WorldwideTotal                 (CPF_Parm, CPF_OutParm)
// int                            RegionTotal                    (CPF_Parm, CPF_OutParm)

void UOnlinePlaylistManager::GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist");

	struct
	{
		int                            PlaylistId;
		int                            WorldwideTotal;
		int                            RegionTotal;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldwideTotal != nullptr)
		*WorldwideTotal = params.WorldwideTotal;
	if (RegionTotal != nullptr)
		*RegionTotal = params.RegionTotal;
}


// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Data                           (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlinePlaylistManager::ParsePlaylistPopulationData(TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData");

	struct
	{
		TArray<unsigned char>          Data;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// (FUNC_Public, FUNC_Delegate)

void UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadPlaylistPopulationComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// (FUNC_Defined, FUNC_Public)

void UOnlinePlaylistManager::ReadPlaylistPopulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.Reset
// (FUNC_Defined, FUNC_Public)

void UOnlinePlaylistManager::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.Reset");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// TArray<int>                    ContentIds                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlinePlaylistManager::GetContentIdsFromPlaylist(int PlaylistId, TArray<int>* ContentIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist");

	struct
	{
		int                            PlaylistId;
		TArray<int>                    ContentIds;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentIds != nullptr)
		*ContentIds = params.ContentIds;
}


// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// class UClass*                  SourceInventory                (CPF_Parm)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UClass* UOnlinePlaylistManager::GetInventorySwapFromPlaylist(int PlaylistId, class UClass* SourceInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist");

	struct
	{
		int                            PlaylistId;
		class UClass*                  SourceInventory;
		class UClass*                  ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;
	params.SourceInventory = SourceInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// TArray<struct FName>           MapCycle                       (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlinePlaylistManager::GetMapCycleFromPlaylist(int PlaylistId, TArray<struct FName>* MapCycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist");

	struct
	{
		int                            PlaylistId;
		TArray<struct FName>           MapCycle;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapCycle != nullptr)
		*MapCycle = params.MapCycle;
}


// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlinePlaylistManager::GetUrlFromPlaylist(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist");

	struct
	{
		int                            PlaylistId;
		struct FString                 ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetMatchType
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UOnlinePlaylistManager::GetMatchType(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetMatchType");

	struct
	{
		int                            PlaylistId;
		int                            ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlinePlaylistManager::IsPlaylistArbitrated(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated");

	struct
	{
		int                            PlaylistId;
		bool                           ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// int                            LoadBalanceId                  (CPF_Parm, CPF_OutParm)

void UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist");

	struct
	{
		int                            PlaylistId;
		int                            LoadBalanceId;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadBalanceId != nullptr)
		*LoadBalanceId = params.LoadBalanceId;
}


// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// int                            TeamSize                       (CPF_Parm, CPF_OutParm)
// int                            TeamCount                      (CPF_Parm, CPF_OutParm)
// int                            MaxPartySize                   (CPF_Parm, CPF_OutParm)

void UOnlinePlaylistManager::GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist");

	struct
	{
		int                            PlaylistId;
		int                            TeamSize;
		int                            TeamCount;
		int                            MaxPartySize;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamSize != nullptr)
		*TeamSize = params.TeamSize;
	if (TeamCount != nullptr)
		*TeamCount = params.TeamCount;
	if (MaxPartySize != nullptr)
		*MaxPartySize = params.MaxPartySize;
}


// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlinePlaylistManager::PlaylistSupportsDedicatedServers(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers");

	struct
	{
		int                            PlaylistId;
		bool                           ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlinePlaylistManager::HasAnyGameSettings(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings");

	struct
	{
		int                            PlaylistId;
		bool                           ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// int                            GameSettingsId                 (CPF_Parm)
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UOnlineGameSettings* UOnlinePlaylistManager::GetGameSettings(int PlaylistId, int GameSettingsId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetGameSettings");

	struct
	{
		int                            PlaylistId;
		int                            GameSettingsId;
		class UOnlineGameSettings*     ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;
	params.GameSettingsId = GameSettingsId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// (FUNC_Native, FUNC_Public)

void UOnlinePlaylistManager::FinalizePlaylistObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Filename;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlinePlaylistManager::ShouldRefreshPlaylists()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// (FUNC_Native, FUNC_Public)

void UOnlinePlaylistManager::DetermineFilesToDownload()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// (FUNC_Defined, FUNC_Public)

void UOnlinePlaylistManager::DownloadPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.DownloadPlaylist");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlinePlaylistManager::OnReadPlaylistComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete");

	struct
	{
		bool                           bWasSuccessful;
	} params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceImpl::ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate");

	struct
	{
		struct FScriptDelegate         ResponseMicroTxnDelegate;
	} params;
	params.ResponseMicroTxnDelegate = ResponseMicroTxnDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceImpl::AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate");

	struct
	{
		struct FScriptDelegate         ResponseMicroTxnDelegate;
	} params;
	params.ResponseMicroTxnDelegate = ResponseMicroTxnDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bAuthorized                    (CPF_Parm)

void UOnlinePurchaseInterfaceImpl::OnMicroTxnResponse(bool bAuthorized)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse");

	struct
	{
		bool                           bAuthorized;
	} params;
	params.bAuthorized = bAuthorized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_NeedCtorLink)
// int                            Price                          (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlinePurchaseInterfaceImpl::FormatCurrency(const struct FString& Currency, int Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency");

	struct
	{
		struct FString                 Currency;
		int                            Price;
		struct FString                 ReturnValue;
	} params;
	params.Currency = Currency;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// TArray<struct FName>           AppNames                       (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlinePurchaseInterfaceImpl::GetAppPriceInfo(const struct FScriptDelegate& Callback, struct FUniqueNetId* PlayerID, TArray<struct FName>* AppNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo");

	struct
	{
		struct FUniqueNetId            PlayerID;
		TArray<struct FName>           AppNames;
		struct FScriptDelegate         Callback;
		bool                           ReturnValue;
	} params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
	if (AppNames != nullptr)
		*AppNames = params.AppNames;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   AppName                        (CPF_Parm)
// struct FString                 Price                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DiscountPrice                  (CPF_Parm, CPF_NeedCtorLink)
// int                            DiscountPercentage             (CPF_Parm)

void UOnlinePurchaseInterfaceImpl::EventGetAppPriceInfoComplete(const struct FName& AppName, const struct FString& Price, const struct FString& DiscountPrice, int DiscountPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete");

	struct
	{
		struct FName                   AppName;
		struct FString                 Price;
		struct FString                 DiscountPrice;
		int                            DiscountPercentage;
	} params;
	params.AppName = AppName;
	params.Price = Price;
	params.DiscountPrice = DiscountPrice;
	params.DiscountPercentage = DiscountPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeacon.OnDestroyComplete
// (FUNC_Public, FUNC_Delegate)

void UPartyBeacon::OnDestroyComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeacon.OnDestroyComplete");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeacon.DestroyBeacon
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UPartyBeacon::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeacon.DestroyBeacon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.DestroyBeacon
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UPartyBeaconClient::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.DestroyBeacon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.CancelReservation
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            CancellingPartyLeader          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UPartyBeaconClient::CancelReservation(const struct FUniqueNetId& CancellingPartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.CancelReservation");

	struct
	{
		struct FUniqueNetId            CancellingPartyLeader;
		bool                           ReturnValue;
	} params;
	params.CancellingPartyLeader = CancellingPartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            RequestingPartyLeader          (CPF_Parm)
// TArray<struct FPlayerReservation> PlayersToAdd                   (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UPartyBeaconClient::RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.RequestReservationUpdate");

	struct
	{
		struct FOnlineGameSearchResult DesiredHost;
		struct FUniqueNetId            RequestingPartyLeader;
		TArray<struct FPlayerReservation> PlayersToAdd;
		bool                           ReturnValue;
	} params;
	params.RequestingPartyLeader = RequestingPartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (PlayersToAdd != nullptr)
		*PlayersToAdd = params.PlayersToAdd;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.RequestReservation
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            RequestingPartyLeader          (CPF_Parm)
// TArray<struct FPlayerReservation> Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UPartyBeaconClient::RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.RequestReservation");

	struct
	{
		struct FOnlineGameSearchResult DesiredHost;
		struct FUniqueNetId            RequestingPartyLeader;
		TArray<struct FPlayerReservation> Players;
		bool                           ReturnValue;
	} params;
	params.RequestingPartyLeader = RequestingPartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// (FUNC_Public, FUNC_Delegate)

void UPartyBeaconClient::OnHostHasCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnHostHasCancelled");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnHostIsReady
// (FUNC_Public, FUNC_Delegate)

void UPartyBeaconClient::OnHostIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnHostIsReady");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconClient::OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnTravelRequestReceived");

	struct
	{
		struct FName                   SessionName;
		class UClass*                  SearchClass;
		unsigned char                  PlatformSpecificInfo;
	} params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            ReservationRemaining           (CPF_Parm)

void UPartyBeaconClient::OnReservationCountUpdated(int ReservationRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnReservationCountUpdated");

	struct
	{
		int                            ReservationRemaining;
	} params;
	params.ReservationRemaining = ReservationRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// TEnumAsByte<enum class EPartyReservationResult> ReservationResult              (CPF_Parm)

void UPartyBeaconClient::OnReservationRequestComplete(TEnumAsByte<enum class EPartyReservationResult> ReservationResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnReservationRequestComplete");

	struct
	{
		TEnumAsByte<enum class EPartyReservationResult> ReservationResult;
	} params;
	params.ReservationResult = ReservationResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UPartyBeaconHost::GetMaxAvailableTeamSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FUniqueNetId>    PartyLeaders                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UPartyBeaconHost::GetPartyLeaders(TArray<struct FUniqueNetId>* PartyLeaders)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.GetPartyLeaders");

	struct
	{
		TArray<struct FUniqueNetId>    PartyLeaders;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyLeaders != nullptr)
		*PartyLeaders = params.PartyLeaders;
}


// Function IpDrv.PartyBeaconHost.GetPlayers
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UPartyBeaconHost::GetPlayers(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.GetPlayers");

	struct
	{
		TArray<struct FUniqueNetId>    Players;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UOnlineGameSearch*       Search                         (CPF_Parm)

void UPartyBeaconHost::AppendReservationSkillsToSearch(class UOnlineGameSearch* Search)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch");

	struct
	{
		class UOnlineGameSearch*       Search;
	} params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.UnregisterParty
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm)

void UPartyBeaconHost::UnregisterParty(const struct FUniqueNetId& PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.UnregisterParty");

	struct
	{
		struct FUniqueNetId            PartyLeader;
	} params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasDefaults)

void UPartyBeaconHost::UnregisterPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.UnregisterPartyMembers");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasDefaults)

void UPartyBeaconHost::RegisterPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.RegisterPartyMembers");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.AreReservationsFull
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UPartyBeaconHost::AreReservationsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.AreReservationsFull");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// (FUNC_Native, FUNC_Public)

void UPartyBeaconHost::TellClientsHostHasCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// (FUNC_Native, FUNC_Public)

void UPartyBeaconHost::TellClientsHostIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.TellClientsHostIsReady");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconHost::TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.TellClientsToTravel");

	struct
	{
		struct FName                   SessionName;
		class UClass*                  SearchClass;
		unsigned char                  PlatformSpecificInfo;
	} params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.DestroyBeacon
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UPartyBeaconHost::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.DestroyBeacon");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm)

void UPartyBeaconHost::OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.OnClientCancellationReceived");

	struct
	{
		struct FUniqueNetId            PartyLeader;
	} params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnReservationsFull
// (FUNC_Public, FUNC_Delegate)

void UPartyBeaconHost::OnReservationsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.OnReservationsFull");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnReservationChange
// (FUNC_Public, FUNC_Delegate)

void UPartyBeaconHost::OnReservationChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.OnReservationChange");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bMaintainParty                 (CPF_Parm)

void UPartyBeaconHost::HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.HandlePlayerLogout");

	struct
	{
		struct FUniqueNetId            PlayerID;
		bool                           bMaintainParty;
	} params;
	params.PlayerID = PlayerID;
	params.bMaintainParty = bMaintainParty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.GetExistingReservation
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (CPF_Const, CPF_Parm, CPF_OutParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UPartyBeaconHost::GetExistingReservation(struct FUniqueNetId* PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.GetExistingReservation");

	struct
	{
		struct FUniqueNetId            PartyLeader;
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyLeader != nullptr)
		*PartyLeader = params.PartyLeader;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm)
// TArray<struct FPlayerReservation> PlayerMembers                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EPartyReservationResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<enum class EPartyReservationResult> UPartyBeaconHost::UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry");

	struct
	{
		struct FUniqueNetId            PartyLeader;
		TArray<struct FPlayerReservation> PlayerMembers;
		TEnumAsByte<enum class EPartyReservationResult> ReturnValue;
	} params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerMembers != nullptr)
		*PlayerMembers = params.PlayerMembers;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm)
// TArray<struct FPlayerReservation> PlayerMembers                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            TeamNum                        (CPF_Parm)
// bool                           bIsHost                        (CPF_Parm)
// TEnumAsByte<enum class EPartyReservationResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<enum class EPartyReservationResult> UPartyBeaconHost::AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int TeamNum, bool bIsHost, TArray<struct FPlayerReservation>* PlayerMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.AddPartyReservationEntry");

	struct
	{
		struct FUniqueNetId            PartyLeader;
		TArray<struct FPlayerReservation> PlayerMembers;
		int                            TeamNum;
		bool                           bIsHost;
		TEnumAsByte<enum class EPartyReservationResult> ReturnValue;
	} params;
	params.PartyLeader = PartyLeader;
	params.TeamNum = TeamNum;
	params.bIsHost = bIsHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerMembers != nullptr)
		*PlayerMembers = params.PlayerMembers;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.InitHostBeacon
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            InNumTeams                     (CPF_Parm)
// int                            InNumPlayersPerTeam            (CPF_Parm)
// int                            InNumReservations              (CPF_Parm)
// struct FName                   InSessionName                  (CPF_Parm)
// int                            InForceTeamNum                 (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UPartyBeaconHost::InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, const struct FName& InSessionName, int InForceTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.InitHostBeacon");

	struct
	{
		int                            InNumTeams;
		int                            InNumPlayersPerTeam;
		int                            InNumReservations;
		struct FName                   InSessionName;
		int                            InForceTeamNum;
		bool                           ReturnValue;
	} params;
	params.InNumTeams = InNumTeams;
	params.InNumPlayersPerTeam = InNumPlayersPerTeam;
	params.InNumReservations = InNumReservations;
	params.InSessionName = InSessionName;
	params.InForceTeamNum = InForceTeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bPause                         (CPF_Parm)

void UPartyBeaconHost::PauseReservationRequests(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.PauseReservationRequests");

	struct
	{
		bool                           bPause;
	} params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetHexDigit
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 D                              (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UWebRequest::GetHexDigit(const struct FString& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetHexDigit");

	struct
	{
		struct FString                 D;
		int                            ReturnValue;
	} params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.DecodeFormData
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Data                           (CPF_Parm, CPF_NeedCtorLink)

void UWebRequest::DecodeFormData(const struct FString& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.DecodeFormData");

	struct
	{
		struct FString                 Data;
	} params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.ProcessHeaderString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)

void UWebRequest::ProcessHeaderString(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.ProcessHeaderString");

	struct
	{
		struct FString                 S;
	} params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.Dump
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UWebRequest::Dump()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.Dump");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetVariables
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         varNames                       (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UWebRequest::GetVariables(TArray<struct FString>* varNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetVariables");

	struct
	{
		TArray<struct FString>         varNames;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (varNames != nullptr)
		*varNames = params.varNames;
}


// Function IpDrv.WebRequest.GetVariableNumber
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 VariableName                   (CPF_Parm, CPF_NeedCtorLink)
// int                            Number                         (CPF_Parm)
// struct FString                 DefaultValue                   (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UWebRequest::GetVariableNumber(const struct FString& VariableName, int Number, const struct FString& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetVariableNumber");

	struct
	{
		struct FString                 VariableName;
		int                            Number;
		struct FString                 DefaultValue;
		struct FString                 ReturnValue;
	} params;
	params.VariableName = VariableName;
	params.Number = Number;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.GetVariableCount
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 VariableName                   (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UWebRequest::GetVariableCount(const struct FString& VariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetVariableCount");

	struct
	{
		struct FString                 VariableName;
		int                            ReturnValue;
	} params;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.GetVariable
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 VariableName                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DefaultValue                   (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UWebRequest::GetVariable(const struct FString& VariableName, const struct FString& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetVariable");

	struct
	{
		struct FString                 VariableName;
		struct FString                 DefaultValue;
		struct FString                 ReturnValue;
	} params;
	params.VariableName = VariableName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.AddVariable
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 VariableName                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void UWebRequest::AddVariable(const struct FString& VariableName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.AddVariable");

	struct
	{
		struct FString                 VariableName;
		struct FString                 Value;
	} params;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetHeaders
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         Headers                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UWebRequest::GetHeaders(TArray<struct FString>* Headers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetHeaders");

	struct
	{
		TArray<struct FString>         Headers;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Headers != nullptr)
		*Headers = params.Headers;
}


// Function IpDrv.WebRequest.GetHeader
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DefaultValue                   (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UWebRequest::GetHeader(const struct FString& HeaderName, const struct FString& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetHeader");

	struct
	{
		struct FString                 HeaderName;
		struct FString                 DefaultValue;
		struct FString                 ReturnValue;
	} params;
	params.HeaderName = HeaderName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.AddHeader
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void UWebRequest::AddHeader(const struct FString& HeaderName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.AddHeader");

	struct
	{
		struct FString                 HeaderName;
		struct FString                 Value;
	} params;
	params.HeaderName = HeaderName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.EncodeBase64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Decoded                        (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UWebRequest::STATIC_EncodeBase64(const struct FString& Decoded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.EncodeBase64");

	struct
	{
		struct FString                 Decoded;
		struct FString                 ReturnValue;
	} params;
	params.Decoded = Decoded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.DecodeBase64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Encoded                        (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UWebRequest::STATIC_DecodeBase64(const struct FString& Encoded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.DecodeBase64");

	struct
	{
		struct FString                 Encoded;
		struct FString                 ReturnValue;
	} params;
	params.Encoded = Encoded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SentResponse
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UWebResponse::SentResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SentResponse");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SentText
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UWebResponse::SentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SentText");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.Redirect
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_NeedCtorLink)

void UWebResponse::Redirect(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.Redirect");

	struct
	{
		struct FString                 URL;
	} params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendStandardHeaders
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 ContentType                    (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           bCache                         (CPF_OptionalParm, CPF_Parm)

void UWebResponse::SendStandardHeaders(const struct FString& ContentType, bool bCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendStandardHeaders");

	struct
	{
		struct FString                 ContentType;
		bool                           bCache;
	} params;
	params.ContentType = ContentType;
	params.bCache = bCache;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HTTPError
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            ErrorNum                       (CPF_Parm)
// struct FString                 Data                           (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)

void UWebResponse::HTTPError(int ErrorNum, const struct FString& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.HTTPError");

	struct
	{
		int                            ErrorNum;
		struct FString                 Data;
	} params;
	params.ErrorNum = ErrorNum;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendHeaders
// (FUNC_Defined, FUNC_Public)

void UWebResponse::SendHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendHeaders");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.AddHeader
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Header                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           bReplace                       (CPF_OptionalParm, CPF_Parm)

void UWebResponse::AddHeader(const struct FString& Header, bool bReplace)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.AddHeader");

	struct
	{
		struct FString                 Header;
		bool                           bReplace;
	} params;
	params.Header = Header;
	params.bReplace = bReplace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HTTPHeader
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Header                         (CPF_Parm, CPF_NeedCtorLink)

void UWebResponse::HTTPHeader(const struct FString& Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.HTTPHeader");

	struct
	{
		struct FString                 Header;
	} params;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HttpResponse
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Header                         (CPF_Parm, CPF_NeedCtorLink)

void UWebResponse::HttpResponse(const struct FString& Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.HttpResponse");

	struct
	{
		struct FString                 Header;
	} params;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.FailAuthentication
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Realm                          (CPF_Parm, CPF_NeedCtorLink)

void UWebResponse::FailAuthentication(const struct FString& Realm)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.FailAuthentication");

	struct
	{
		struct FString                 Realm;
	} params;
	params.Realm = Realm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendCachedFile
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ContentType                    (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UWebResponse::SendCachedFile(const struct FString& Filename, const struct FString& ContentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendCachedFile");

	struct
	{
		struct FString                 Filename;
		struct FString                 ContentType;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SendBinary
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            Count                          (CPF_Parm)
// unsigned char                  B                              (CPF_Parm)

void UWebResponse::SendBinary(int Count, unsigned char B)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendBinary");

	struct
	{
		int                            Count;
		unsigned char                  B;
	} params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendText
// (FUNC_Defined, FUNC_Event, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Text                           (CPF_Parm, CPF_NeedCtorLink)
// bool                           bNoCRLF                        (CPF_OptionalParm, CPF_Parm)

void UWebResponse::SendText(const struct FString& Text, bool bNoCRLF)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendText");

	struct
	{
		struct FString                 Text;
		bool                           bNoCRLF;
	} params;
	params.Text = Text;
	params.bNoCRLF = bNoCRLF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.Dump
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UWebResponse::Dump()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.Dump");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.GetHTTPExpiration
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            OffsetSeconds                  (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UWebResponse::GetHTTPExpiration(int OffsetSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.GetHTTPExpiration");

	struct
	{
		int                            OffsetSeconds;
		struct FString                 ReturnValue;
	} params;
	params.OffsetSeconds = OffsetSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.LoadParsedUHTM
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UWebResponse::LoadParsedUHTM(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.LoadParsedUHTM");

	struct
	{
		struct FString                 Filename;
		struct FString                 ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.IncludeBinaryFile
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UWebResponse::IncludeBinaryFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.IncludeBinaryFile");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.IncludeUHTM
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UWebResponse::IncludeUHTM(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.IncludeUHTM");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.ClearSubst
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UWebResponse::ClearSubst()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.ClearSubst");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.Subst
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Variable                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// bool                           bClear                         (CPF_OptionalParm, CPF_Parm)

void UWebResponse::Subst(const struct FString& Variable, const struct FString& Value, bool bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.Subst");

	struct
	{
		struct FString                 Variable;
		struct FString                 Value;
		bool                           bClear;
	} params;
	params.Variable = Variable;
	params.Value = Value;
	params.bClear = bClear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.FileExists
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UWebResponse::FileExists(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.FileExists");

	struct
	{
		struct FString                 Filename;
		bool                           ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            PlaylistId                     (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UUIDataStore_OnlinePlaylists::GetMatchTypeForPlaylistId(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId");

	struct
	{
		int                            PlaylistId;
		int                            ReturnValue;
	} params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// (FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   ProviderTag                    (CPF_Parm)
// int                            PlaylistId                     (CPF_Parm)
// int                            ProviderIndex                  (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
// class UOnlinePlaylistProvider* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UOnlinePlaylistProvider* UUIDataStore_OnlinePlaylists::STATIC_GetOnlinePlaylistProvider(const struct FName& ProviderTag, int PlaylistId, int* ProviderIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider");

	struct
	{
		struct FName                   ProviderTag;
		int                            PlaylistId;
		int                            ProviderIndex;
		class UOnlinePlaylistProvider* ReturnValue;
	} params;
	params.ProviderTag = ProviderTag;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProviderIndex != nullptr)
		*ProviderIndex = params.ProviderIndex;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   ProviderTag                    (CPF_Parm)
// int                            ProviderIndex                  (CPF_Parm)
// class UUIResourceDataProvider* out_Provider                   (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UUIDataStore_OnlinePlaylists::GetPlaylistProvider(const struct FName& ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider");

	struct
	{
		struct FName                   ProviderTag;
		int                            ProviderIndex;
		class UUIResourceDataProvider* out_Provider;
		bool                           ReturnValue;
	} params;
	params.ProviderTag = ProviderTag;
	params.ProviderIndex = ProviderIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Provider != nullptr)
		*out_Provider = params.out_Provider;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   ProviderTag                    (CPF_Parm)
// TArray<class UUIResourceDataProvider*> out_Providers                  (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UUIDataStore_OnlinePlaylists::GetResourceProviders(const struct FName& ProviderTag, TArray<class UUIResourceDataProvider*>* out_Providers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders");

	struct
	{
		struct FName                   ProviderTag;
		TArray<class UUIResourceDataProvider*> out_Providers;
		bool                           ReturnValue;
	} params;
	params.ProviderTag = ProviderTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Providers != nullptr)
		*out_Providers = params.out_Providers;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UUIDataStore_OnlinePlaylists::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.Init");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.PostQuery
// (FUNC_Public)
// Parameters:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::PostQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.PostQuery");

	struct
	{
		class UWebRequest*             Request;
		class UWebResponse*            Response;
	} params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Query
// (FUNC_Public)
// Parameters:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.Query");

	struct
	{
		class UWebRequest*             Request;
		class UWebResponse*            Response;
	} params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.PreQuery
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UWebApplication::PreQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.PreQuery");

	struct
	{
		class UWebRequest*             Request;
		class UWebResponse*            Response;
		bool                           ReturnValue;
	} params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebApplication.CleanupApp
// (FUNC_Defined, FUNC_Public)

void UWebApplication::CleanupApp()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.CleanupApp");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Cleanup
// (FUNC_Final, FUNC_Public)

void UWebApplication::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.Cleanup");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Init
// (FUNC_Public)

void UWebApplication::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.Init");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.GetApplication
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 URI                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SubURI                         (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class UWebApplication*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UWebApplication* AWebServer::GetApplication(const struct FString& URI, struct FString* SubURI)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.GetApplication");

	struct
	{
		struct FString                 URI;
		struct FString                 SubURI;
		class UWebApplication*         ReturnValue;
	} params;
	params.URI = URI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubURI != nullptr)
		*SubURI = params.SubURI;

	return params.ReturnValue;
}


// Function IpDrv.WebServer.LostChild
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::LostChild(class AActor* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.LostChild");

	struct
	{
		class AActor*                  C;
	} params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.GainedChild
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::GainedChild(class AActor* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.GainedChild");

	struct
	{
		class AActor*                  C;
	} params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.Destroyed
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AWebServer::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.Destroyed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.PostBeginPlay
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)

void AWebServer::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.HelloWeb.Query
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UHelloWeb::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HelloWeb.Query");

	struct
	{
		class UWebRequest*             Request;
		class UWebResponse*            Response;
	} params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.HelloWeb.Init
// (FUNC_Defined, FUNC_Public)

void UHelloWeb::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HelloWeb.Init");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.ImageServer.Query
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UImageServer::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.ImageServer.Query");

	struct
	{
		class UWebRequest*             Request;
		class UWebResponse*            Response;
	} params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServiceConfig.GetUserAuthTicket
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UMcpServiceConfig::GetUserAuthTicket(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceConfig.GetUserAuthTicket");

	struct
	{
		struct FString                 McpId;
		struct FString                 ReturnValue;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// int                            UserReward                     (CPF_Parm)

void UMcpClashMobBase::UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.UpdateChallengeUserReward");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		int                            UserReward;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.UserReward = UserReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserRewardComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// bool                           bDidComplete                   (CPF_Parm)
// int                            GoalProgress                   (CPF_Parm)

void UMcpClashMobBase::UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		bool                           bDidComplete;
		int                            GoalProgress;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.bDidComplete = bDidComplete;
	params.GoalProgress = GoalProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserProgressComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.GetChallengeUserStatus");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeUserStatus != nullptr)
		*OutChallengeUserStatus = params.OutChallengeUserStatus;
}


// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         UserIdsToRead                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobBase::QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		TArray<struct FString>         UserIdsToRead;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserIdsToRead != nullptr)
		*UserIdsToRead = params.UserIdsToRead;
}


// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.QueryChallengeUserStatus");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeUserStatusComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.AcceptChallenge
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.AcceptChallenge");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::OnAcceptChallengeComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.ClearCachedChallengeFile");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          OutFileContents                (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.GetChallengeFileContents");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
		TArray<unsigned char>          OutFileContents;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFileContents != nullptr)
		*OutFileContents = params.OutFileContents;
}


// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.DownloadChallengeFile");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.GetChallengeFileList
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.GetChallengeFileList");

	struct
	{
		struct FString                 UniqueChallengeId;
		TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeFiles != nullptr)
		*OutChallengeFiles = params.OutChallengeFiles;
}


// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::OnDownloadChallengeFileComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& DLName, const struct FString& Filename, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
		struct FString                 Filename;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;
	params.Filename = Filename;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.GetChallengeList
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.GetChallengeList");

	struct
	{
		TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeEvents != nullptr)
		*OutChallengeEvents = params.OutChallengeEvents;
}


// Function IpDrv.McpClashMobBase.QueryChallengeList
// (FUNC_Public)

void UMcpClashMobBase::QueryChallengeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.QueryChallengeList");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeListComplete(bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.CreateInstance
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UMcpClashMobBase*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMcpClashMobBase* UMcpClashMobBase::STATIC_CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.CreateInstance");

	struct
	{
		class UMcpClashMobBase*        ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UMcpClashMobFileDownload::GetUrlForFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobFileDownload.GetUrlForFile");

	struct
	{
		struct FString                 Filename;
		struct FString                 ReturnValue;
	} params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// int                            UserReward                     (CPF_Parm)

void UMcpClashMobManager::UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.UpdateChallengeUserReward");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		int                            UserReward;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.UserReward = UserReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// bool                           bDidComplete                   (CPF_Parm)
// int                            GoalProgress                   (CPF_Parm)

void UMcpClashMobManager::UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		bool                           bDidComplete;
		int                            GoalProgress;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.bDidComplete = bDidComplete;
	params.GoalProgress = GoalProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.GetChallengeUserStatus");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeUserStatus != nullptr)
		*OutChallengeUserStatus = params.OutChallengeUserStatus;
}


// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         UserIdsToRead                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobManager::QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
		TArray<struct FString>         UserIdsToRead;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserIdsToRead != nullptr)
		*UserIdsToRead = params.UserIdsToRead;
}


// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobManager::QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.QueryChallengeUserStatus");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.AcceptChallenge
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobManager::AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.AcceptChallenge");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 UniqueUserId;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobManager::DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobManager::ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.ClearCachedChallengeFile");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          OutFileContents                (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.GetChallengeFileContents");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
		TArray<unsigned char>          OutFileContents;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFileContents != nullptr)
		*OutFileContents = params.OutFileContents;
}


// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobManager::OnDownloadMcpFileComplete(bool bWasSuccessful, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 DLName;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobManager::OnLoadCachedFileComplete(bool bWasSuccessful, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 DLName;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm, CPF_NeedCtorLink)

void UMcpClashMobManager::DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.DownloadChallengeFile");

	struct
	{
		struct FString                 UniqueChallengeId;
		struct FString                 DLName;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.GetChallengeFileList
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueChallengeId              (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.GetChallengeFileList");

	struct
	{
		struct FString                 UniqueChallengeId;
		TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles;
	} params;
	params.UniqueChallengeId = UniqueChallengeId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeFiles != nullptr)
		*OutChallengeFiles = params.OutChallengeFiles;
}


// Function IpDrv.McpClashMobManager.GetChallengeList
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.GetChallengeList");

	struct
	{
		TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeEvents != nullptr)
		*OutChallengeEvents = params.OutChallengeEvents;
}


// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.QueryChallengeList
// (FUNC_Defined, FUNC_Public)

void UMcpClashMobManager::QueryChallengeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.QueryChallengeList");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.Init
// (FUNC_Defined, FUNC_Public)

void UMcpClashMobManager::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.Init");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnAcceptGroupInviteComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete");

	struct
	{
		struct FString                 GroupID;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bShouldAccept                  (CPF_Parm)

void UMcpGroupsBase::AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupID, bool bShouldAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.AcceptGroupInvite");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupID;
		bool                           bShouldAccept;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;
	params.bShouldAccept = bShouldAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.GetGroupInviteList
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpGroupList           InviteList                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupInviteList(const struct FString& UserId, struct FMcpGroupList* InviteList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.GetGroupInviteList");

	struct
	{
		struct FString                 UserId;
		struct FMcpGroupList           InviteList;
	} params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteList != nullptr)
		*InviteList = params.InviteList;
}


// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupInvitesComplete(bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.QueryGroupInvites
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroupInvites(const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.QueryGroupInvites");

	struct
	{
		struct FString                 UniqueUserId;
	} params;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 RequesterId                    (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnDeleteAllGroupsComplete(const struct FString& RequesterId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete");

	struct
	{
		struct FString                 RequesterId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.RequesterId = RequesterId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.DeleteAllGroups
// (FUNC_Public)
// Parameters:
// struct FString                 OwnerId                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::DeleteAllGroups(const struct FString& OwnerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.DeleteAllGroups");

	struct
	{
		struct FString                 OwnerId;
	} params;
	params.OwnerId = OwnerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnRemoveGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete");

	struct
	{
		struct FString                 GroupID;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 OwnerId                        (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         MemberIds                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpGroupsBase::RemoveGroupMembers(const struct FString& OwnerId, const struct FString& GroupID, TArray<struct FString>* MemberIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.RemoveGroupMembers");

	struct
	{
		struct FString                 OwnerId;
		struct FString                 GroupID;
		TArray<struct FString>         MemberIds;
	} params;
	params.OwnerId = OwnerId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberIds != nullptr)
		*MemberIds = params.MemberIds;
}


// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnAddGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete");

	struct
	{
		struct FString                 GroupID;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.AddGroupMembers
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 OwnerId                        (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         MemberIds                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           bRequiresAcceptance            (CPF_Parm)

void UMcpGroupsBase::AddGroupMembers(const struct FString& OwnerId, const struct FString& GroupID, bool bRequiresAcceptance, TArray<struct FString>* MemberIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.AddGroupMembers");

	struct
	{
		struct FString                 OwnerId;
		struct FString                 GroupID;
		TArray<struct FString>         MemberIds;
		bool                           bRequiresAcceptance;
	} params;
	params.OwnerId = OwnerId;
	params.GroupID = GroupID;
	params.bRequiresAcceptance = bRequiresAcceptance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberIds != nullptr)
		*MemberIds = params.MemberIds;
}


// Function IpDrv.McpGroupsBase.GetGroupMembers
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FMcpGroupMember> GroupMembers                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupMembers(const struct FString& GroupID, TArray<struct FMcpGroupMember>* GroupMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.GetGroupMembers");

	struct
	{
		struct FString                 GroupID;
		TArray<struct FMcpGroupMember> GroupMembers;
	} params;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupMembers != nullptr)
		*GroupMembers = params.GroupMembers;
}


// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete");

	struct
	{
		struct FString                 GroupID;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.QueryGroupMembers
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.QueryGroupMembers");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupID;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.GetGroupList
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpGroupList           GroupList                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.GetGroupList");

	struct
	{
		struct FString                 UserId;
		struct FMcpGroupList           GroupList;
	} params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupList != nullptr)
		*GroupList = params.GroupList;
}


// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupsComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnQueryGroupsComplete");

	struct
	{
		struct FString                 UserId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.UserId = UserId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.QueryGroups
// (FUNC_Public)
// Parameters:
// struct FString                 RequesterId                    (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroups(const struct FString& RequesterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.QueryGroups");

	struct
	{
		struct FString                 RequesterId;
	} params;
	params.RequesterId = RequesterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnDeleteGroupComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnDeleteGroupComplete");

	struct
	{
		struct FString                 GroupID;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.DeleteGroup
// (FUNC_Public)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.DeleteGroup");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupID;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FMcpGroup               Group                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::OnCreateGroupComplete(const struct FMcpGroup& Group, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnCreateGroupComplete");

	struct
	{
		struct FMcpGroup               Group;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.Group = Group;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.CreateGroup
// (FUNC_Public)
// Parameters:
// struct FString                 OwnerId                        (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupName                      (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsBase::CreateGroup(const struct FString& OwnerId, const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.CreateGroup");

	struct
	{
		struct FString                 OwnerId;
		struct FString                 GroupName;
	} params;
	params.OwnerId = OwnerId;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.CreateInstance
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UMcpGroupsBase*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMcpGroupsBase* UMcpGroupsBase::STATIC_CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.CreateInstance");

	struct
	{
		class UMcpGroupsBase*          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpGroupsManager.CacheGroupMember
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FString                 MemberId                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class EMcpGroupAcceptState> AcceptState                    (CPF_Parm)

void UMcpGroupsManager::CacheGroupMember(const struct FString& MemberId, const struct FString& GroupID, TEnumAsByte<enum class EMcpGroupAcceptState> AcceptState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.CacheGroupMember");

	struct
	{
		struct FString                 MemberId;
		struct FString                 GroupID;
		TEnumAsByte<enum class EMcpGroupAcceptState> AcceptState;
	} params;
	params.MemberId = MemberId;
	params.GroupID = GroupID;
	params.AcceptState = AcceptState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.CacheGroup
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FString                 RequesterId                    (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpGroup               Group                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsManager::CacheGroup(const struct FString& RequesterId, const struct FMcpGroup& Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.CacheGroup");

	struct
	{
		struct FString                 RequesterId;
		struct FMcpGroup               Group;
	} params;
	params.RequesterId = RequesterId;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// (FUNC_Defined, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bShouldAccept                  (CPF_Parm)

void UMcpGroupsManager::AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupID, bool bShouldAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.AcceptGroupInvite");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupID;
		bool                           bShouldAccept;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;
	params.bShouldAccept = bShouldAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.DeleteAllGroups
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsManager::DeleteAllGroups(const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.DeleteAllGroups");

	struct
	{
		struct FString                 UniqueUserId;
	} params;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         MemberIds                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpGroupsManager::RemoveGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID, TArray<struct FString>* MemberIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.RemoveGroupMembers");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupID;
		TArray<struct FString>         MemberIds;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberIds != nullptr)
		*MemberIds = params.MemberIds;
}


// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// (FUNC_Defined, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.AddGroupMembers
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         MemberIds                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           bRequiresAcceptance            (CPF_Parm)

void UMcpGroupsManager::AddGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID, bool bRequiresAcceptance, TArray<struct FString>* MemberIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.AddGroupMembers");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupID;
		TArray<struct FString>         MemberIds;
		bool                           bRequiresAcceptance;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;
	params.bRequiresAcceptance = bRequiresAcceptance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberIds != nullptr)
		*MemberIds = params.MemberIds;
}


// Function IpDrv.McpGroupsManager.GetGroupMembers
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FMcpGroupMember> GroupMembers                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpGroupsManager::GetGroupMembers(const struct FString& GroupID, TArray<struct FMcpGroupMember>* GroupMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.GetGroupMembers");

	struct
	{
		struct FString                 GroupID;
		TArray<struct FMcpGroupMember> GroupMembers;
	} params;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupMembers != nullptr)
		*GroupMembers = params.GroupMembers;
}


// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// (FUNC_Defined, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.QueryGroupMembers
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsManager::QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.QueryGroupMembers");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupID;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.GetGroupList
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpGroupList           GroupList                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpGroupsManager::GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.GetGroupList");

	struct
	{
		struct FString                 UserId;
		struct FMcpGroupList           GroupList;
	} params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupList != nullptr)
		*GroupList = params.GroupList;
}


// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// (FUNC_Defined, FUNC_Public, FUNC_Delegate, FUNC_HasDefaults)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.QueryGroups
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 RequesterId                    (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsManager::QueryGroups(const struct FString& RequesterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.QueryGroups");

	struct
	{
		struct FString                 RequesterId;
	} params;
	params.RequesterId = RequesterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.DeleteGroup
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupID                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsManager::DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.DeleteGroup");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupID;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UHttpRequestInterface*   CreateGroupRequest             (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete");

	struct
	{
		class UHttpRequestInterface*   CreateGroupRequest;
		class UHttpResponseInterface*  HttpResponse;
		bool                           bWasSuccessful;
	} params;
	params.CreateGroupRequest = CreateGroupRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.CreateGroup
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FString                 UniqueUserId                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GroupName                      (CPF_Parm, CPF_NeedCtorLink)

void UMcpGroupsManager::CreateGroup(const struct FString& UniqueUserId, const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.CreateGroup");

	struct
	{
		struct FString                 UniqueUserId;
		struct FString                 GroupName;
	} params;
	params.UniqueUserId = UniqueUserId;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingBase.GetIdMappings
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 ExternalType                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FMcpIdMapping>   IDMappings                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpIdMappingBase::GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.GetIdMappings");

	struct
	{
		struct FString                 ExternalType;
		TArray<struct FMcpIdMapping>   IDMappings;
	} params;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IDMappings != nullptr)
		*IDMappings = params.IDMappings;
}


// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 ExternalType                   (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpIdMappingBase::OnQueryMappingsComplete(const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete");

	struct
	{
		struct FString                 ExternalType;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.ExternalType = ExternalType;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingBase.QueryMappings
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         ExternalIds                    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 ExternalType                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpIdMappingBase::QueryMappings(const struct FString& ExternalType, TArray<struct FString>* ExternalIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.QueryMappings");

	struct
	{
		TArray<struct FString>         ExternalIds;
		struct FString                 ExternalType;
	} params;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExternalIds != nullptr)
		*ExternalIds = params.ExternalIds;
}


// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ExternalId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ExternalType                   (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpIdMappingBase::OnAddMappingComplete(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.OnAddMappingComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 ExternalId;
		struct FString                 ExternalType;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.ExternalId = ExternalId;
	params.ExternalType = ExternalType;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingBase.AddMapping
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ExternalId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ExternalType                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpIdMappingBase::AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.AddMapping");

	struct
	{
		struct FString                 McpId;
		struct FString                 ExternalId;
		struct FString                 ExternalType;
	} params;
	params.McpId = McpId;
	params.ExternalId = ExternalId;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingBase.CreateInstance
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UMcpIdMappingBase*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMcpIdMappingBase* UMcpIdMappingBase::STATIC_CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.CreateInstance");

	struct
	{
		class UMcpIdMappingBase*       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpIdMappingManager.GetIdMappings
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 ExternalType                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FMcpIdMapping>   IDMappings                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpIdMappingManager::GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.GetIdMappings");

	struct
	{
		struct FString                 ExternalType;
		TArray<struct FMcpIdMapping>   IDMappings;
	} params;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IDMappings != nullptr)
		*IDMappings = params.IDMappings;
}


// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpIdMappingManager::OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingManager.QueryMappings
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         ExternalIds                    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 ExternalType                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpIdMappingManager::QueryMappings(const struct FString& ExternalType, TArray<struct FString>* ExternalIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.QueryMappings");

	struct
	{
		TArray<struct FString>         ExternalIds;
		struct FString                 ExternalType;
	} params;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExternalIds != nullptr)
		*ExternalIds = params.ExternalIds;
}


// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpIdMappingManager::OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingManager.AddMapping
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ExternalId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ExternalType                   (CPF_Parm, CPF_NeedCtorLink)

void UMcpIdMappingManager::AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.AddMapping");

	struct
	{
		struct FString                 McpId;
		struct FString                 ExternalId;
		struct FString                 ExternalType;
	} params;
	params.McpId = McpId;
	params.ExternalId = ExternalId;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnDeleteValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FName                   ValueId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.DeleteValue
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

void UMcpManagedValueManagerBase::DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.DeleteValue");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FName                   ValueId;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int                            Value                          (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnUpdateValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FName                   ValueId;
		int                            Value;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;
	params.Value = Value;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.UpdateValue
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int                            Value                          (CPF_Parm)

void UMcpManagedValueManagerBase::UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.UpdateValue");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FName                   ValueId;
		int                            Value;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.GetValue
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMcpManagedValueManagerBase::GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.GetValue");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FName                   ValueId;
		int                            ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManagerBase.GetValues
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FManagedValue>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FManagedValue> UMcpManagedValueManagerBase::GetValues(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.GetValues");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		TArray<struct FManagedValue>   ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnReadSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.CreateInstance
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UMcpManagedValueManagerBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMcpManagedValueManagerBase* UMcpManagedValueManagerBase::STATIC_CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.CreateInstance");

	struct
	{
		class UMcpManagedValueManagerBase* ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.DeleteValue
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

void UMcpManagedValueManager::DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.DeleteValue");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FName                   ValueId;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.UpdateValue
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int                            Value                          (CPF_Parm)

void UMcpManagedValueManager::UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.UpdateValue");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FName                   ValueId;
		int                            Value;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.GetValue
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMcpManagedValueManager::GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.GetValue");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FName                   ValueId;
		int                            ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManager.GetValues
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FManagedValue>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FManagedValue> UMcpManagedValueManager::GetValues(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.GetValues");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		TArray<struct FManagedValue>   ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.ReadSaveSlot
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManager::ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.ReadSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 JsonPayload                    (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManager::ParseValuesForSaveSlot(const struct FString& McpId, const struct FString& SaveSlot, const struct FString& JsonPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		struct FString                 JsonPayload;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.JsonPayload = JsonPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMcpManagedValueManager::FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.FindSaveSlotIndex");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
		int                            ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.CreateSaveSlot
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm, CPF_NeedCtorLink)

void UMcpManagedValueManager::CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.CreateSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlot;
	} params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServerTimeBase.GetLastServerTime
// (FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UMcpServerTimeBase::GetLastServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeBase.GetLastServerTime");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 DateTimeStr                    (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpServerTimeBase::OnQueryServerTimeComplete(bool bWasSuccessful, const struct FString& DateTimeStr, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 DateTimeStr;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.DateTimeStr = DateTimeStr;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServerTimeBase.QueryServerTime
// (FUNC_Public)

void UMcpServerTimeBase::QueryServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeBase.QueryServerTime");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServerTimeBase.CreateInstance
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UMcpServerTimeBase*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMcpServerTimeBase* UMcpServerTimeBase::STATIC_CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeBase.CreateInstance");

	struct
	{
		class UMcpServerTimeBase*      ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServerTimeManager.GetLastServerTime
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UMcpServerTimeManager::GetLastServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeManager.GetLastServerTime");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpServerTimeManager::OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServerTimeManager.QueryServerTime
// (FUNC_Defined, FUNC_Public)

void UMcpServerTimeManager::QueryServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeManager.QueryServerTime");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnRecordIapComplete(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnRecordIapComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		TArray<struct FString>         UpdatedItemIds;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.RecordIap
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Receipt                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.RecordIap");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 Receipt;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.Receipt = Receipt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnDeleteItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.DeleteItem
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.DeleteItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		int                            StoreVersion;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnConsumeItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		TArray<struct FString>         UpdatedItemIds;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.ConsumeItem
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.ConsumeItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		int                            Quantity;
		int                            StoreVersion;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnEarnItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnEarnItemComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 GlobalItemId;
		TArray<struct FString>         UpdatedItemIds;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.EarnItem
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm, CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.EarnItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 GlobalItemId;
		int                            Quantity;
		int                            StoreVersion;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnSellItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnSellItemComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		TArray<struct FString>         UpdatedItemIds;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.SellItem
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)
// TArray<struct FMcpInventoryItemContainer> ExpectedResultItems            (CPF_Const, CPF_OptionalParm, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.SellItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		int                            Quantity;
		int                            StoreVersion;
		TArray<struct FMcpInventoryItemContainer> ExpectedResultItems;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpectedResultItems != nullptr)
		*ExpectedResultItems = params.ExpectedResultItems;
}


// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnPurchaseItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 GlobalItemId;
		TArray<struct FString>         UpdatedItemIds;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.PurchaseItem
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         PurchaseItemIds                (CPF_Parm, CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)
// float                          Scalar                         (CPF_Parm)

void UMcpUserInventoryBase::PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.PurchaseItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 GlobalItemId;
		TArray<struct FString>         PurchaseItemIds;
		int                            Quantity;
		int                            StoreVersion;
		float                          Scalar;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.PurchaseItemIds = PurchaseItemIds;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;
	params.Scalar = Scalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.GetInventoryItem
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpInventoryItem       OutInventoryItem               (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserInventoryBase::GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.GetInventoryItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		struct FMcpInventoryItem       OutInventoryItem;
		bool                           ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventoryItem != nullptr)
		*OutInventoryItem = params.OutInventoryItem;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryBase.GetInventoryItems
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FMcpInventoryItem> OutInventoryItems              (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.GetInventoryItems");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		TArray<struct FMcpInventoryItem> OutInventoryItems;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventoryItems != nullptr)
		*OutInventoryItems = params.OutInventoryItems;
}


// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnQueryInventoryItemsComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.QueryInventoryItems");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnQuerySaveSlotListComplete(const struct FString& McpId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete");

	struct
	{
		struct FString                 McpId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FString> UMcpUserInventoryBase::GetSaveSlotList(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.GetSaveSlotList");

	struct
	{
		struct FString                 McpId;
		TArray<struct FString>         ReturnValue;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::QuerySaveSlotList(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.QuerySaveSlotList");

	struct
	{
		struct FString                 McpId;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnDeleteSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.DeleteSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ParentSaveSlotId               (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryBase::CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.CreateSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 ParentSaveSlotId;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.ParentSaveSlotId = ParentSaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.CreateInstance
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UMcpUserInventoryBase*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMcpUserInventoryBase* UMcpUserInventoryBase::STATIC_CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.CreateInstance");

	struct
	{
		class UMcpUserInventoryBase*   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.RecordIap
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Receipt                        (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryManager::RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.RecordIap");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 Receipt;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.Receipt = Receipt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.DeleteItem
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.DeleteItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		int                            StoreVersion;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.ConsumeItem
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.ConsumeItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		int                            Quantity;
		int                            StoreVersion;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.EarnItem
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm, CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.EarnItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 GlobalItemId;
		int                            Quantity;
		int                            StoreVersion;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.SellItem
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)
// TArray<struct FMcpInventoryItemContainer> ExpectedResultItems            (CPF_Const, CPF_OptionalParm, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserInventoryManager::SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.SellItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		int                            Quantity;
		int                            StoreVersion;
		TArray<struct FMcpInventoryItemContainer> ExpectedResultItems;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpectedResultItems != nullptr)
		*ExpectedResultItems = params.ExpectedResultItems;
}


// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.PurchaseItem
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         PurchaseItemIds                (CPF_Parm, CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)
// float                          Scalar                         (CPF_Parm)

void UMcpUserInventoryManager::PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.PurchaseItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 GlobalItemId;
		TArray<struct FString>         PurchaseItemIds;
		int                            Quantity;
		int                            StoreVersion;
		float                          Scalar;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.PurchaseItemIds = PurchaseItemIds;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;
	params.Scalar = Scalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.FindItemRequest
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ItemID                         (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FInventoryItemRequestState> InItemRequests                 (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMcpUserInventoryManager::FindItemRequest(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ItemID, TArray<struct FInventoryItemRequestState>* InItemRequests)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.FindItemRequest");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 ItemID;
		TArray<struct FInventoryItemRequestState> InItemRequests;
		int                            ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InItemRequests != nullptr)
		*InItemRequests = params.InItemRequests;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> InSaveSlotRequests             (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMcpUserInventoryManager::FindSaveSlotRequest(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>* InSaveSlotRequests)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> InSaveSlotRequests;
		int                            ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSaveSlotRequests != nullptr)
		*InSaveSlotRequests = params.InSaveSlotRequests;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMcpUserInventoryManager::FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		int                            ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 JsonPayload                    (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryManager::ParseSaveSlotList(const struct FString& McpId, const struct FString& JsonPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.ParseSaveSlotList");

	struct
	{
		struct FString                 McpId;
		struct FString                 JsonPayload;
	} params;
	params.McpId = McpId;
	params.JsonPayload = JsonPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 JsonPayload                    (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FString> UMcpUserInventoryManager::ParseInventoryForSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& JsonPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 JsonPayload;
		TArray<struct FString>         ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.JsonPayload = JsonPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.GetInventoryItem
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpInventoryItem       OutInventoryItem               (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserInventoryManager::GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.GetInventoryItem");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 InstanceItemId;
		struct FMcpInventoryItem       OutInventoryItem;
		bool                           ReturnValue;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventoryItem != nullptr)
		*OutInventoryItem = params.OutInventoryItem;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.GetInventoryItems
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FMcpInventoryItem> OutInventoryItems              (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserInventoryManager::GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.GetInventoryItems");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		TArray<struct FMcpInventoryItem> OutInventoryItems;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventoryItems != nullptr)
		*OutInventoryItems = params.OutInventoryItems;
}


// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryManager::QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.QueryInventoryItems");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FString> UMcpUserInventoryManager::GetSaveSlotList(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.GetSaveSlotList");

	struct
	{
		struct FString                 McpId;
		TArray<struct FString>         ReturnValue;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryManager::QuerySaveSlotList(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.QuerySaveSlotList");

	struct
	{
		struct FString                 McpId;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryManager::DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.DeleteSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ParentSaveSlotId               (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)

void UMcpUserInventoryManager::CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.CreateSaveSlot");

	struct
	{
		struct FString                 McpId;
		struct FString                 SaveSlotId;
		struct FString                 ParentSaveSlotId;
	} params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.ParentSaveSlotId = ParentSaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManagerBase::OnDeleteUserComplete(bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.OnDeleteUserComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.DeleteUser
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManagerBase::DeleteUser(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.DeleteUser");

	struct
	{
		struct FString                 McpId;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.GetUser
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpUserStatus          User                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserManagerBase::GetUser(const struct FString& McpId, struct FMcpUserStatus* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.GetUser");

	struct
	{
		struct FString                 McpId;
		struct FMcpUserStatus          User;
		bool                           ReturnValue;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (User != nullptr)
		*User = params.User;

	return params.ReturnValue;
}


// Function IpDrv.McpUserManagerBase.GetUsers
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FMcpUserStatus>  Users                          (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserManagerBase::GetUsers(TArray<struct FMcpUserStatus>* Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.GetUsers");

	struct
	{
		TArray<struct FMcpUserStatus>  Users;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Users != nullptr)
		*Users = params.Users;
}


// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManagerBase::OnQueryUsersComplete(bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.OnQueryUsersComplete");

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.QueryUsers
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         McpIds                         (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserManagerBase::QueryUsers(TArray<struct FString>* McpIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.QueryUsers");

	struct
	{
		TArray<struct FString>         McpIds;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (McpIds != nullptr)
		*McpIds = params.McpIds;
}


// Function IpDrv.McpUserManagerBase.QueryUser
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           bShouldUpdateLastActive        (CPF_OptionalParm, CPF_Parm)

void UMcpUserManagerBase::QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.QueryUser");

	struct
	{
		struct FString                 McpId;
		bool                           bShouldUpdateLastActive;
	} params;
	params.McpId = McpId;
	params.bShouldUpdateLastActive = bShouldUpdateLastActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Token                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManagerBase::OnAuthenticateUserComplete(const struct FString& McpId, const struct FString& Token, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete");

	struct
	{
		struct FString                 McpId;
		struct FString                 Token;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.Token = Token;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.AuthenticateUserMcp
// (FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ClientSecret                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UDID                           (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManagerBase::AuthenticateUserMcp(const struct FString& McpId, const struct FString& ClientSecret, const struct FString& UDID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.AuthenticateUserMcp");

	struct
	{
		struct FString                 McpId;
		struct FString                 ClientSecret;
		struct FString                 UDID;
	} params;
	params.McpId = McpId;
	params.ClientSecret = ClientSecret;
	params.UDID = UDID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook
// (FUNC_Public)
// Parameters:
// struct FString                 FacebookId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 FacebookToken                  (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UDID                           (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManagerBase::AuthenticateUserFacebook(const struct FString& FacebookId, const struct FString& FacebookToken, const struct FString& UDID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook");

	struct
	{
		struct FString                 FacebookId;
		struct FString                 FacebookToken;
		struct FString                 UDID;
	} params;
	params.FacebookId = FacebookId;
	params.FacebookToken = FacebookToken;
	params.UDID = UDID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManagerBase::OnRegisterUserComplete(const struct FString& McpId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.OnRegisterUserComplete");

	struct
	{
		struct FString                 McpId;
		bool                           bWasSuccessful;
		struct FString                 Error;
	} params;
	params.McpId = McpId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// (FUNC_Public)
// Parameters:
// struct FString                 FacebookId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 FacebookAuthToken              (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManagerBase::RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.RegisterUserFacebook");

	struct
	{
		struct FString                 FacebookId;
		struct FString                 FacebookAuthToken;
	} params;
	params.FacebookId = FacebookId;
	params.FacebookAuthToken = FacebookAuthToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// (FUNC_Public)

void UMcpUserManagerBase::RegisterUserGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.RegisterUserGenerated");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.CreateInstance
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UMcpUserManagerBase*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMcpUserManagerBase* UMcpUserManagerBase::STATIC_CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.CreateInstance");

	struct
	{
		class UMcpUserManagerBase*     ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnDeleteUserRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.DeleteUser
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManager::DeleteUser(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.DeleteUser");

	struct
	{
		struct FString                 McpId;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.GetUser
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FMcpUserStatus          User                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMcpUserManager::GetUser(const struct FString& McpId, struct FMcpUserStatus* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.GetUser");

	struct
	{
		struct FString                 McpId;
		struct FMcpUserStatus          User;
		bool                           ReturnValue;
	} params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (User != nullptr)
		*User = params.User;

	return params.ReturnValue;
}


// Function IpDrv.McpUserManager.GetUsers
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FMcpUserStatus>  Users                          (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserManager::GetUsers(TArray<struct FMcpUserStatus>* Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.GetUsers");

	struct
	{
		TArray<struct FMcpUserStatus>  Users;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Users != nullptr)
		*Users = params.Users;
}


// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnQueryUsersRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.ParseUsers
// (FUNC_Defined, FUNC_Protected)
// Parameters:
// struct FString                 JsonPayload                    (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManager::ParseUsers(const struct FString& JsonPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.ParseUsers");

	struct
	{
		struct FString                 JsonPayload;
	} params;
	params.JsonPayload = JsonPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.QueryUsers
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         McpIds                         (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UMcpUserManager::QueryUsers(TArray<struct FString>* McpIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.QueryUsers");

	struct
	{
		TArray<struct FString>         McpIds;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (McpIds != nullptr)
		*McpIds = params.McpIds;
}


// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnQueryUserRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.QueryUser
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           bShouldUpdateLastActive        (CPF_OptionalParm, CPF_Parm)

void UMcpUserManager::QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.QueryUser");

	struct
	{
		struct FString                 McpId;
		bool                           bShouldUpdateLastActive;
	} params;
	params.McpId = McpId;
	params.bShouldUpdateLastActive = bShouldUpdateLastActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnAuthenticateUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.AuthenticateUserMcp
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 McpId                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ClientSecret                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UDID                           (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManager::AuthenticateUserMcp(const struct FString& McpId, const struct FString& ClientSecret, const struct FString& UDID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.AuthenticateUserMcp");

	struct
	{
		struct FString                 McpId;
		struct FString                 ClientSecret;
		struct FString                 UDID;
	} params;
	params.McpId = McpId;
	params.ClientSecret = ClientSecret;
	params.UDID = UDID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.AuthenticateUserFacebook
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 FacebookId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 FacebookToken                  (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 UDID                           (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManager::AuthenticateUserFacebook(const struct FString& FacebookId, const struct FString& FacebookToken, const struct FString& UDID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.AuthenticateUserFacebook");

	struct
	{
		struct FString                 FacebookId;
		struct FString                 FacebookToken;
		struct FString                 UDID;
	} params;
	params.FacebookId = FacebookId;
	params.FacebookToken = FacebookToken;
	params.UDID = UDID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnRegisterUserRequestComplete");

	struct
	{
		class UHttpRequestInterface*   Request;
		class UHttpResponseInterface*  Response;
		bool                           bWasSuccessful;
	} params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.ParseUser
// (FUNC_Defined, FUNC_Protected)
// Parameters:
// struct FString                 JsonPayload                    (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMcpUserManager::ParseUser(const struct FString& JsonPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.ParseUser");

	struct
	{
		struct FString                 JsonPayload;
		int                            ReturnValue;
	} params;
	params.JsonPayload = JsonPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserManager.RegisterUserFacebook
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 FacebookId                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 FacebookAuthToken              (CPF_Parm, CPF_NeedCtorLink)

void UMcpUserManager::RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.RegisterUserFacebook");

	struct
	{
		struct FString                 FacebookId;
		struct FString                 FacebookAuthToken;
	} params;
	params.FacebookId = FacebookId;
	params.FacebookAuthToken = FacebookAuthToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.RegisterUserGenerated
// (FUNC_Defined, FUNC_Public)

void UMcpUserManager::RegisterUserGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.RegisterUserGenerated");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UOnlineImageDownloaderWeb::DebugDraw(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.DebugDraw");

	struct
	{
		class UCanvas*                 Canvas;
	} params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UOnlineImageDownloaderWeb::OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  Response;
		bool                           bDidSucceed;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// (FUNC_Final, FUNC_Defined, FUNC_Private)

void UOnlineImageDownloaderWeb::DownloadNextImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// (FUNC_Defined, FUNC_Public)

void UOnlineImageDownloaderWeb::ClearAllDownloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
// (FUNC_Defined, FUNC_Public)
// Parameters:
// TArray<struct FString>         URLs                           (CPF_Parm, CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::ClearDownloads(TArray<struct FString> URLs)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads");

	struct
	{
		TArray<struct FString>         URLs;
	} params;
	params.URLs = URLs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UOnlineImageDownloaderWeb::GetNumPendingDownloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// TArray<struct FString>         URLs                           (CPF_Parm, CPF_NeedCtorLink)
// bool                           bSRGB                          (CPF_OptionalParm, CPF_Parm)

void UOnlineImageDownloaderWeb::RequestOnlineImages(TArray<struct FString> URLs, bool bSRGB)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages");

	struct
	{
		TArray<struct FString>         URLs;
		bool                           bSRGB;
	} params;
	params.URLs = URLs;
	params.bSRGB = bSRGB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_NeedCtorLink)
// class UTexture*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UTexture* UOnlineImageDownloaderWeb::GetOnlineImageTexture(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture");

	struct
	{
		struct FString                 URL;
		class UTexture*                ReturnValue;
	} params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FOnlineImageDownload    CachedEntry                    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::OnOnlineImageDownloaded(const struct FOnlineImageDownload& CachedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded");

	struct
	{
		struct FOnlineImageDownload    CachedEntry;
	} params;
	params.CachedEntry = CachedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.IsHanging
// (FUNC_Final, FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AWebConnection::IsHanging()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.IsHanging");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebConnection.Cleanup
// (FUNC_Defined, FUNC_Public)

void AWebConnection::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.Cleanup");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.CheckRawBytes
// (FUNC_Defined, FUNC_Public)

void AWebConnection::CheckRawBytes()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.CheckRawBytes");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.EndOfHeaders
// (FUNC_Defined, FUNC_Public)

void AWebConnection::EndOfHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.EndOfHeaders");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.CreateResponseObject
// (FUNC_Defined, FUNC_Public)

void AWebConnection::CreateResponseObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.CreateResponseObject");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessPost
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)

void AWebConnection::ProcessPost(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ProcessPost");

	struct
	{
		struct FString                 S;
	} params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessGet
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)

void AWebConnection::ProcessGet(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ProcessGet");

	struct
	{
		struct FString                 S;
	} params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessHead
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)

void AWebConnection::ProcessHead(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ProcessHead");

	struct
	{
		struct FString                 S;
	} params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ReceivedLine
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)

void AWebConnection::ReceivedLine(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ReceivedLine");

	struct
	{
		struct FString                 S;
	} params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ReceivedText
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 Text                           (CPF_Parm, CPF_NeedCtorLink)

void AWebConnection::ReceivedText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ReceivedText");

	struct
	{
		struct FString                 Text;
	} params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Timer
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AWebConnection::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.Timer");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Closed
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AWebConnection::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.Closed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Accepted
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AWebConnection::Accepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.Accepted");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
