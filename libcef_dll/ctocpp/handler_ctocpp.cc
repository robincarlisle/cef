// Copyright (c) 2010 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/stream_reader_cpptoc.h"
#include "libcef_dll/cpptoc/v8value_cpptoc.h"
#include "libcef_dll/ctocpp/download_handler_ctocpp.h"
#include "libcef_dll/ctocpp/handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeCreated(
    CefRefPtr<CefBrowser> parentBrowser, CefWindowInfo& windowInfo, bool popup,
    const CefPopupFeatures& popupFeatures, CefRefPtr<CefHandler>& handler,
    CefString& url, CefBrowserSettings& settings)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_created))
    return RV_CONTINUE;

  cef_browser_t* browserStruct = NULL;
  if(parentBrowser.get())
    browserStruct = CefBrowserCppToC::Wrap(parentBrowser);

  cef_handler_t* handlerStruct = NULL;
  if(handler.get())
    handlerStruct = CefHandlerCToCpp::Unwrap(handler);
  cef_handler_t *origHandlerStruct = handlerStruct;

  cef_retval_t rv = struct_->handle_before_created(struct_,
      browserStruct, &windowInfo, popup, &popupFeatures, &handlerStruct,
      url.GetWritableStruct(), &settings);

  if(handlerStruct && handlerStruct != origHandlerStruct) {
    // The handler was changed.
    if(handlerStruct)
      handler = CefHandlerCToCpp::Wrap(handlerStruct);
    else
      handler = NULL;
  }

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleAfterCreated(
    CefRefPtr<CefBrowser> browser)
{
  if(CEF_MEMBER_MISSING(struct_, handle_after_created))
    return RV_CONTINUE;

  return struct_->handle_after_created(struct_,
      CefBrowserCppToC::Wrap(browser));
}

CefHandler::RetVal CefHandlerCToCpp::HandleAddressChange(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const CefString& url)
{
  if(CEF_MEMBER_MISSING(struct_, handle_address_change))
    return RV_CONTINUE;

  return struct_->handle_address_change(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      url.GetStruct());
}

CefHandler::RetVal CefHandlerCToCpp::HandleTitleChange(
    CefRefPtr<CefBrowser> browser, const CefString& title)
{
  if(CEF_MEMBER_MISSING(struct_, handle_title_change))
   return RV_CONTINUE;

  return struct_->handle_title_change(struct_, CefBrowserCppToC::Wrap(browser),
      title.GetStruct());
}

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeBrowse(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request, NavType navType, bool isRedirect)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_browse))
    return RV_CONTINUE;

  return struct_->handle_before_browse(struct_, CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame), CefRequestCppToC::Wrap(request),
      navType, isRedirect);
}

CefHandler::RetVal CefHandlerCToCpp::HandleLoadStart(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame)
{
  if(CEF_MEMBER_MISSING(struct_, handle_load_start))
    return RV_CONTINUE;

  cef_frame_t* frameStruct = NULL;
  if(frame.get())
    frameStruct = CefFrameCppToC::Wrap(frame);

  return struct_->handle_load_start(struct_, CefBrowserCppToC::Wrap(browser),
      frameStruct);
}

CefHandler::RetVal CefHandlerCToCpp::HandleLoadEnd(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    int httpStatusCode)
{
  if(CEF_MEMBER_MISSING(struct_, handle_load_end))
    return RV_CONTINUE;

  cef_frame_t* frameStruct = NULL;
  if(frame.get())
    frameStruct = CefFrameCppToC::Wrap(frame);

  return struct_->handle_load_end(struct_, CefBrowserCppToC::Wrap(browser),
      frameStruct, httpStatusCode);
}

