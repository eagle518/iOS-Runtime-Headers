/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;



@interface NSDataMessageStore : MessageStore 
{
    NSData *_data;
}


- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)storePath;
- (void)writeUpdatedMessageDataToDisk;
- (id)message;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;

@end