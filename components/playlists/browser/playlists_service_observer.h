/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_PLAYLISTS_BROWSER_PLAYLISTS_SERVICE_OBSERVER_H_
#define BRAVE_COMPONENTS_PLAYLISTS_BROWSER_PLAYLISTS_SERVICE_OBSERVER_H_

#include <string>

#include "base/observer_list_types.h"
#include "brave/components/playlists/browser/playlists_types.h"

namespace brave_playlists {

class PlaylistsServiceObserver : public base::CheckedObserver {
 public:
  virtual void OnPlaylistItemStatusChanged(
      const PlaylistsChangeParams& params) = 0;

 protected:
  ~PlaylistsServiceObserver() override {}
};

}  // namespace brave_playlists

#endif  // BRAVE_COMPONENTS_PLAYLISTS_BROWSER_PLAYLISTS_SERVICE_OBSERVER_H_