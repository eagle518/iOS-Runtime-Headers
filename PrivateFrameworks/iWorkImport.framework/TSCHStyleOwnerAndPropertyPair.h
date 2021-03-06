/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHStyleOwnerReference;

@interface TSCHStyleOwnerAndPropertyPair : NSObject <NSCopying> {
    int mProperty;
    TSCHStyleOwnerReference *mStyleOwnerReference;
}

+ (id)pairWithStyleOwnerReference:(id)arg1 property:(int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithStyleOwnerReference:(id)arg1 property:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)property;
- (id)styleOwnerReference;

@end
