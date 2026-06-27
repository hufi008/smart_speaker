#pragma once

enum ContentMode : int {
    CONTENT_BOOT     = 0,
    CONTENT_IDLE     = 1,
    CONTENT_LISTEN   = 2,
    CONTENT_THINK    = 3,
    CONTENT_ANNOUNCE = 4,
    CONTENT_PLAY     = 5,
    CONTENT_PAUSE    = 6,
    CONTENT_ALARM    = 7
};

static const char* content_mode_names[] = {
  "BOOT",
  "IDLE",
  "LISTEN",
  "THINK",
  "ANNOUNCE",
  "PLAY",
  "PAUSE",
  "ALARM"
};

inline const char* content_mode_to_string(ContentMode mode) {
  int idx = mode;
  if (idx < CONTENT_BOOT || idx > CONTENT_ALARM) return "UNKNOWN";
  return content_mode_names[idx];
}

inline const char* content_mode_to_string(int idx) {
  return content_mode_to_string(static_cast<ContentMode>(idx));
}

inline int string_to_content_mode_int(std::string name) {
  for (int i = 0; i <= 7; i++) {
    if (name == content_mode_names[i]) {
      return i;
    }
  }
  
  return 1; // Standardmäßig IDLE zurückgeben, falls nichts passt
}

/*
namespace ContentUtils {
    inline constexpr const char* content_mode_names[] = {
      "BOOT", "IDLE", "LISTEN", "THINK", "ANNOUNCE", "PLAY", "PAUSE", "ALARM"
    };

    // 1. Modus zu Text (Enum-Variante)
    inline const char* to_string(ContentMode mode) {
      int idx = mode;
      if (idx < 0 || idx > 7) return "UNKNOWN";
      return content_mode_names[idx];
    }

    // 2. Modus zu Text (int-Überladung)
    inline const char* to_string(int idx) {
      return to_string(static_cast<ContentMode>(idx));
    }

    // 3. Text zu Modus-Zahl
    inline int to_int(std::string name) {
      for (int i = 0; i <= 7; i++) {
        if (name == content_mode_names[i]) {
          return i;
        }
      }
      return 1; // Standard: IDLE
    }
}
*/

enum OverlayMode : int {
    OVERLAY_NONE     = 0,
    OVERLAY_VOLUME   = 1,
    OVERLAY_ERROR    = 2,
};

static const char* overlay_mode_names[] = {
  "NONE",
  "VOLUME",
  "ERROR"
};

inline const char* overlay_mode_to_string(OverlayMode mode) {
  int idx = mode;
  if (idx < OVERLAY_NONE || idx > OVERLAY_ERROR) return "UNKNOWN";
  return overlay_mode_names[idx];
}

inline const char* overlay_mode_to_string(int idx) {
  return overlay_mode_to_string(static_cast<OverlayMode>(idx));
}

inline int string_to_overlay_mode_int(std::string name) {
  for (int i = 0; i <= 7; i++) {
    if (name == overlay_mode_names[i]) {
      return i;
    }
  }
  
  return 1; // Standardmäßig IDLE zurückgeben, falls nichts passt
}

