#ifndef CONFIG_H
#define CONFIG_H

#define PRODUCTION true


#define VERSION_PEBBLE 266
#define VERSION_TEXT "Version 2.3.0-beta1"
#define APP_COMPANY "N Jackson & JayPS"

#if PRODUCTION
  #define DEBUG false
  #define ROTATION false
  #define DEMO false
#else
  #define DEBUG false
  #define ROTATION false
  //#define DEBUG_COLOR true
  //#define DEBUG_FIELDS_SIZE true
  #define DEMO true
#endif


#define ORUXMAP true

#endif // CONFIG_H
