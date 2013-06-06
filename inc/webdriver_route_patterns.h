// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef WEBDRIVER_WEBDRIVER_ROUTE_PATTERNS_H_
#define WEBDRIVER_WEBDRIVER_ROUTE_PATTERNS_H_

#include <string>
#include <set>

namespace webdriver {

/// This class contains constants for standard commands routes
class CommandRoutes {
public:
    /// Returns if route is standard
    /// @param pattern pattern to check
    /// @return true - if pattern in standard command set, false - otherwise.
    static bool IsStandardRoute(const std::string& pattern);

    static const char kStatus[];
    static const char kGetLog[];
    static const char kNewSession[];
    static const char kSession[];
    static const char kSessions[];
    static const char kImplicitlyWait[];
    static const char kSetScriptTimeout[];
    static const char kGetAvailableLogTypes[];
    static const char kGetSessionLogs[];
    static const char kWindowSize[];
    static const char kWindowPosition[];
    static const char kMaximizeWindow[];
    static const char kGetTitle[];
    static const char kGoForward[];
    static const char kGoBack[];
    static const char kRefresh[];
    static const char kScreenshot[];
    static const char kSendKeys[];
    static const char kClickElement[];
    static const char kHoverOverElement[];
    static const char kMouseClick[];
    static const char kMouseDoubleClick[];
    static const char kMouseButtonDown[];
    static const char kMouseButtonUp[];
    static const char kMouseMoveTo[];
    static const char kClearElement[];
    static const char kSendKeysToElement[];
    static const char kSubmitElement[];
    static const char kFindChildElement[];
    static const char kFindChildElements[];
    static const char kGetElementText[];
    static const char kGetElementTagName[];
    static const char kIsElementSelected[];
    static const char kIsElementEnabled[];
    static const char kIsElementDisplayed[];
    static const char kGetElementLocation[];
    static const char kGetElementLocationInView[];
    static const char kGetElementSize[];
    static const char kGetElementAttribute[];
    static const char kGetElementCssProp[];
    static const char kElementEquals[];
    static const char kFindElement[];
    static const char kFindElements[];
    static const char kSwitchToFrame[];
    static const char kGetActiveElement[];
    static const char kGetCurrentWindowHandle[];
    static const char kGetWindowHandles[];
    static const char kWindowCmd[];
    static const char kGetPageSource[];
    static const char kUrlCmd[];
    static const char kExecuteScript[];
    static const char kExecuteAsyncScript[];
    static const char kGetAppCache[];
    static const char kAlertText[];
    static const char kAcceptAlert[];
    static const char kDismissAlert[];
    static const char kCookie[];
    static const char kNamedCookie[];


// TODO:
/*    
    static const char kGet[];
    
    static const char kSendKeysToActiveElement[];
    
    
    
    static const char kSetBrowserVisible[];
    static const char kIsBrowserVisible[];

    static const char kExecuteSQL[];
    static const char kGetLocation[];
    static const char kSetLocation[];
    
    static const char kGetStatus[];
    static const char kClearAppCache[];
    static const char kIsBrowserOnline[];
    static const char kSetBrowserOnline[];
    static const char kGetLocalStorageItem[];
    static const char kGetLocalStorageKeys[];
    static const char kSetLocalStorageItem[];
    static const char kRemoveLocalStorageItem[];
    static const char kClearLocalStorage[];
    static const char kGetLocalStorageSize[];
    static const char kGetSessionStorageItem[];
    static const char kGetSessionStorageKey[];
    static const char kSetSessionStorageItem[];
    static const char kRemoveSessionStorageItem[];
    static const char kClearSessionStorage[];
    static const char kGetSessionStorageSize[];
    static const char kSetScreenOrientation[];
    static const char kGetScreenOrientation[];
    
    static const char kImeGetAvailableEngines[];
    static const char kImeGetActiveEngine[];
    static const char kImeIsActivated[];
    static const char kImeDeactivate[];
    static const char kImeActivateEngine[];
    static const char kTouchSingleTap[];
    static const char kTouchDown[];
    static const char kTouchUp[];
    static const char kTouchMove[];
    static const char kTouchScroll[];
    static const char kTouchDoubleTap[];
    static const char kTouchLongPress[];
    static const char kTouchFlick[];
*/    
private:
    static std::set<std::string> standardCommandRoutes;
};

}  // namespace webdriver

#endif  // WEBDRIVER_WEBDRIVER_ROUTE_PATTERNS_H_
