/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_queue>, NSString, TSUDispatchData;

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    BOOL _isClosed;
    TSUDispatchData *_streamData;
    NSObject<OS_dispatch_queue> *_streamQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)init;
- (id)serializedData;
- (void)writeData:(id)arg1;

@end
