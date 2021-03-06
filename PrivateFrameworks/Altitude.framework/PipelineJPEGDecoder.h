/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PipelineJPEGDecoder : NSObject
{
    CDStruct_632c0709 pool420;
    CDStruct_632c0709 poolJPEG;
    struct CGSize imageSize;
    unsigned int requestedImageCount;
    int current420SurfaceCount;
    unsigned int maxJPEGSize;
}

+ (id)_hardwareSemaphoreWaitQueue;
+ (id)_hardwareSemaphore;
+ (struct __IOSurfaceAccelerator *)_getPooledSurfaceAccelerator;
+ (void)_poolSurfaceAccelerator:(struct __IOSurfaceAccelerator *)arg1;
+ (struct __IOSurfaceAccelerator *)_createAccelerator;
+ (CDStruct_632c0709 *)_transferSessionPool;
@property unsigned int maxJPEGSize; // @synthesize maxJPEGSize;
- (void)_receivedMemoryWarning:(id)arg1;
- (void)_decodeJPEG:(id)arg1 withInputSurface:(struct __IOSurface *)arg2 toIOSurface:(struct __IOSurface *)arg3;
- (void)_poolJPEGSurface:(struct __IOSurface *)arg1;
- (struct __IOSurface *)_getPooledJPEGSurfaceOfSize:(unsigned int)arg1;
- (void)_pool420Surface:(struct __IOSurface *)arg1;
- (struct __IOSurface *)_getPooled420Surface;
- (BOOL)_removeJPEGSurface;
- (struct __IOSurface *)_createJPEGSurface;
- (BOOL)_remove420Surface;
- (struct __IOSurface *)_create420Surface;
- (void)dealloc;
- (void)decodeSurfaceFromJPEGPath:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)decodeSurfaceFromJPEGData:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)returnToPool:(struct __IOSurface *)arg1;
- (struct __IOSurface *)newSurfaceFromJPEGData:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 cachedCount:(int)arg2;

@end