CefHandler::RetVal CefHandlerCToCpp::HandleLoadError(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    ErrorCode errorCode, const CefString& failedUrl, CefString& errorText)
{
  if(CEF_MEMBER_MISSING(struct_, handle_load_error))
    return RV_CONTINUE;

  return struct_->handle_load_error(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame), errorCode,
      failedUrl.GetStruct(), errorText.GetWritableStruct());
}

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeResourceLoad(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefRequest> request,
    CefString& redirectUrl, CefRefPtr<CefStreamReader>& resourceStream,
    CefString& mimeType, int loadFlags)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_resource_load))
    return RV_CONTINUE;

  cef_stream_reader_t* streamRet = NULL;

  cef_retval_t rv = struct_->handle_before_resource_load(struct_,
      CefBrowserCppToC::Wrap(browser), CefRequestCppToC::Wrap(request),
      redirectUrl.GetWritableStruct(), &streamRet, mimeType.GetWritableStruct(),
      loadFlags);

  if(streamRet)
    resourceStream = CefStreamReaderCppToC::Unwrap(streamRet);

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleProtocolExecution(
    CefRefPtr<CefBrowser> browser, const CefString& url,
    bool* allow_os_execution)
{
  if(CEF_MEMBER_MISSING(struct_, handle_protocol_execution))
    return RV_CONTINUE;

  int allowExec = *allow_os_execution?1:0;
  cef_retval_t rv = struct_->handle_protocol_execution(struct_,
      CefBrowserCppToC::Wrap(browser), url.GetStruct(), &allowExec);
  *allow_os_execution = allowExec?true:false;
  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleDownloadResponse(
    CefRefPtr<CefBrowser> browser, const CefString& mimeType,
    const CefString& fileName, int64 contentLength,
    CefRefPtr<CefDownloadHandler>& handler)
{
  if(CEF_MEMBER_MISSING(struct_, handle_download_response))
    return RV_CONTINUE;

  cef_download_handler_t* handlerRet = NULL;

  cef_retval_t rv = struct_->handle_download_response(struct_,
      CefBrowserCppToC::Wrap(browser), mimeType.GetStruct(), fileName.GetStruct(),
      contentLength, &handlerRet);

  if(handlerRet)
    handler = CefDownloadHandlerCToCpp::Wrap(handlerRet);

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleAuthenticationRequest(
    CefRefPtr<CefBrowser> browser, bool isProxy, const CefString& host,
    const CefString& realm, const CefString& scheme, CefString& username,
    CefString& password)
{
  if(CEF_MEMBER_MISSING(struct_, handle_authentication_request))
    return RV_CONTINUE;

  return struct_->handle_authentication_request(struct_,
      CefBrowserCppToC::Wrap(browser), isProxy,
      host.GetStruct(), realm.GetStruct(), scheme.GetStruct(),
      username.GetWritableStruct(), password.GetWritableStruct());
}

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeMenu(
    CefRefPtr<CefBrowser> browser, const MenuInfo& menuInfo)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_menu))
    return RV_CONTINUE;

  return struct_->handle_before_menu(struct_, CefBrowserCppToC::Wrap(browser),
      &menuInfo);
}

CefHandler::RetVal CefHandlerCToCpp::HandleGetMenuLabel(
    CefRefPtr<CefBrowser> browser, MenuId menuId, CefString& label)
{
  if(CEF_MEMBER_MISSING(struct_, handle_get_menu_label))
    return RV_CONTINUE;

  return struct_->handle_get_menu_label(struct_,
      CefBrowserCppToC::Wrap(browser), menuId, label.GetWritableStruct());
}

CefHandler::RetVal CefHandlerCToCpp::HandleMenuAction(
    CefRefPtr<CefBrowser> browser, MenuId menuId)
{
  if(CEF_MEMBER_MISSING(struct_, handle_menu_action))
    return RV_CONTINUE;

  return struct_->handle_menu_action(struct_, CefBrowserCppToC::Wrap(browser),
      menuId);
}

CefHandler::RetVal CefHandlerCToCpp::HandlePrintOptions(
    CefRefPtr<CefBrowser> browser, CefPrintOptions& printOptions)
{
  if (CEF_MEMBER_MISSING(struct_, handle_print_options))
     return RV_CONTINUE;

  return struct_->handle_print_options(struct_, CefBrowserCppToC::Wrap(browser),
     &printOptions);
}

CefHandler::RetVal CefHandlerCToCpp::HandlePrintHeaderFooter(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefPrintInfo& printInfo, const CefString& url, const CefString& title,
    int currentPage, int maxPages, CefString& topLeft, CefString& topCenter,
    CefString& topRight, CefString& bottomLeft, CefString& bottomCenter,
    CefString& bottomRight)
{
  if(CEF_MEMBER_MISSING(struct_, handle_print_header_footer))
    return RV_CONTINUE;

  return struct_->handle_print_header_footer(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      &printInfo, url.GetStruct(), title.GetStruct(), currentPage, maxPages,
      topLeft.GetWritableStruct(), topCenter.GetWritableStruct(),
      topRight.GetWritableStruct(), bottomLeft.GetWritableStruct(),
      bottomCenter.GetWritableStruct(), bottomRight.GetWritableStruct());
}

CefHandler::RetVal CefHandlerCToCpp::HandleJSAlert(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const CefString& message)
{
  if(CEF_MEMBER_MISSING(struct_, handle_jsalert))
    return RV_CONTINUE;

  return struct_->handle_jsalert(struct_, CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame), message.GetStruct());
}

