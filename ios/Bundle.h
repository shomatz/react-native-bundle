
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBundleSpec.h"

@interface Bundle : NSObject <NativeBundleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Bundle : NSObject <RCTBridgeModule>
#endif

@end
