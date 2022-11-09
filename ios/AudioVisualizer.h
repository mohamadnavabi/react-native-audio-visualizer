#ifdef __cplusplus
#import "react-native-audio-visualizer.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNAudioVisualizerSpec.h"

@interface AudioVisualizer : NSObject <NativeAudioVisualizerSpec>
#else
#import <React/RCTBridgeModule.h>

@interface AudioVisualizer : NSObject <RCTBridgeModule>
#endif

@end
