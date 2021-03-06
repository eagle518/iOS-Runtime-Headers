/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface PLIOSurfaceData : NSData {
    const void *_bytes;
    unsigned int _length;
    struct __IOSurface { } *_surface;
}

+ (id)dataWithIOSurface:(void*)arg1;

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithIOSurface:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithIOSurface:(void*)arg1;
- (unsigned int)length;

@end
