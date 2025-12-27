#pragma once

#ifndef lang_config_h
#define lang_config_h

// ===== ESP32 Marauder Multi-Language Configuration =====
//
// Language selection via compile-time flag
// Default: English (EN)
//
// To compile in Spanish, add to platformio.ini build_flags:
//   -DMARAUDER_LANG_ES
//
// Supported languages:
//   MARAUDER_LANG_EN - English (default)
//   MARAUDER_LANG_ES - Español

// Language selection
#if defined(MARAUDER_LANG_ES)
  #define LANG_ES 1
  #define LANG_EN 0
#else
  #define LANG_EN 1
  #define LANG_ES 0
#endif

#endif
