// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "browser/api/atom_api_menu_win.h"

namespace atom {

namespace api {

MenuWin::MenuWin(v8::Handle<v8::Object> wrapper)
    : Menu(wrapper) {
}

MenuWin::~MenuWin() {
}

void MenuWin::Popup(NativeWindow* native_window) {
}

// static
Menu* Menu::Create(v8::Handle<v8::Object> wrapper) {
  return new MenuWin(wrapper);
}

}  // namespace api

}  // namespace atom