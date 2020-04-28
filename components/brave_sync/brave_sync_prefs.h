/* Copyright 2019 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_SYNC_BRAVE_SYNC_PREFS_H_
#define BRAVE_COMPONENTS_BRAVE_SYNC_BRAVE_SYNC_PREFS_H_

#include <memory>
#include <string>
#include <vector>

#include "base/macros.h"
#include "base/values.h"

class PrefService;

namespace base {
class Time;
}

namespace user_prefs {
class PrefRegistrySyncable;
}

namespace brave_sync {

class Prefs {
 public:
  explicit Prefs(PrefService* pref_service);
  virtual ~Prefs();

  static void RegisterProfilePrefs(user_prefs::PrefRegistrySyncable* registry);

  static std::string GetSeedPath();

  std::string GetSeed() const;
  bool SetSeed(const std::string& seed);

  bool IsSyncEnabled() const;
  void SetSyncEnabled(bool is_enabled);

  bool IsSyncV2Migrated() const;
  void SetSyncV2Migrated(bool is_migrated);

  void Clear();

 private:
  PrefService* const pref_service_;

  DISALLOW_COPY_AND_ASSIGN(Prefs);
};

void MigrateBraveSyncPrefs(PrefService* prefs);

}  // namespace brave_sync

#endif  // BRAVE_COMPONENTS_BRAVE_SYNC_BRAVE_SYNC_PREFS_H_
