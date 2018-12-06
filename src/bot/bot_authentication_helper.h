// Copyright (C) 2018 iFunFactory Inc. All Rights Reserved.
//
// This work is confidential and proprietary to iFunFactory Inc. and
// must not be used, disclosed, copied, or distributed without the prior
// consent of iFunFactory Inc.

#ifndef DEDI_SERVER_EXAMPLE_ENGINE_SRC_BOT_AUTHENTICATION_HELPER_H_
#define DEDI_SERVER_EXAMPLE_ENGINE_SRC_BOT_AUTHENTICATION_HELPER_H_

#include <funapi.h>
#include <funapi/test/network.h>


namespace bot {

class BotAuthenticationHelper {
 public:
  typedef function<void (
      const bool succeed,
      const Ptr<funtest::Session> &session)> LoginHandler;

  static void Install(const LoginHandler &login_handler);

  static void Login(const Ptr<funtest::Session> &session);

  static string GetAccountId(const Ptr<funtest::Session> &session);

  static bool IsLoggedIn(const Ptr<funtest::Session> &session);
};

}  // namespace bot

#endif  // DEDI_SERVER_EXAMPLE_ENGINE_SRC_BOT_AUTHENTICATION_HELPER_H_