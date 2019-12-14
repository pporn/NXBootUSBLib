/**
 * @file NXBootKit globals
 * @author Oliver Kuckertz <oliver.kuckertz@mologie.de
 */

#import <CoreFoundation/CoreFoundation.h>


#ifdef DEBUG
#define NXLog(...) NSLog(__VA_ARGS__)
#else
#define NXLog(...)
#endif