CefHandler::RetVal CefHandlerCToCpp::HandleJSConfirm(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const CefString& message, bool& retval)
{
  if(CEF_MEMBER_MISSING(struct_, handle_jsconfirm))
    return RV_CONTINUE;

  int ret = 0;
  cef_retval_t rv = struct_->handle_jsconfirm(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      message.GetStruct(), &ret);
  retval = (ret ? true : false);
  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleJSPrompt(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const CefString& message, const CefString& defaultValue, bool& retval,
    CefString& result)
{
  if(CEF_MEMBER_MISSING(struct_, handle_jsprompt))
    return RV_CONTINUE;

  int ret = 0;
  cef_retval_t rv = struct_->handle_jsprompt(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      message.GetStruct(), defaultValue.GetStruct(), &ret,
      result.GetWritableStruct());
  retval = (ret ? true : false);
  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleJSBinding(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Value> object)
{
  if(CEF_MEMBER_MISSING(struct_, handle_jsbinding))
    return RV_CONTINUE;

  return struct_->handle_jsbinding(struct_, CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame), CefV8ValueCppToC::Wrap(object));
}

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeWindowClose(
    CefRefPtr<CefBrowser> browser)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_window_close))
    return RV_CONTINUE;

  return struct_->handle_before_window_close(struct_,
      CefBrowserCppToC::Wrap(browser));
}

CefHandler::RetVal CefHandlerCToCpp::HandleTakeFocus(
    CefRefPtr<CefBrowser> browser, bool reverse)
{
  if(CEF_MEMBER_MISSING(struct_, handle_take_focus))
    return RV_CONTINUE;

  return struct_->handle_take_focus(struct_, CefBrowserCppToC::Wrap(browser),
      reverse);
}

CefHandler::RetVal CefHandlerCToCpp::HandleSetFocus(
    CefRefPtr<CefBrowser> browser, bool isWidget)
{
  if(CEF_MEMBER_MISSING(struct_, handle_set_focus))
    return RV_CONTINUE;

  return struct_->handle_set_focus(struct_, CefBrowserCppToC::Wrap(browser),
      isWidget);
}

CefHandler::RetVal CefHandlerCToCpp::HandleKeyEvent(
    CefRefPtr<CefBrowser> browser, KeyEventType type, int code, int modifiers,
    bool isSystemKey)
{
  if(CEF_MEMBER_MISSING(struct_, handle_key_event))
    return RV_CONTINUE;

  return struct_->handle_key_event(struct_, CefBrowserCppToC::Wrap(browser),
      type, code, modifiers, isSystemKey);
}

CefHandler::RetVal CefHandlerCToCpp::HandleTooltip(
    CefRefPtr<CefBrowser> browser, CefString& text)
{
  if(CEF_MEMBER_MISSING(struct_, handle_tooltip))
    return RV_CONTINUE;
  
  return struct_->handle_tooltip(struct_, 
      CefBrowserCppToC::Wrap(browser), text.GetWritableStruct());
}

CefHandler::RetVal CefHandlerCToCpp::HandleStatus(CefRefPtr<CefBrowser> browser,
    const CefString& value, StatusType type)
{
  if(CEF_MEMBER_MISSING(struct_, handle_status))
    return RV_CONTINUE;

  return struct_->handle_status(struct_, 
      CefBrowserCppToC::Wrap(browser), value.GetStruct(), type);
}

CefHandler::RetVal CefHandlerCToCpp::HandleConsoleMessage(
    CefRefPtr<CefBrowser> browser, const CefString& message,
    const CefString& source, int line)
{
  if(CEF_MEMBER_MISSING(struct_, handle_console_message))
    return RV_CONTINUE;

  return struct_->handle_console_message(struct_,
      CefBrowserCppToC::Wrap(browser), message.GetStruct(), source.GetStruct(),
      line);
}

CefHandler::RetVal CefHandlerCToCpp::HandleFindResult(
    CefRefPtr<CefBrowser> browser, int identifier, int count,
    const CefRect& selectionRect, int activeMatchOrdinal, bool finalUpdate)
{
  if(CEF_MEMBER_MISSING(struct_, handle_find_result))
    return RV_CONTINUE;

  return struct_->handle_find_result(struct_,
      CefBrowserCppToC::Wrap(browser), identifier, count, &selectionRect,
      activeMatchOrdinal, finalUpdate);
}


#ifdef _DEBUG
template<> long CefCToCpp<CefHandlerCToCpp, CefHandler,
    cef_handler_t>::DebugObjCt = 0;
#endif

